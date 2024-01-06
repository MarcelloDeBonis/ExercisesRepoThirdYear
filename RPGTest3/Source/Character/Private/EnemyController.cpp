// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "EnemyBuilder.h"

void UEnemyController::ResetEnemies()
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

void UEnemyController::SpawnEnemies(TMap<FString, FVector> NewEnemies)
{
	for (auto Enemy : NewEnemies)
	{
		SpawnEnemy(Enemy);
	}
}

void UEnemyController::SpawnEnemy(TTuple<FString, FVector> Enemy)
{
	ARPGBrainController* NewEnemy = UEnemyBuilder::GetEnemy(GetWorld(), Enemy.Key, Enemy.Value);
	Enemies.Add(NewEnemy, NewEnemy->GetEnemy());
}

