// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TankGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TANKPROJECT_API ATankGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	
	virtual void BeginPlay() override;

	//Func to take care of other players joining and assign teams
	virtual void PostLogin(APlayerController* NewPlayer) override;

	//Elim player and add score
	virtual void PlayerEliminated(class ATankPlayerCharacter* ElimmedCharacter, class ATankPlayerController* VictimController, ATankPlayerController* AttackerController);

	//Reset and spawn to random player start
	virtual void RequestRespawn(ACharacter* ElimmedCharacter, AController* ElimmedController);

	//Check if in same team or not
	bool ShouldDamage(AController* Attacker, AController* Victim);

protected:

	//Assign teams mostly for server?
	virtual void HandleMatchHasStarted() override;

	//Used to init team score
	virtual void OnMatchStateSet() override;
};
