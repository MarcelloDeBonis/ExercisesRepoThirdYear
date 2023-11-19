// Fill out your copyright notice in the Description page of Project Settings.

#include "SnakeGameMode.h"



// Sets default values
ASnakeGameMode::ASnakeGameMode()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASnakeGameMode::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
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
	return points> bestScore;
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

