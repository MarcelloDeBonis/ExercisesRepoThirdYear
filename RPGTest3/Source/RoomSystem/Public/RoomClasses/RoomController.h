// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyController.h"
#include "GameFramework/Actor.h"
#include "InteractableObjects/Chest/ChestController.h"
#include "InteractableObjects/Door/DoorController.h"
#include "InteractableObjects/Fountain/FountainController.h"
#include "RoomController.generated.h"

UCLASS()
class ROOMSYSTEM_API ARoomController : public AActor
{
	GENERATED_BODY()

public:
	ARoomController();

	virtual void BeginPlay() override;
	static ARoomController* GetInstance();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RoomSystem")
	AFountainController* FountainController = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RoomSystem")
	AChestController* ChestController = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RoomSystem")
	ADoorController* DoorController = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RoomSystem")
	AEnemyController* EnemyController = nullptr;
	
	void NewRoom(URoom* Room, ARPGPlayer* Player, FVector Location);
	void SetLastRoom(URoom* Room);

private:

	static ARoomController* Instance;
	
	UPROPERTY()
	URoom* LastRoom = nullptr;

	void SpawnPlayer(ARPGPlayer* Player, FVector Location);
	void SpawnEnemies(TMap<FString, FVector> Enemies);
	void SpawnFountain(bool Spawn);
	void SpawnDoors(TArray<FDoorInfo> Doors);
	void SpawnChest(bool Spawn);
	
};
