// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class TANK_BLITZ_TEMP_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	// Set throttle values between -1 and +1
	UFUNCTION(BlueprintCallable, Category = Input)
	void SetThrottle(float Throttle);
	
	UPROPERTY(EditDefaultsOnly)
	float TrackMaxDrivingForce = 400000;

private:
	UTankTrack();

	TArray<class ASprungWheel*> GetWheels() const;

	void DriveTrack(float CurrentThrottle);

};
