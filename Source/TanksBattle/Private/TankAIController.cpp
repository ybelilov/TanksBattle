// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"


ATank* ATankAIController::GetTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank * ATankAIController::GetPlayerTank() const
{
	return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	/*auto ControlledTank = GetTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController not possessing"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController possessing: %s"), *(ControlledTank->GetName()));
	}
	auto PlayerTank = GetPlayerTank();
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Tank not found!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Tank found!"));
	}*/
}


