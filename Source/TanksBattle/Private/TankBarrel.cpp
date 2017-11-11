// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"

void	UTankBarrel::Elevate(float RelativeSpeed)
{
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, 1);

	auto ElevatingChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawNewElevation = RelativeRotation.Pitch + ElevatingChange;
	auto Elevation = FMath::Clamp<float>(RawNewElevation, MinElevationDegrees, MaxElevationDegrees);

	SetRelativeRotation(FRotator(Elevation, 0, 0));
}


