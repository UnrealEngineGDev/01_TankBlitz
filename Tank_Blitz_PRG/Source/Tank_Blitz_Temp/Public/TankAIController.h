// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

class ATank;

/**
 * 
 */
UCLASS()
class TANK_BLITZ_TEMP_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
protected:
	// Check for the AI and Player distance after the movement
	UPROPERTY(EditAnywhere, Category = Setup)
	float AcceptanceRadius = 8000;

private:
	void BeginPlay() override;

	virtual void SetPawn(APawn* InPawn) override;

	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION()
	void OnPossedTankDeath();
};
