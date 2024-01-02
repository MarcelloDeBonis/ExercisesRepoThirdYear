// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RPGCharacter.h"
#include "Components/ExpComponent.h"
#include "Components/InventoryComponent.h"
#include "Components/AttackComponents/MeleeAttackComponent.h"
#include "DataTable/LevelInfo.h"
#include "RPGPlayer.generated.h"

UCLASS()
class CHARACTER_API ARPGPlayer : public ARPGCharacter
{
	GENERATED_BODY()

public:
	
	ARPGPlayer();
	void UpdateNewLevel(int Level, FLevelInfo Info);
	void UpdateNewLevel(int Level);
	
	UPROPERTY()
	UExpComponent* ExpComponent = nullptr;

	UPROPERTY()
	UInventoryComponent* InventoryComponent = nullptr;

	UPROPERTY()
	UMeleeAttackComponent* MeleeAttackComponent = nullptr;
	
private:

	void InitExpComponent();
	void InitInventoryComponent();
	void InitMeleeAttackComponent();
	
protected:

	virtual void InitComponents() override;
};
