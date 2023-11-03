// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedPickup.h"
#include "TankProject/Player/TankPlayerCharacter.h"
#include "TankProject/Components/BuffComponent.h"

void ASpeedPickup::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	ATankPlayerCharacter* TankCharacter = Cast<ATankPlayerCharacter>(OtherActor);
	if (TankCharacter)
	{
		UBuffComponent* Buff = TankCharacter->GetBuffComponent();
		if (Buff)
		{
			Buff->BuffSpeed(BaseSpeedBuff, SpeedBuffTime);
		}
	}

	Destroy();
}
