// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/RPGPlayer.h"

#include "RPGTestGameMode.h"
#include "Components/AttackComponents/MeleeAttackComponent.h"
#include "Components/AttackComponents/RangedAttackComponent.h"
#include "Controllers/RPGPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "RPGTest3/Public/DataTableInfo.h"


ARPGPlayer::ARPGPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
	InitHealthComponent();
	InitExpComponent();
	InitInventoryComponent();
	InitMeleeAttackComponent();
}

void ARPGPlayer::BeginPlay()
{
	Super::BeginPlay();
	Cast<ARPGPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0))->Init();
	ExpComponent->FirstLevel();
}

void ARPGPlayer::Interact_Implementation()
{
}

void ARPGPlayer::OnDied()
{
	Super::OnDied();
	Cast<ARPGTestGameMode>(UGameplayStatics::GetGameMode(GetWorld()))->EndGame(false);
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
	AttackComponent = CreateDefaultSubobject<UMeleeAttackComponent>("MeleeAttackComponent");
}

void ARPGPlayer::InitRangedAttackComponent()
{
	AttackComponent = CreateDefaultSubobject<URangedAttackComponent>("RangedAttackComponent");
}

void ARPGPlayer::InitComponents()
{	
	
}

void ARPGPlayer::UpdateNewLevel(int Level, FCharacterInfo Info)
{
	const int Life = Info.Life;
	const int Damage = Info.Damage;
	const int Exp = Info.Exp;
	const float _WeaponDuration = Info.WeaponDuration;
	
	HealthComponent->SetMaxLife(Life);
	AttackComponent->SpawnWeapon(Damage, _WeaponDuration);
	ExpComponent->OnUpdateLevel(Level, Exp);
}

void ARPGPlayer::UpdateNewLevel(int Level)
{
	const FString LevelName = "Level" + FString::FromInt(Level);
	const FCharacterInfo LevelInfo = UDataTableInfo::GetStructByRowName<FCharacterInfo>("/Game/DT/LevelInfoDT.LevelInfoDT", LevelName);

	UpdateNewLevel(Level, LevelInfo);
}




