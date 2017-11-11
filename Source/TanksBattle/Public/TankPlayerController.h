// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

class ATank;
/**
 * 
 */
UCLASS()
class TANKSBATTLE_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	float	CrosshairXLocation = 0.5;

	UPROPERTY(EditAnywhere)
	float	CrosshairYLocation = 0.33;

	UPROPERTY(EditAnywhere)
	float	LineTraceRange = 10000000;
	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	ATank*	GetControlledTank() const;
	void	AimTowardsCrosshair();
	bool	GetSightHitLocation(FVector& HitLocation) const;
	bool	GetLookDirection(FVector2D ScreenLocation, FVector & LookDirection) const;
	bool	GetLookVectorHitLocation(FVector LookDirection, FVector & HitLocation) const;
};
