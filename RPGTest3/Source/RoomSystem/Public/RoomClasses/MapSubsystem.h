// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Room.h"
#include "Subsystems/WorldSubsystem.h"
#include "MapSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class ROOMSYSTEM_API UMapSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:

	URoom* GetRoomAt(int X, int Y);
	void GenerateMap(int Width, int Height, int PathLenght);
	
private:

	UPROPERTY()
	TArray<URoom*> Map;

	void GeneratePath(URoom* Start, URoom* End);
	bool AttachRooms(URoom* RoomA, URoom* RoomB);
	EDirection DirectionToGoToB(URoom* RoomA, URoom* RoomB);
};
