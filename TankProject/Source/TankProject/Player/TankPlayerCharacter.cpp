// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TankPlayerController.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "TankProject/Components/CombatComponent.h"
#include "TankProject/Components/BuffComponent.h"
#include "TankProject/Player/TankPlayerState.h"
#include "TankProject/TankGameMode.h"
#include "TimerManager.h"
#include "Components/WidgetComponent.h"

// Sets default values
ATankPlayerCharacter::ATankPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->SetUsingAbsoluteRotation(true);
	CameraBoom->bDoCollisionTest = false;

	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>("TopDownCameraComponent");
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	CombatComponent = CreateDefaultSubobject<UCombatComponent>("CombatComp");
	CombatComponent->SetIsReplicated(true);

	BuffComponent = CreateDefaultSubobject<UBuffComponent>(TEXT("BuffComponent"));
	BuffComponent->SetIsReplicated(true);

	OverheadWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("OverheadWidget"));
	OverheadWidget->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ATankPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATankPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	PollInit();
	
}

void ATankPlayerCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	if (CombatComponent)
	{
		CombatComponent->PlayerCharacter = this;
	}
	if (BuffComponent)
	{
		BuffComponent->PlayerCharacter = this;
		BuffComponent->SetInitialSpeeds(GetCharacterMovement()->MaxWalkSpeed);
		BuffComponent->SetInitialFireRate(GetCombatComponent()->GetFireRate());
	}
}

void ATankPlayerCharacter::OnHit(ATankPlayerController* InstigatorController)
{
	TankGameMode = TankGameMode == nullptr ? GetWorld()->GetAuthGameMode<ATankGameMode>() : TankGameMode;
	if(TankGameMode == nullptr) return;
	
	if (InstigatorController)
	{
		VictimPlayerController = VictimPlayerController == nullptr ? Cast<ATankPlayerController>(Controller) : VictimPlayerController; //Get the victim

		if (TankGameMode->ShouldDamage(InstigatorController, VictimPlayerController))
		{
			TankGameMode->PlayerEliminated(this, VictimPlayerController, InstigatorController);
		}
	}
}
void ATankPlayerCharacter::Eliminated()
{
	MulticastEliminated();
	GetWorldTimerManager().SetTimer(ElimiTimer, this, &ATankPlayerCharacter::ElimTimerFinished, ElimDelay);
}
void ATankPlayerCharacter::MulticastEliminated_Implementation()
{
	bEliminated = true;

	// Disable character movement
	GetCharacterMovement()->DisableMovement();
	GetCharacterMovement()->StopMovementImmediately();
	if (PlayerController)
	{
		DisableInput(PlayerController);
	}
	// Disable collision
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

void ATankPlayerCharacter::ElimTimerFinished()
{
	TankGameMode = TankGameMode == nullptr ? GetWorld()->GetAuthGameMode<ATankGameMode>() : TankGameMode;
	if (TankGameMode)
	{
		TankGameMode->RequestRespawn(this, Controller);
	}
}

void ATankPlayerCharacter::SetTeamColor(ETeam Team)
{
	if (GetMesh() == nullptr || OriginalMaterial == nullptr) return;
	switch (Team)
	{
	case ETeam::ET_NoTeam:
		GetMesh()->SetMaterial(0, OriginalMaterial);
		break;
	case ETeam::ET_BlueTeam:
		GetMesh()->SetMaterial(0, BlueMaterial);
		break;
	case ETeam::ET_RedTeam:
		GetMesh()->SetMaterial(0, RedMaterial);
		break;
	}

}

void ATankPlayerCharacter::PollInit()
{
	if (TankPlayerState == nullptr)
	{
		TankPlayerState = GetPlayerState<ATankPlayerState>();
		if (TankPlayerState)
		{
			SetTeamColor(TankPlayerState->GetTeam());
		}
	}
}
