// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatComponent.h"
#include "TankProject/Player/TankPlayerCharacter.h"
#include "TankProject/ProjectileActor.h"
#include "Engine/SkeletalMeshSocket.h"
#include "TimerManager.h"

// Sets default values for this component's properties
UCombatComponent::UCombatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	PlayerCharacter = Cast<ATankPlayerCharacter>(GetOwner());
	check(PlayerCharacter);
}

void UCombatComponent::StartShooting()
{
	if (!bOnCooldown)
	{
		ServerStartShooting();
	}
}

void UCombatComponent::ServerStartShooting_Implementation()
{
	MulticastFire();
}

void UCombatComponent::MulticastFire_Implementation()
{
	bOnCooldown = true;
	const USkeletalMeshSocket* MeshSocket = PlayerCharacter->GetMesh()->GetSocketByName("ShootSocket");
	if (MeshSocket)
	{
		FTransform SocketTransform = MeshSocket->GetSocketTransform(PlayerCharacter->GetMesh());
		//FVector ToTarget = PlayerCharacter->GetActorForwardVector() - SocketTransform.GetLocation();

		FActorSpawnParameters Params;
		Params.Owner = GetOwner();
		Params.Instigator = Cast<APawn>(GetOwner());

		GetWorld()->SpawnActor<AProjectileActor>(ProjectileClass, SocketTransform.GetLocation(), PlayerCharacter->GetActorRotation(), Params);

		GetWorld()->GetTimerManager().SetTimer(TimerShots, this, &UCombatComponent::ShootProjectile, fTimeBetweenShots, true);
	}
}


void UCombatComponent::StopShooting()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerShots);
}

void UCombatComponent::ShootProjectile()
{	
	bOnCooldown = false;
}

