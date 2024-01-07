// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObjects/Door/Door.h"

#include "InteractableObjects/InteractableStates/StateList/InteractableStateOff.h"
#include "InteractableObjects/InteractableStates/StateList/InteractableStateOn.h"
#include "RoomClasses/RoomController.h"

ADoor::ADoor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ADoor::Interact(ARPGPlayer* Player)
{
	GoNextRoom();
}

void ADoor::Active(FDoorInfo _DoorInfo)
{
	SetState(NewObject<UInteractableStateOn>());
	InitDoor(_DoorInfo);
}

void ADoor::Deactive()
{
	SetState(NewObject<UInteractableStateOff>());
	DoorInfo = FDoorInfo();
}

void ADoor::InitDoor(FDoorInfo _DoorInfo)
{
	DoorInfo = _DoorInfo;
}

void ADoor::SetState(UInteractableState* NewState)
{
	if(CurrentState)
	{
		CurrentState->OnExitState();
	}
	CurrentState = NewState;
	CurrentState->OnEnter(this);
}

void ADoor::OnInteract(ARPGPlayer* Player)
{
	CurrentState->OnCallInteractFunct(Player);
}

void ADoor::GoNextRoom()
{
	if(DoorInfo.NextRoom)
	{
		ARPGPlayer* Player = GetWorld()->GetFirstPlayerController()->GetPawn<ARPGPlayer>();
		ARoomController::GetInstance()->NewRoom(DoorInfo.NextRoom, Player, SpawnPlayerLocation);
	}
}
