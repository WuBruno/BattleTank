// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	void BeginPlay() override;
	ATank * GetControlledTank() const;
};
