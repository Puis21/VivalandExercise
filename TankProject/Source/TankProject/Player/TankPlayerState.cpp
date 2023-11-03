// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerState.h"
#include "TankProject/Player/TankPlayerCharacter.h"
#include "TankProject/Player/TankPlayerController.h"
#include "Net/UnrealNetwork.h"

void ATankPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ATankPlayerState, Team);
}

void ATankPlayerState::OnRep_Team()
{
	ATankPlayerCharacter* PlayerCharacter = Cast<ATankPlayerCharacter>(GetPawn());
	if (PlayerCharacter)
	{
		PlayerCharacter->SetTeamColor(Team);
	}
}

void ATankPlayerState::SetTeam(ETeam TeamToSet)
{
	Team = TeamToSet;

	ATankPlayerCharacter* PlayerCharacter = Cast<ATankPlayerCharacter>(GetPawn());
	if (PlayerCharacter)
	{
		PlayerCharacter->SetTeamColor(Team);
	}
}
