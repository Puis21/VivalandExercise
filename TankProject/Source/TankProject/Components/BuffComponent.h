// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BuffComponent.generated.h"

class ATankPlayerCharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TANKPROJECT_API UBuffComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBuffComponent();

	void BuffSpeed(float BuffBaseSpeed, float BuffTime);
	void SetInitialSpeeds(float BaseSpeed);

	void BuffFireRate(float BuffBaseFireRate, float BuffTime);
	void SetInitialFireRate(float BaseFireRate);

	UPROPERTY()
	TObjectPtr<ATankPlayerCharacter> PlayerCharacter;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	
	/**
	* Speed buff
	*/

	FTimerHandle SpeedBuffTimer;
	void ResetSpeeds();
	float InitialBaseSpeed;

	UFUNCTION(NetMulticast, Reliable)
	void MulticastSpeedBuff(float BaseFireRate);

	/**
	* FireRate buff
	*/

	FTimerHandle FireRateBuffTimer;
	void ResetFireRate();
	float InitialFireRate;

	UFUNCTION(NetMulticast, Reliable)
	void MulticastFireRateBuff(float BaseFireRate);


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
