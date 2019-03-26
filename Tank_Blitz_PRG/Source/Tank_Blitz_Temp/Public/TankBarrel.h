// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class TANK_BLITZ_TEMP_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// -1 is max downward movement and vice versa
	void Elevate(float RelativeSpeed);
	
private:
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSecond = 10;	// Sensible Default

	// Barrel Elevation
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxElevationDegrees = 40;	// Sensible Default

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinElevationDegrees = 0;	// Sensible Default
	
};
