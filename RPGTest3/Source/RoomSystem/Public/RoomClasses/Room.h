// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RoomInfo.h"
#include "InteractableObjects/Door/DoorInfo.h"
#include "UObject/Object.h"
#include "Room.generated.h"

/**
 * 
 */
UCLASS()
class ROOMSYSTEM_API URoom : public UObject
{
	GENERATED_BODY()
public:
	URoom();
	void Init(FRoomInfo RoomInfo, int _X, int _Y);
	FRoomInfo GetInfo();
	TArray<FDoorInfo> GetDoors();
	TTuple<int, int> GetCoordinates();
	bool AddDoor(FDoorInfo Door);
	
private:
	
	FRoomInfo Info = FRoomInfo();
	TArray<FDoorInfo> Doors;
	int X = 0;
	int Y = 0;
};
