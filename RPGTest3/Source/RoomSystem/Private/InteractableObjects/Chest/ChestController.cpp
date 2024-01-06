// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObjects/Chest/ChestController.h"

AChestController::AChestController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AChestController::AbleChest()
{
	Chest->Active();
}

void AChestController::DisableChest()
{
	Chest->Deactive();
}


