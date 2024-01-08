// Fill out your copyright notice in the Description page of Project Settings.


#include "RoomClasses/RoomController.h"
#include "EnemyController.h"
#include "RPGTestGameMode.h"
#include "RoomClasses/Room.h"
#include "RoomClasses/RoomInfo.h"

ARoomController* ARoomController::Instance = nullptr;

ARoomController::ARoomController()
{
}

void ARoomController::NewRoom(URoom* Room, ARPGPlayer* Player, EDirection Direction)
{
	EDirection OppositeDirection = DoorController->GetOppositeDirection(Direction);
	ADoor* Door = DoorController->GetDoor(OppositeDirection);
	FVector Location = Door->SpawnPlayerLocation;
	NewRoom(Room, Player, Location);
}

void ARoomController::NewRoom(URoom* Room, ARPGPlayer* Player , FVector Location)
{
	if(Room==LastRoom)
	{
		Cast<ARPGTestGameMode>(GetWorld()->GetAuthGameMode())->EndGame(true);
	}
	else
	{
		FRoomInfo RoomInfo = Room->GetInfo();
		SpawnPlayer(Player, Location);
		EnemyController->ResetEnemies();
		if(RoomInfo.Enemies.Num()>0)
		{
			SpawnEnemies(RoomInfo.Enemies);
		}
		SpawnFountain(RoomInfo.Fountain);
		SpawnChest(RoomInfo.Chest);
		SpawnDoors(Room->GetDoors());
	}
}


void ARoomController::SpawnPlayer(ARPGPlayer* Player, FVector Location)
{
	Player->TeleportTo(Location, FRotator(0, 0, 0));
}

void ARoomController::SpawnEnemies(TMap<FString, FVector> Enemies)
{
	EnemyController->SpawnEnemies(Enemies);
}

void ARoomController::SpawnFountain(bool Spawn)
{
	if(Spawn)
	{
		FountainController->AbleFountain();
	}
	else
	{
		FountainController->DisableFountain();
	}
}

void ARoomController::SpawnDoors(TArray<FDoorInfo> Doors)
{
	DoorController->InitDoors(Doors);
}

void ARoomController::SpawnChest(bool Spawn)
{
	if(Spawn)
	{
		ChestController->AbleChest();
	}
	else
	{
		ChestController->DisableChest();
	}
}

void ARoomController::SetLastRoom(URoom* Room)
{
	LastRoom = Room;
}

void ARoomController::BeginPlay()
{
	Super::BeginPlay();

	if (Instance == nullptr)
	{
		Instance = this;
	}
	else
	{
		Destroy();
	}
}

ARoomController* ARoomController::GetInstance()
{
	return Instance;
}