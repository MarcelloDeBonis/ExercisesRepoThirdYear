// Fill out your copyright notice in the Description page of Project Settings.


#include "RoomClasses/MapSubsystem.h"

#include "DataTableInfo.h"
#include "DataTableInfo.h"
#include "InteractableObjects/Door/DoorUtils.h"
#include "Kismet/DataTableFunctionLibrary.h"
#include "RPGTest3/Public/DataTableInfo.h"

class UDataTableInfo;

URoom* UMapSubsystem::GetRoomAt(int X, int Y)
{
	for (auto Room : Map)
	{
		if(Room->GetCoordinates().Key == X && Room->GetCoordinates().Value == Y)
		{
			return Room;
		}
	}
	return nullptr;
}

void UMapSubsystem::GenerateMap(int Width, int Height, int PathLenght)
{
	for (int X=0; X<Width; X++)
	{
		for (int Y=0; Y<Height; Y++)
		{
			FRoomInfo Info = UDataTableInfo::GetRandomStructByRowName<FRoomInfo>("/Content/DT/RoomInfoDT.uasset");
			URoom* Room = NewObject<URoom>();
			Room->Init(Info, X, Y);
			Map.Add(Room);
		}
	}
}

void UMapSubsystem::GeneratePath(URoom* Start, URoom* End)
{
}

bool UMapSubsystem::AttachRooms(URoom* RoomA, URoom* RoomB)
{
	EDirection Direction = DirectionToGoToB(RoomA, RoomB);

	if(Direction == EDirection::None)
	{
		return false;
	}

	FDoorInfo DoorA = FDoorInfo(Direction, RoomB);

	if(!RoomA->AddDoor(DoorA))
	{
		return false;
	}

	FDoorInfo DoorB = FDoorInfo(UDoorUtils::GetOppositeDirection(Direction), RoomB);
	
	if(!RoomB->AddDoor(DoorB))
	{
		return false;
	}
	
	return true;
}

EDirection UMapSubsystem::DirectionToGoToB(URoom* RoomA, URoom* RoomB)
{
	TTuple<int, int> CoordinantesA = RoomA->GetCoordinates();
	TTuple<int, int> CoordinantesB = RoomB->GetCoordinates();

	if(CoordinantesA.Key == CoordinantesB.Key)
	{
		if((CoordinantesA.Value+1) == CoordinantesB.Value)
		{
			return EDirection::Up;
		}
		else
		{
			return EDirection::Down;
		}
	}
	else if(CoordinantesA.Value == CoordinantesB.Value)
	{
		if((CoordinantesA.Key+1) > CoordinantesB.Key)
		{
			return EDirection::Left;
		}
		else
		{
			return EDirection::Right;
		}
	}
	else
	{
		return EDirection::None;
	}

	return EDirection::None;
}

