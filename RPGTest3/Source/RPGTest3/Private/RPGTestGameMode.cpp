// Fill out your copyright notice in the Description page of Project Settings.


#include "RPGTestGameMode.h"
#include "Character/Public/Controllers/RPGPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "RoomClasses/MapSubsystem.h"
#include "RoomClasses/RoomController.h"

ARPGTestGameMode::ARPGTestGameMode()
{
	PlayerControllerClass = ARPGPlayerController::StaticClass();
}

void ARPGTestGameMode::StartGame()
{
	UMapSubsystem* MapSubsystem = GetWorld()->GetSubsystem<UMapSubsystem>();
	MapSubsystem->GenerateMap(10, 10, 10);
	
	ARoomController* RoomController = ARoomController::GetInstance();
	
	URoom* StartRoom = MapSubsystem->GetRoomAt(0, 0);
	URoom* LastRoom =MapSubsystem->GeneratePath(StartRoom, 10);
	
	RoomController->SetLastRoom(LastRoom);
	RoomController->NewRoom(StartRoom, Cast<ARPGPlayer>(UGameplayStatics::GetPlayerPawn(this, 0)), FVector(0, 0, 0));
}

void ARPGTestGameMode::EndGame(bool Win)
{
	if(Win)
	{
		WinGame();
	}
	else
	{
		LoseGame();
	}
}

void ARPGTestGameMode::WinGame()
{
	
}

void ARPGTestGameMode::LoseGame()
{
}


