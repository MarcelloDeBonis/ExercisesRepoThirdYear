// Fill out your copyright notice in the Description page of Project Settings.

#include "SnakeGameMode.h"

#include "SnakePawn.h"
#include "SnakePlayerController.h"

ASnakeGameMode::ASnakeGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = ASnakePawn::StaticClass();
	PlayerControllerClass = ASnakePlayerController::StaticClass();
}

void ASnakeGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void ASnakeGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASnakeGameMode::NewGame()
{

}

void ASnakeGameMode::Lost()
{
	if(NewBestScore())
	{
		SetNewBestScore();
	}
}

void ASnakeGameMode::QuitGame()
{
	
}

bool ASnakeGameMode::NewBestScore()
{
	return points > bestScore;
}

void ASnakeGameMode::SetNewBestScore()
{
	bestScore=points;
}

void ASnakeGameMode::LoadData()
{
}

void ASnakeGameMode::SaveData()
{
}

void ASnakeGameMode::ResetCurrentScore()
{
}

