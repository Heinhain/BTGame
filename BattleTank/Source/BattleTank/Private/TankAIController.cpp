// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAIController.h"




void ATankAIController::BeginPlay()
{
	Super::BeginPlay();	
	ControlledTank = GetControlledTank();
	if (ControlledTank != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controler controls a %s"), *ControlledTank->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Can not recieve controlled Tank"));
	}
}


ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}