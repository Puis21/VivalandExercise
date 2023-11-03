// Fill out your copyright notice in the Description page of Project Settings.


#include "TankHUD.h"
#include "GameFramework/PlayerController.h"
#include "OverlayWidget.h"

void ATankHUD::BeginPlay()
{
	Super::BeginPlay();

	AddCharacterOverlay();
}

void ATankHUD::AddCharacterOverlay()
{
	APlayerController* PlayerController = GetOwningPlayerController();
	if (PlayerController && CharacterOverlayClass)
	{
		OverlayWidget = CreateWidget<UOverlayWidget>(PlayerController, CharacterOverlayClass);
		OverlayWidget->AddToViewport();
	}
}

void ATankHUD::DrawHUD()
{
	Super::DrawHUD();
}
