// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "EnemyBuilder.h"

AEnemyController::AEnemyController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEnemyController::ResetEnemies()
{
	for (auto Enemy : Enemies)
	{
		if(Enemy.Value != nullptr)
		{
			Enemy.Value->Destroy();
			Enemy.Key->Destroy();
		}
	}

	Enemies.Empty();
}

void AEnemyController::SpawnEnemies(TMap<FString, FVector> NewEnemies)
{
	for (auto Enemy : NewEnemies)
	{
		SpawnEnemy(Enemy);
	}
}

void AEnemyController::SpawnEnemy(TTuple<FString, FVector> Enemy)
{
	ARPGBrainController* NewEnemy = UEnemyBuilder::GetEnemy(GetWorld(), Enemy.Key, Enemy.Value);
	NewEnemy->Init(NewEnemy->GetEnemy());
	Enemies.Add(NewEnemy, NewEnemy->GetEnemy());
}

