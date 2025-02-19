// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "AIController.h"
#include "TankAIController.generated.h"

class ATank;

UCLASS()
class TANKSBATTLE_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	ATank* GetTank() const;
	ATank*	GetPlayerTank() const;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	
};
