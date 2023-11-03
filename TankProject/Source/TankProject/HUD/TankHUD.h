// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TankHUD.generated.h"

/**
 * 
 */
UCLASS()
class TANKPROJECT_API ATankHUD : public AHUD
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;
	void AddCharacterOverlay();
	
public:

	UPROPERTY(EditAnywhere, Category = "Player Stats")
	TSubclassOf<class UUserWidget> CharacterOverlayClass;

	UPROPERTY()
	class UOverlayWidget* OverlayWidget;

	virtual void DrawHUD() override;
};
