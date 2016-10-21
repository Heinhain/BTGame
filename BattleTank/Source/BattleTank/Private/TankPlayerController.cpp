// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"


void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Using TankPlayerController C++ Base Class"));
	ControlledTank = GetControlledTank();
	if (ControlledTank != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controler controls a %s"), *ControlledTank->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Can not recieve controlled Tank"));
	}
}


ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}