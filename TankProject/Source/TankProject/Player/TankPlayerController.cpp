// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Components/SplineComponent.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "GameFramework/Character.h"
#include "TankPlayerCharacter.h"
#include "TankProject/Components/CombatComponent.h"
#include "TankProject/HUD/TankHUD.h"
#include "TankProject/HUD/OverlayWidget.h"
#include "Components/TextBlock.h"

ATankPlayerController::ATankPlayerController()
{
	bReplicates = true;

	Spline = CreateDefaultSubobject<USplineComponent>("Spline");
}

void ATankPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	CursorTrace();
	AutoRun();
	
	SetHUDTime();
	CheckTimeSync(DeltaTime);
}

void ATankPlayerController::AutoRun()
{
	if (!bAutoRunning) return;
	if (APawn* ControlledPawn = GetPawn())
	{
		//Add Splines in order to make a smoother travel path

		const FVector LocationOnSpline = Spline->FindLocationClosestToWorldLocation(ControlledPawn->GetActorLocation(), ESplineCoordinateSpace::World);
		const FVector Direction = Spline->FindDirectionClosestToWorldLocation(LocationOnSpline, ESplineCoordinateSpace::World);
		ControlledPawn->AddMovementInput(Direction);

		const float DistanceToDestination = (LocationOnSpline - CachedDestination).Length();
		if (DistanceToDestination <= AutoRunAcceptanceRadius)
		{
			bAutoRunning = false;
		}
	}
}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	check(PlayerContext);

	//Init enhanced input
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if (Subsystem)
	{
		Subsystem->AddMappingContext(PlayerContext, 0);
	}

	OwningPlayer = Cast<ATankPlayerCharacter>(GetCharacter());

	//Values for cursor
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;

	FInputModeGameAndUI InputModeData;
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputModeData.SetHideCursorDuringCapture(false);
	SetInputMode(InputModeData);

	TankHUD = Cast<ATankHUD>(GetHUD());
}

void ATankPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);

	EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Triggered, this, &ATankPlayerController::Shoot);
	EnhancedInputComponent->BindAction(LMBAction, ETriggerEvent::Started, this, &ATankPlayerController::LMBPressed);
	EnhancedInputComponent->BindAction(LMBAction, ETriggerEvent::Triggered, this, &ATankPlayerController::LMBHeld);
	EnhancedInputComponent->BindAction(LMBAction, ETriggerEvent::Completed, this, &ATankPlayerController::LMBReleased);

}

void ATankPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
}

void ATankPlayerController::SetHUDTime()
{
	uint32 SecondsLeft = FMath::CeilToInt(MatchTime - GetServerTime());
	if (CountdownInt != SecondsLeft && !bStopCounting) 
	{
		SetHUDMatchCountdown(MatchTime - GetServerTime());
	}

	CountdownInt = SecondsLeft;
}

void ATankPlayerController::PollInit()
{
	if (CharacterOverlay == nullptr)
	{
		if (TankHUD && TankHUD->OverlayWidget)
		{
			CharacterOverlay = TankHUD->OverlayWidget;
		}
	}
}

float ATankPlayerController::GetServerTime()
{
	if (HasAuthority()) return GetWorld()->GetTimeSeconds();
	else return GetWorld()->GetTimeSeconds() + ClientServerDelta;
}

void ATankPlayerController::ReceivedPlayer()
{
	Super::ReceivedPlayer();
	if (IsLocalController())
	{
		ServerRequestServerTime(GetWorld()->GetTimeSeconds());
	}
}

void ATankPlayerController::ServerRequestServerTime_Implementation(float TimeOfClientRequest)
{
	float ServerTimeOfReceipt = GetWorld()->GetTimeSeconds();
	ClientReportServerTime(TimeOfClientRequest, ServerTimeOfReceipt);
}

void ATankPlayerController::ClientReportServerTime_Implementation(float TimeOfClientRequest, float TimeServerReceivedClientRequest)
{
	float RoundTripTime = GetWorld()->GetTimeSeconds() - TimeOfClientRequest;
	float CurrentServerTime = TimeServerReceivedClientRequest + (0.5f * RoundTripTime);
	ClientServerDelta = CurrentServerTime - GetWorld()->GetTimeSeconds();
}

void ATankPlayerController::CheckTimeSync(float DeltaTime)
{
	TimeSyncRunningTime += DeltaTime;
	if (IsLocalController() && TimeSyncRunningTime > TimeSyncFrequency)
	{
		ServerRequestServerTime(GetWorld()->GetTimeSeconds());
		TimeSyncRunningTime = 0.f;
	}
}

void ATankPlayerController::Shoot(const FInputActionValue& InputActionValue)
{
	if (!bOnCooldown)
	{
		OwningPlayer->GetCombatComponent()->StartShooting();
	}
}

