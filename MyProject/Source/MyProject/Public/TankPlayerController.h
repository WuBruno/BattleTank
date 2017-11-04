// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // Must be the last include 

/**
 * 
 */
UCLASS()
class MYPROJECT_API ATankPlayerController : public APlayerController{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;
	ATank * GetControlledTank() const;
	virtual void Tick(float DeltaSeconds) override;
	//Start the tan kmoving the barrel so that a shot would hit where
	//the crosshair intersects the world 
	void AimTowardsCrosshair(); 
};
