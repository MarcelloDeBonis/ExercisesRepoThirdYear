// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObjects/Fountain/FountainController.h"

AFountainController::AFountainController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFountainController::AbleFountain()
{
	Fountain->Active();
}

void AFountainController::DisableFountain()
{
	Fountain->Deactive();
}