void ATankPlayerController::LMBPressed()
{
	bAutoRunning = false;
}

void ATankPlayerController::LMBReleased()
{
	//Check if the follow time is lower than press threshold to determine if player should auto move
	APawn* ControlledPawn = GetPawn();
	if (FollowTime <= ShortPressThreshold && ControlledPawn)
	{
		if (UNavigationPath* NavPath = UNavigationSystemV1::FindPathToLocationSynchronously(this, ControlledPawn->GetActorLocation(), CachedDestination))
		{
			Spline->ClearSplinePoints();
			for (const FVector& PointLoc : NavPath->PathPoints)
			{
				Spline->AddSplinePoint(PointLoc, ESplineCoordinateSpace::World);
			}
			if (NavPath->PathPoints.Num() > 0)
			{
				CachedDestination = NavPath->PathPoints[NavPath->PathPoints.Num() - 1];
				bAutoRunning = true;
			}
		}
	}
	FollowTime = 0.f;
}

void ATankPlayerController::LMBHeld()
{
	FollowTime += GetWorld()->GetDeltaSeconds();

	//check if proper hit to move
	if (CursorHit.bBlockingHit)
	{
		CachedDestination = CursorHit.ImpactPoint;
	}

	//add movement
	if (APawn* ControlledPawn = GetPawn())
	{
		const FVector WorldDirection = (CachedDestination - ControlledPawn->GetActorLocation()).GetSafeNormal();
		ControlledPawn->AddMovementInput(WorldDirection);
	}
}

void ATankPlayerController::CursorTrace()
{
	//do the trace
	GetHitResultUnderCursor(ECC_Visibility, false, CursorHit);
	if (!CursorHit.bBlockingHit) return;

}

void ATankPlayerController::InitTeamScores()
{
	//Add values for Scores and check if nullptr
	TankHUD = TankHUD == nullptr ? Cast<ATankHUD>(GetHUD()) : TankHUD;
	bool bHUDValid = TankHUD &&
		TankHUD->OverlayWidget &&
		TankHUD->OverlayWidget->RedTeamScore &&
		TankHUD->OverlayWidget->BlueTeamScore &&
		TankHUD->OverlayWidget->ScoreSpacerText;
	if (bHUDValid)
	{
		FString Zero("0");
		FString Spacer("|");
		TankHUD->OverlayWidget->RedTeamScore->SetText(FText::FromString(Zero));
		TankHUD->OverlayWidget->BlueTeamScore->SetText(FText::FromString(Zero));
		TankHUD->OverlayWidget->ScoreSpacerText->SetText(FText::FromString(Spacer));

	}
	
	if(TankHUD == nullptr || TankHUD->OverlayWidget == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Valid??"));
	}
	
}

void ATankPlayerController::SetHUDRedTeamScore(int32 RedScore)
{
	//Set score for red
	TankHUD = TankHUD == nullptr ? Cast<ATankHUD>(GetHUD()) : TankHUD;
	bool bHUDValid = TankHUD &&
		TankHUD->OverlayWidget &&
		TankHUD->OverlayWidget->RedTeamScore;
	if (bHUDValid)
	{
		FString ScoreText = FString::Printf(TEXT("%d"), RedScore);
		TankHUD->OverlayWidget->RedTeamScore->SetText(FText::FromString(ScoreText));
	}
}

void ATankPlayerController::SetHUDBlueTeamScore(int32 BlueScore)
{
	//Set score for blue
	TankHUD = TankHUD == nullptr ? Cast<ATankHUD>(GetHUD()) : TankHUD;
	bool bHUDValid = TankHUD &&
		TankHUD->OverlayWidget &&
		TankHUD->OverlayWidget->BlueTeamScore;
	if (bHUDValid)
	{
		FString ScoreText = FString::Printf(TEXT("%d"), BlueScore);
		TankHUD->OverlayWidget->BlueTeamScore->SetText(FText::FromString(ScoreText));
	}
}

void ATankPlayerController::SetHUDMatchCountdown(float CountdownTime)
{
	//Update countdown and stop if reaching 0. For now...
	TankHUD = TankHUD == nullptr ? Cast<ATankHUD>(GetHUD()) : TankHUD;
	bool bHUDValid = TankHUD &&
		TankHUD->OverlayWidget &&
		TankHUD->OverlayWidget->MatchCountdownText;
	if (bHUDValid)
	{
		int32 Minutes = FMath::FloorToInt(CountdownTime / 60.f);
		int32 Seconds = CountdownTime - Minutes * 60;

		FString CountdownText = FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);
		TankHUD->OverlayWidget->MatchCountdownText->SetText(FText::FromString(CountdownText));

		if (Minutes == 0 && Seconds == 0)
		{
			bStopCounting = true;
 		}
	}
}