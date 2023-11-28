// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Amypawn.h"
#include "UMySaveGame.h"

AMyGameMode::AMyGameMode()
{
	
}


void AMyGameMode::BeginPlay()
{
	Super::BeginPlay();
	LoadGame();
}

void AMyGameMode::RestartPlayer(AController* PlayerController)
{
	Super::RestartPlayer(PlayerController);
	SaveGame();
}

void AMyGameMode::SaveGame()
{
	UMySaveGame* SaveGameInstance = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass()));
	
	Amypawn* PlayerPawn = Cast<Amypawn>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (PlayerPawn)
	{
		SaveGameInstance->SavedPlayerStats = PlayerPawn->PlayerStats;
	}
}

void AMyGameMode::LoadGame()
{
	UMySaveGame* LoadedGame = Cast<UMySaveGame>(UGameplayStatics::LoadGameFromSlot(TEXT("PlayerSaveSlot"), 0));
		
	Amypawn* PlayerPawn = Cast<Amypawn>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (PlayerPawn)
	{
		PlayerPawn->PlayerStats = LoadedGame->SavedPlayerStats;
	}
}

