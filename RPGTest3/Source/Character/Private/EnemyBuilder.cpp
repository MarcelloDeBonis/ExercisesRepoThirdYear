// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBuilder.h"

#include "CharacterInfo.h"
#include "DataTableInfo.h"
#include "Components/AttackComponents/MeleeAttackComponent.h"
#include "Components/AttackComponents/RangedAttackComponent.h"

ARPGBrainController* UEnemyBuilder::GetEnemy(UWorld* WorldContext, FString EnemyName,  FVector Position)
{
	ARPGEnemy* Enemy = GetEnemyActor(WorldContext, EnemyName);
	Enemy->SetActorLocation(Position);
	ARPGBrainController* Brain = NewObject<ARPGBrainController>(Enemy);

	return Brain;
}

ARPGEnemy* UEnemyBuilder::GetEnemyActor(UWorld* WorldContext, FString EnemyName)
{
	ARPGEnemy* Enemy = WorldContext->SpawnActor<ARPGEnemy>(ARPGEnemy::StaticClass());;
		
	if(EnemyName == "Skeleton")
	{
		BuildSkeleton(Enemy);
	}
	else if(EnemyName == "Ghost")
	{
		BuildGhost(Enemy);
	}
	else if (EnemyName == "Slime")
	{
		BuildSlime(Enemy);
	}
	else if (EnemyName == "Rat")
	{
		BuildRat(Enemy);
	}
	else
	{
		return nullptr;
	}

	BuildInfo(Enemy, EnemyName);
	
	return Enemy;
}

ARPGEnemy* UEnemyBuilder::BuildSkeleton(ARPGEnemy* Enemy)
{
	BuildRangeEnemy(Enemy);
	BuildRangeAttackComponent(Enemy);
	return Enemy;
}

ARPGEnemy* UEnemyBuilder::BuildGhost(ARPGEnemy* Enemy)
{
	BuildRangeEnemy(Enemy);
	BuildRangeAttackComponent(Enemy);
	return Enemy;
}

ARPGEnemy* UEnemyBuilder::BuildSlime(ARPGEnemy* Enemy)
{
	BuildMeleeEnemy(Enemy);
	BuildMeleeAttackComponent(Enemy);
	return Enemy;
}

ARPGEnemy* UEnemyBuilder::BuildRat(ARPGEnemy* Enemy)
{
	BuildMeleeEnemy(Enemy);
	BuildMeleeAttackComponent(Enemy);
	return Enemy;
}

void UEnemyBuilder::BuildInfo(ARPGEnemy* Enemy, FString EnemyName)
{
	const FCharacterInfo Info = UDataTableInfo::GetStructByRowName<FCharacterInfo>("/Content/DT/EnemyInfoDT.uasset", EnemyName);
	Enemy->InitDamage(Info.Damage, Info.WeaponDuration);
	Enemy->InitHealth(Info.Life);
	Enemy->InitExp(Info.Exp);
}

void UEnemyBuilder::BuildRangeEnemy(ARPGEnemy* Enemy)
{
	Enemy->Init(100, 100);
}

void UEnemyBuilder::BuildMeleeEnemy(ARPGEnemy* Enemy)
{
	Enemy->InitAttackComponent(NewObject<UMeleeAttackComponent>());
}

void UEnemyBuilder::BuildMeleeAttackComponent(ARPGEnemy* Enemy)
{
	Enemy->Init(100, 100);
}

void UEnemyBuilder::BuildRangeAttackComponent(ARPGEnemy* Enemy)
{
	Enemy->InitAttackComponent(NewObject<URangedAttackComponent>());
}
