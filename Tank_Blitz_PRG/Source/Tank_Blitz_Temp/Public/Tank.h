// Copyright ZyokoIT Ltd

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

UCLASS()
class TANK_BLITZ_TEMP_API ATank : public APawn
{
	GENERATED_BODY()

public:
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const & DamageEvent, class AController * EventInstigator, AActor * DamageCauser) override;

	// Sets default values for this pawn's properties
	ATank();

private:
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	int32 StartingHealth = 100;

	UPROPERTY(VisibleAnywhere, Category = Setup)
	int32 CurrentHealth = StartingHealth;
};