// Fill out your copyright notice in the Description page of Project Settings.


#include "Singletons/FruitSpawner.h"
#include "SnakeGameMode.h"
#include "Singletons/Map.h"

AFruitSpawner::AFruitSpawner()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFruitSpawner::BeginPlay()
{
	Super::BeginPlay();
	SetSingleInstance(this);
}

void AFruitSpawner::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	RemoveSingleInstance<ThisClass>();
}

void AFruitSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFruitSpawner::SpawnFruit()
{
	if(!AMap::GetInstance<AMap>()->GetFreeTiles().IsEmpty())
	{
		int Count = FMath::RandRange(0, AMap::GetInstance<AMap>()->GetFreeTiles().Num() - 1);
		ATile* FruitTile = AMap::GetInstance<AMap>()->GetFreeTiles()[Count];
		FruitTile->SpawnFruitHere();
	}
	else
	{
		Cast<ASnakeGameMode>(GetWorld()->GetAuthGameMode())->Win();
	}
}