// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "MyProject.h"
#include "TankAIController.generated.h"


/**
 * 
 */
UCLASS()
class MYPROJECT_API ATankAIController : public AAIController
{
	GENERATED_BODY()
public: 
	void BeginPlay() override;
private: 
	ATank * GetControlledTank() const;
	ATank * GetPlayerTank() const;
	virtual void Tick(float DeltaSeconds) override;
};
