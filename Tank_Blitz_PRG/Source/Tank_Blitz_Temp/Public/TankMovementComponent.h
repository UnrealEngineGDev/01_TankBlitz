// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "TankMovementComponent.generated.h"

class UTankTrack;

/**
 * Responsible from driving the tank track
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TANK_BLITZ_TEMP_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = Setup)
	void Initialise(UTankTrack* LeftTankTrackToSet, UTankTrack* RightTankTrackToSet);

	UFUNCTION(BlueprintCallable, Category = Input)
	void IntendMoveForward(float Throw);

	UFUNCTION(BlueprintCallable, Category = Input)
	void IntendTurnRight(float Throw);

	// TODO check best protection
	virtual void RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed) override;
	
private:
	UTankTrack* LeftTrack = nullptr;
	UTankTrack* RightTrack = nullptr;
};
