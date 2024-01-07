﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterInfo.h"
#include "RPGCharacter.h"
#include "Components/ExpComponent.h"
#include "Components/InventoryComponent.h"
#include "RPGPlayer.generated.h"

UCLASS()
class CHARACTER_API ARPGPlayer : public ARPGCharacter
{
	GENERATED_BODY()

public:
	
	ARPGPlayer();
	void UpdateNewLevel(int Level, FCharacterInfo Info);
	void UpdateNewLevel(int Level);
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character")
	UExpComponent* ExpComponent = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character")
	UInventoryComponent* InventoryComponent = nullptr;

	void Interact();
	void OnDied() override;
private:

	float InteractionDistance = 100.f;
	void InitExpComponent();
	void InitInventoryComponent();
	void InitMeleeAttackComponent();
	void InitRangedAttackComponent();
	virtual void InitComponents() override;
	
protected:

	virtual void BeginPlay() override;
};
