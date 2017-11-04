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
	
private:
	virtual void BeginPlay() override;
	ATank * GetControlledTank() const;
	virtual void Tick(float DeltaSeconds) override;
	//Start the tan kmoving the barrel so that a shot would hit where
	//the crosshair intersects the world 
	void AimTowardsCrosshair(); 
	// Return an OUT parameter, true if hit landscape
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;
	
	UPROPERTY(EditAnywhere)
	float CrossHairXLocation = 0.5;

	UPROPERTY(EditAnywhere)
	float CrossHairYLocation = 0.3333;
};
