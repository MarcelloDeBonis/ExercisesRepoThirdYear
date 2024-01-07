// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DoorInfo.h"
#include "GameFramework/Actor.h"
#include "InteractableObjects/Interactable.h"
#include "InteractableObjects/InteractableStates/InteractableState.h"
#include "Door.generated.h"

UCLASS()
class ROOMSYSTEM_API ADoor : public AInteractable
{
	GENERATED_BODY()

public:
	
	ADoor();
	
	void Interact(ARPGPlayer* Player);
	void Active(FDoorInfo _DoorInfo);
	void Deactive();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RoomSystem")
	FVector SpawnPlayerLocation = FVector(0, 0, 0);
private:
	
	void InitDoor(FDoorInfo _DoorInfo);
	
	FDoorInfo DoorInfo = FDoorInfo();
	
	UPROPERTY()
	UInteractableState* CurrentState = nullptr;
	
	void SetState(UInteractableState* NewState);
	virtual void OnInteract(ARPGPlayer* Player) override;
	void GoNextRoom();

};
