// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "EnemyBuilder.h"

AEnemyController::AEnemyController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEnemyController::ResetEnemies()
{
	auto DestroyCustomActors = [this](auto& Array)
	{
		for (auto* Actor : Array)
		{
			if (Actor && !Actor->IsPendingKill())
			{
				Actor->Destroy();
			}
		}
		Array.Empty();
	};

	DestroyCustomActors(Controllers);
	DestroyCustomActors(Enemies);
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
	ARPGBrainController* Controller = UEnemyBuilder::GetEnemy(GetWorld(), Enemy.Key, Enemy.Value);
	Controllers.Add(Controller);
	Enemies.Add(Controller->GetEnemy());
}

