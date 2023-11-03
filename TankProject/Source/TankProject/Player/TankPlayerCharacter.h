// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "TankProject/Teams.h"

#include "TankPlayerCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UWidgetComponent;
class UCombatComponent;
class ATankPlayerController;
class UBuffComponent;
class ATankGameMode;
class ATankPlayerState;

UCLASS()
class TANKPROJECT_API ATankPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATankPlayerCharacter();

	void OnHit(ATankPlayerController* InstigatorController);

	void Eliminated();

	UFUNCTION(NetMulticast, Reliable)
 	void MulticastEliminated();

	void PollInit();

	void SetTeamColor(ETeam Team);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;

private:

	ATankPlayerController* VictimPlayerController;

	UPROPERTY()
	TObjectPtr<ATankPlayerController> PlayerController;

	UPROPERTY()
	TObjectPtr<ATankPlayerState> TankPlayerState;

	UPROPERTY()
	TObjectPtr<ATankGameMode> TankGameMode;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UCameraComponent> TopDownCameraComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USpringArmComponent> CameraBoom;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UWidgetComponent> OverheadWidget;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UCombatComponent> CombatComponent;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UBuffComponent> BuffComponent;

	bool bEliminated = false;

	FTimerHandle ElimiTimer;

	UPROPERTY(EditDefaultsOnly)
	float ElimDelay = .1f;

	void ElimTimerFinished();

	/**
	* Team colors
	*/

	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* RedMaterial;

	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* BlueMaterial;

	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* OriginalMaterial;

public:

	FORCEINLINE UCombatComponent* GetCombatComponent() { return CombatComponent; } 
	FORCEINLINE UBuffComponent* GetBuffComponent() { return BuffComponent; }
	FORCEINLINE bool GetIsEliminated() { return bEliminated; }
};
