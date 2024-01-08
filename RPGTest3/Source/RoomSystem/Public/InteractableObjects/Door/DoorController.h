// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Door.h"
#include "GameFramework/Actor.h"
#include "DoorController.generated.h"

UCLASS()
class ROOMSYSTEM_API ADoorController : public AActor
{
	GENERATED_BODY()

public:
	ADoorController();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Door")
	ADoor* UpDoor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Door")
	ADoor* RightDoor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Door")
	ADoor* DownDoor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Door")
	ADoor* LeftDoor;
	
	void InitDoors(TArray<FDoorInfo> Doors);
	EDirection GetOppositeDirection(EDirection Direction);
	ADoor* GetDoor(EDirection Direction);
	
private:
	
	void AbleDoor(ADoor* Door, FDoorInfo DoorInfo);
	void DisableDoor(ADoor* Door);

	UPROPERTY()
	TMap<EDirection, ADoor*> CorrespondingDoors;	
	void InitMap();
	virtual void BeginPlay() override;
};
