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

void UMapSubsystem::GenerateMap(int Width, int Height, int PathLength)
{
	for (int X=0; X<Width; X++)
	{
		for (int Y=0; Y<Height; Y++)
		{
			FRoomInfo Info = UDataTableInfo::GetRandomStructByRowName<FRoomInfo>("/Game/DT/RoomInfoDT.RoomInfoDT");
			URoom* Room = NewObject<URoom>();
			Room->Init(Info, X, Y);
			Map.Add(Room);
		}
	}
}

URoom* UMapSubsystem::GeneratePath(URoom* Start, int PathLength)
{
	if (PathLength <= 0)
	{
		return nullptr;
	}

	TArray<URoom*> UnconnectedRooms = Map;
	UnconnectedRooms.Remove(Start);

	TArray<URoom*> Path;
	Path.Add(Start);
	
	while (PathLength > 0 && UnconnectedRooms.Num() > 0)
	{
		TArray<URoom*> NeighboringRooms = GetNeighbors(Path.Last());

		for (auto NeighboringRoom : NeighboringRooms)
		{
			if (!UnconnectedRooms.Contains(NeighboringRoom))
			{
				NeighboringRooms.Remove(NeighboringRoom);
			}	
		}
		

		if (NeighboringRooms.Num() == 0)
		{
			//Try to search in the path for now currently is formed
			break;
		}

		URoom* NextRoom = NeighboringRooms[FMath::RandRange(0, NeighboringRooms.Num() - 1)];
		
		if (AttachRooms(Path.Last(), NextRoom))
		{
			UnconnectedRooms.Remove(NextRoom);
			
			PathLength--;
			Path.Add(NextRoom);
		}
		else
		{
			break;
		}
	}

	if (PathLength == 0)
	{
		return Path.Last();
	}
	else
	{
		return nullptr;
	}
}


bool UMapSubsystem::AttachRooms(URoom* RoomA, URoom* RoomB)
{
	EDirection DirectionToB = DirectionToGoToB(RoomA, RoomB);
	EDirection DirectionToA = UDoorUtils::GetOppositeDirection(DirectionToB);

	FDoorInfo DoorA = FDoorInfo(DirectionToB, RoomB);
	FDoorInfo DoorB = FDoorInfo(DirectionToA, RoomB);
	
	if(DirectionToB == EDirection::None)
	{
		return false;
	}

	if(!RoomA->AddDoor(DoorA) || !RoomB->AddDoor(DoorB))
	{
		return false;
	}
	
	return true;
}

TArray<URoom*> UMapSubsystem::GetNeighbors(URoom* Room)
{
	TArray<URoom*> Neighbors;

	for (EDirection Direction : {EDirection::Up, EDirection::Down, EDirection::Left, EDirection::Right})
	{
		URoom* Neighbor = GetNeighbor(Room, Direction);

		if (Neighbor)
		{
			Neighbors.Add(Neighbor);
		}
	}

	return Neighbors;
}

URoom* UMapSubsystem::GetNeighbor(URoom* Room, EDirection Direction)
{
	TTuple<int, int> Coordinantes = Room->GetCoordinates();

	switch (Direction)
	{
	case EDirection::Up:
		return GetRoomAt(Coordinantes.Key, Coordinantes.Value+1);
	case EDirection::Down:
		return GetRoomAt(Coordinantes.Key, Coordinantes.Value-1);
	case EDirection::Left:
		return GetRoomAt(Coordinantes.Key-1, Coordinantes.Value);
	case EDirection::Right:
		return GetRoomAt(Coordinantes.Key+1, Coordinantes.Value);
	default:
		return nullptr;
	}
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

