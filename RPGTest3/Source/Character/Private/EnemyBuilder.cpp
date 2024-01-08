// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBuilder.h"
#include "CharacterInfo.h"
#include "DataTableInfo.h"
#include "Character/RPGEnemy.h"

ARPGBrainController* UEnemyBuilder::GetEnemy(UWorld* WorldContext, FString EnemyName,  FVector Position)
{
	ARPGEnemy* Enemy = GetEnemyActor(WorldContext, EnemyName, Position);
	Enemy->SetActorLocation(Position);
	ARPGBrainController* Controller = WorldContext->SpawnActor<ARPGBrainController>();
	Controller->Init(Enemy);
	return Controller;
}

ARPGEnemy* UEnemyBuilder::BuildBPEnemy(UWorld* WorldContext, FString EnemyName, FVector Position)
{
	FCharacterInfo Info = UDataTableInfo::GetStructByRowName<FCharacterInfo>("/Game/DT/EnemyInfoDT.EnemyInfoDT", EnemyName);
	TSubclassOf<ARPGEnemy> EnemyClass = Info.BlueprintClass;
	ARPGEnemy* Enemy = WorldContext->SpawnActor<ARPGEnemy>(EnemyClass, Position, FRotator::ZeroRotator);
	return Enemy;
}

ARPGEnemy* UEnemyBuilder::GetEnemyActor(UWorld* WorldContext, FString EnemyName, FVector Position)
{
	ARPGEnemy* Enemy = BuildBPEnemy(WorldContext, EnemyName, Position);
	
	if (!Enemy)
	{
		return nullptr;
	}

	Enemy->SetActorLocation(Position);
	
	if(EnemyName.Equals("Skeleton"))
	{
		Enemy = BuildSkeleton(Enemy);
	}
	else if(EnemyName.Equals("Ghost"))
	{
		Enemy = BuildGhost(Enemy);
	}
	else if (EnemyName.Equals("Slime"))
	{
		Enemy = BuildSlime(Enemy);
	}
	else if (EnemyName.Equals("Rat"))
	{
		Enemy = BuildRat(Enemy);
	}
	else
	{
		return nullptr;
	}

	Enemy = BuildInfo(Enemy, EnemyName);
	
	return Enemy ? Enemy : nullptr;
}


ARPGEnemy* UEnemyBuilder::BuildSkeleton(ARPGEnemy* Enemy)
{
	Enemy = BuildRangeEnemy(Enemy);
	Enemy = BuildRangeAttackComponent(Enemy);
	return Enemy;
}

ARPGEnemy* UEnemyBuilder::BuildGhost(ARPGEnemy* Enemy)
{
	Enemy = BuildRangeEnemy(Enemy);
	Enemy = BuildRangeAttackComponent(Enemy);
	return Enemy;
}
ARPGEnemy* UEnemyBuilder::BuildSlime(ARPGEnemy* Enemy)
{
	Enemy = BuildMeleeEnemy(Enemy);
	Enemy = BuildMeleeAttackComponent(Enemy);
	return Enemy;
}

ARPGEnemy* UEnemyBuilder::BuildRat(ARPGEnemy* Enemy)
{
	Enemy = BuildMeleeEnemy(Enemy);
	Enemy = BuildMeleeAttackComponent(Enemy);
	return Enemy;
}

ARPGEnemy* UEnemyBuilder::BuildInfo(ARPGEnemy* Enemy, FString EnemyName)
{
	FCharacterInfo Info = UDataTableInfo::GetStructByRowName<FCharacterInfo>("/Game/DT/EnemyInfoDT.EnemyInfoDT", EnemyName);
	Enemy->InitDamage(Info.Damage, Info.WeaponDuration);
	Enemy->InitHealth(Info.Life);
	Enemy->InitExp(Info.Exp);
	return Enemy;
}

ARPGEnemy* UEnemyBuilder::BuildRangeEnemy(ARPGEnemy* Enemy)
{
	Enemy->Init(100, 100);
	return Enemy;
}

ARPGEnemy* UEnemyBuilder::BuildMeleeEnemy(ARPGEnemy* Enemy)
{
	Enemy->InitMeleeAttackComponent();
	return Enemy;
}

ARPGEnemy* UEnemyBuilder::BuildMeleeAttackComponent(ARPGEnemy* Enemy)
{
	Enemy->Init(100, 100);
	return Enemy;
}

ARPGEnemy* UEnemyBuilder::BuildRangeAttackComponent(ARPGEnemy* Enemy)
{
	Enemy->InitRangedAttackComponent();
	return Enemy;
}
