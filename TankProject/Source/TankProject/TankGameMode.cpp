// Fill out your copyright notice in the Description page of Project Settings.


#include "TankGameMode.h"
#include "Player/TankPlayerCharacter.h"
#include "Player/TankPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerStart.h"
#include "Player/TankPlayerState.h"
#include "TankGameState.h"

void ATankGameMode::BeginPlay()
{
	Super::BeginPlay();

	StartMatch();
}

void ATankGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	//Loop to get all available players and compare team numbers so they are as balanced as possible
	ATankGameState* TGameState = Cast<ATankGameState>(UGameplayStatics::GetGameState(this));
	if (TGameState)
	{
		ATankPlayerState* TPState = NewPlayer->GetPlayerState<ATankPlayerState>();
		if (TPState && TPState->GetTeam() == ETeam::ET_NoTeam)
		{
			if (TGameState->BlueTeam.Num() >= TGameState->RedTeam.Num())
			{
				TGameState->RedTeam.AddUnique(TPState);
				TPState->SetTeam(ETeam::ET_RedTeam);
			}
			else
			{
				TGameState->BlueTeam.AddUnique(TPState);
				TPState->SetTeam(ETeam::ET_BlueTeam);
			}
		}
	}
}

void ATankGameMode::PlayerEliminated(ATankPlayerCharacter* ElimmedCharacter, ATankPlayerController* VictimController, ATankPlayerController* AttackerController)
{
	if (ElimmedCharacter)
	{
		ElimmedCharacter->Eliminated();
	}

	ATankGameState* TGameState = Cast<ATankGameState>(UGameplayStatics::GetGameState(this));
	ATankPlayerState* AttackerPlayerState = AttackerController ? Cast<ATankPlayerState>(AttackerController->PlayerState) : nullptr;
	if (TGameState && AttackerPlayerState)
	{
		if (AttackerPlayerState->GetTeam() == ETeam::ET_BlueTeam)
		{
			TGameState->BlueTeamScores(); //Score Blue
		}
		if (AttackerPlayerState->GetTeam() == ETeam::ET_RedTeam)
		{
			TGameState->RedTeamScores(); //Score Red
		}
	}
}

void ATankGameMode::RequestRespawn(ACharacter* ElimmedCharacter, AController* ElimmedController)
{
	if (ElimmedCharacter)
	{
		ElimmedCharacter->Reset();
		ElimmedCharacter->Destroy();
	}
	if (ElimmedController)
	{
		TArray<AActor*> PlayerStarts;
		UGameplayStatics::GetAllActorsOfClass(this, APlayerStart::StaticClass(), PlayerStarts);
		int32 Selection = FMath::RandRange(0, PlayerStarts.Num() - 1);
		RestartPlayerAtPlayerStart(ElimmedController, PlayerStarts[Selection]); //Find player start and spawn to a random one
	}
}

bool ATankGameMode::ShouldDamage(AController* Attacker, AController* Victim)
{
	ATankPlayerState* AttackPlayerState = Attacker->GetPlayerState<ATankPlayerState>();
	ATankPlayerState* VictimPlayerState = Victim->GetPlayerState<ATankPlayerState>();
	if(AttackPlayerState == nullptr || VictimPlayerState == nullptr) return false;

	if (AttackPlayerState->GetTeam() == VictimPlayerState->GetTeam())
	{
		return false;
	}

	return true;
}

void ATankGameMode::HandleMatchHasStarted()
{
	Super::HandleMatchHasStarted();

	//Loop to get all available players and compare team numbers so they are as balanced as possible
	ATankGameState* TGameState = Cast<ATankGameState>(UGameplayStatics::GetGameState(this));
	if (TGameState)
	{
		for (auto PState : TGameState->PlayerArray)
		{
			ATankPlayerState* TPState = Cast<ATankPlayerState>(PState.Get());
			if (TPState && TPState->GetTeam() == ETeam::ET_NoTeam)
			{
				if (TGameState->BlueTeam.Num() >= TGameState->RedTeam.Num())
				{
					TGameState->RedTeam.AddUnique(TPState);
					TPState->SetTeam(ETeam::ET_RedTeam);
				}
				else
				{
					TGameState->BlueTeam.AddUnique(TPState);
					TPState->SetTeam(ETeam::ET_BlueTeam);
				}
			}
		}
	}
}

void ATankGameMode::OnMatchStateSet()
{
	Super::OnMatchStateSet();

	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		ATankPlayerController* TankPlayer = Cast<ATankPlayerController>(*It);
		if (TankPlayer)
		{
			TankPlayer->InitTeamScores();
		}
	}
}
