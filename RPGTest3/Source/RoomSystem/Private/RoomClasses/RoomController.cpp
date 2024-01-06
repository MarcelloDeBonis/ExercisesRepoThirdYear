// Fill out your copyright notice in the Description page of Project Settings.


#include "RoomClasses/RoomController.h"
#include "EnemyController.h"
#include "RoomClasses/Room.h"
#include "RoomClasses/RoomInfo.h"

ARoomController* ARoomController::Instance = nullptr;

ARoomController::ARoomController()
{
}

void ARoomController::NewRoom(URoom* Room, ARPGPlayer* Player , FVector Location)
{
	FRoomInfo RoomInfo = Room->GetInfo();
	SpawnPlayer(Player, Location);
	SpawnEnemies(RoomInfo.Enemies);
	SpawnFountain(RoomInfo.Fountain);
	SpawnChest(RoomInfo.Chest);
}


void ARoomController::SpawnPlayer(ARPGPlayer* Player, FVector Location)
{
	Player->TeleportTo(Location, FRotator(0, 0, 0));
}

void ARoomController::SpawnEnemies(TMap<FString, FVector> Enemies)
{
	GetWorld()->GetSubsystem<UEnemyController>()->ResetEnemies();
	GetWorld()->GetSubsystem<UEnemyController>()->SpawnEnemies(Enemies);
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