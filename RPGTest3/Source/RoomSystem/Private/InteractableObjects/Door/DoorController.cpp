// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObjects/Door/DoorController.h"

ADoorController::ADoorController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ADoorController::AbleDoor(ADoor* Door, FDoorInfo DoorInfo)
{
	Door->Active(DoorInfo);
}

void ADoorController::DisableDoor(ADoor* Door)
{
	Door->Deactive();
}

void ADoorController::InitDoors(TArray<FDoorInfo> Doors)
{
	TArray<ADoor*> DisableDoors;

	DisableDoors.Add(UpDoor);
	DisableDoors.Add(RightDoor);
	DisableDoors.Add(DownDoor);
	DisableDoors.Add(LeftDoor);
	
	for (auto DoorInfo: Doors)
	{
		ADoor* Door = CorrespondingDoors[DoorInfo.Direction];
		AbleDoor(Door, DoorInfo);
		DisableDoors.Remove(Door);
	}

	for (auto Door : DisableDoors)
	{
		DisableDoor(Door);
	}
}

void ADoorController::InitMap()
{
	CorrespondingDoors.Add(EDirection::Up, UpDoor);
	CorrespondingDoors.Add(EDirection::Right, RightDoor);
	CorrespondingDoors.Add(EDirection::Down, DownDoor);
	CorrespondingDoors.Add(EDirection::Left, LeftDoor);
}

void ADoorController::BeginPlay()
{
	Super::BeginPlay();
	InitMap();
}

