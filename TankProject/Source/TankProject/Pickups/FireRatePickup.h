// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "FireRatePickup.generated.h"

/**
 * 
 */
UCLASS()
class TANKPROJECT_API AFireRatePickup : public APickup
{
	GENERATED_BODY()

protected:

	virtual void OnSphereOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);
private:

	UPROPERTY(EditAnywhere)
	float FireRateBuff = 0.65f;

	UPROPERTY(EditAnywhere)
	float FireRateBuffTime = 4.5f;
};
