// Fill out your copyright notice in the Description page of Project Settings.


#include "TankGameState.h"
#include "Net/UnrealNetwork.h"
#include "Player/TankPlayerState.h"
#include "Player/TankPlayerController.h"

void ATankGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ATankGameState, RedTeamScore);
	DOREPLIFETIME(ATankGameState, BlueTeamScore);
}

void ATankGameState::RedTeamScores()
{
	++RedTeamScore;

	ATankPlayerController* TankPlayer = Cast<ATankPlayerController>(GetWorld()->GetFirstPlayerController());
	if (TankPlayer)
	{
		TankPlayer->SetHUDRedTeamScore(RedTeamScore);
	}
}

void ATankGameState::BlueTeamScores()
{
	++BlueTeamScore;

	ATankPlayerController* TankPlayer = Cast<ATankPlayerController>(GetWorld()->GetFirstPlayerController());
	if (TankPlayer)
	{
		TankPlayer->SetHUDBlueTeamScore(BlueTeamScore);
	}
}

void ATankGameState::OnRep_RedTeamScore()
{
	ATankPlayerController* TankPlayer = Cast<ATankPlayerController>(GetWorld()->GetFirstPlayerController());
	if (TankPlayer)
	{
		TankPlayer->SetHUDRedTeamScore(RedTeamScore);
	}
}

void ATankGameState::OnRep_BlueTeamScore()
{
	ATankPlayerController* TankPlayer = Cast<ATankPlayerController>(GetWorld()->GetFirstPlayerController());
	if (TankPlayer)
	{
		TankPlayer->SetHUDBlueTeamScore(BlueTeamScore);
	}
}
