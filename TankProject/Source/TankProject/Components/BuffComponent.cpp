// Fill out your copyright notice in the Description page of Project Settings.


#include "BuffComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TankProject/Player/TankPlayerCharacter.h"
#include "TankProject/Components/CombatComponent.h"

// Sets default values for this component's properties
UBuffComponent::UBuffComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UBuffComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UBuffComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UBuffComponent::BuffSpeed(float BuffBaseSpeed, float BuffTime)
{
	if (PlayerCharacter == nullptr) return;

	PlayerCharacter->GetWorldTimerManager().SetTimer(
		SpeedBuffTimer,
		this,
		&UBuffComponent::ResetSpeeds,
		BuffTime
	);

	if (PlayerCharacter->GetCharacterMovement())
	{
		PlayerCharacter->GetCharacterMovement()->MaxWalkSpeed = BuffBaseSpeed;
	}
	MulticastSpeedBuff(BuffBaseSpeed);
}

void UBuffComponent::SetInitialSpeeds(float BaseSpeed)
{
	InitialBaseSpeed = BaseSpeed;
}

void UBuffComponent::ResetSpeeds()
{
	if (PlayerCharacter == nullptr || PlayerCharacter->GetCharacterMovement() == nullptr) return;

	PlayerCharacter->GetCharacterMovement()->MaxWalkSpeed = InitialBaseSpeed;
	MulticastSpeedBuff(InitialBaseSpeed);
}

void UBuffComponent::MulticastSpeedBuff_Implementation(float BaseSpeed)
{
	PlayerCharacter->GetCharacterMovement()->MaxWalkSpeed = BaseSpeed;
}

void UBuffComponent::BuffFireRate(float BuffBaseFireRate, float BuffTime)
{
	if (PlayerCharacter == nullptr) return;

	PlayerCharacter->GetWorldTimerManager().SetTimer(
		FireRateBuffTimer,
		this,
		&UBuffComponent::ResetFireRate,
		BuffTime
	);

	PlayerCharacter->GetCombatComponent()->SetFireRate(BuffBaseFireRate);

	MulticastFireRateBuff(BuffBaseFireRate);
}

void UBuffComponent::SetInitialFireRate(float BaseFireRate)
{
	InitialFireRate = BaseFireRate;
}

void UBuffComponent::ResetFireRate()
{
	if (PlayerCharacter == nullptr || PlayerCharacter->GetCombatComponent() == nullptr) return;

	PlayerCharacter->GetCombatComponent()->SetFireRate(InitialFireRate);
	MulticastFireRateBuff(InitialFireRate);
}

void UBuffComponent::MulticastFireRateBuff_Implementation(float BaseFireRate)
{
	PlayerCharacter->GetCombatComponent()->SetFireRate(BaseFireRate);
}
