// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"
#include "MyGameMode.h"
#include "Amypawn.h"
#include "UMySaveGame.h"

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

