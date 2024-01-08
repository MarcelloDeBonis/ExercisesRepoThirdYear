// Fill out your copyright notice in the Description page of Project Settings.


#include "RoomClasses/Room.h"

#include "RoomClasses/RoomInfo.h"

URoom::URoom()
{
	
}

void URoom::Init(FRoomInfo RoomInfo, int _X, int _Y)
{
	Info = RoomInfo;
	X = _X;
	Y = _Y;
}

FRoomInfo URoom::GetInfo()
{
	return Info;
}

TArray<FDoorInfo> URoom::GetDoors()
{
	return Doors;
}

TTuple<int, int> URoom::GetCoordinates()
{
	return TTuple<int, int>(X, Y);
}

bool URoom::AddDoor(FDoorInfo Door)
{
	for (auto MyDoor : Doors)
	{
		if(MyDoor.Direction == Door.Direction)
		{
			return false;
		}
	}
	
	Doors.Add(Door);
	return true;
}
