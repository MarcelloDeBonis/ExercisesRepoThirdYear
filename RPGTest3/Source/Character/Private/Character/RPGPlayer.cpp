// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/RPGPlayer.h"

#include "DataTable/DataTableInfo.h"


ARPGPlayer::ARPGPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ARPGPlayer::InitExpComponent()
{
	ExpComponent = CreateDefaultSubobject<UExpComponent>("ExpComponent");
}

void ARPGPlayer::InitInventoryComponent()
{
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>("InventoryComponent");
}

void ARPGPlayer::InitMeleeAttackComponent()
{
	MeleeAttackComponent = CreateDefaultSubobject<UMeleeAttackComponent>("MeleeAttackComponent");
}

void ARPGPlayer::InitComponents()
{
	Super::InitComponents();
	
	InitExpComponent();
	InitInventoryComponent();
	InitMeleeAttackComponent();
}



void ARPGPlayer::UpdateNewLevel(int Level, FLevelInfo Info)
{
	const int Life = Info.Life;
	const int Damage = Info.Damage;
	const int Exp = Info.Exp;
	
	HealthComponent->SetMaxLife(Life);
	MeleeAttackComponent->SetDamage(Damage);
	ExpComponent->OnUpdateLevel(Level, Exp);
}

void ARPGPlayer::UpdateNewLevel(int Level)
{
	const FString LevelName = "Level" + FString::FromInt(Level);
	FLevelInfo LevelInfo = UDataTableInfo::GetStructByRowName<FLevelInfo>("/Content/DT/LevelInfoDT.uasset", LevelName);

	UpdateNewLevel(Level, FLevelInfo());
}




