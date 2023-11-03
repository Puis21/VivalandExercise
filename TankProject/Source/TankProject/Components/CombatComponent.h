// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CombatComponent.generated.h"

class AProjectileActor;
class ATankPlayerCharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TANKPROJECT_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCombatComponent();

	void StartShooting();
	void StopShooting();
	void ShootProjectile();

	UPROPERTY()
	TObjectPtr<ATankPlayerCharacter> PlayerCharacter;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//Call Fire from the Server
	UFUNCTION(Server, Reliable)
	void ServerStartShooting();

	//Call Fire from the client
	UFUNCTION(NetMulticast, Reliable)
	void MulticastFire();

private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<AProjectileActor> ProjectileClass;

	FTimerHandle TimerShots;
	bool bOnCooldown;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float fTimeBetweenShots = 2.f;

public:
	
	FORCEINLINE float GetFireRate() { return fTimeBetweenShots; }
	FORCEINLINE void SetFireRate(float NewFireRate) { fTimeBetweenShots = NewFireRate; }

};
