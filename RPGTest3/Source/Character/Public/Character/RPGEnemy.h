// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RPGCharacter.h"
#include "Components/AttackComponents/AttackComponent.h"
#include "Controllers/RPGBrainController.h"
#include "RPGEnemy.generated.h"

UCLASS()
class CHARACTER_API ARPGEnemy : public ARPGCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ARPGEnemy();

	UPROPERTY()
	UAttackComponent* AttackComponent = nullptr;

	void InitAttackComponent(UAttackComponent* Component);
	void InitDamage(int Damage);
	void InitHealth(int Health);
private:

	UPROPERTY()
	ARPGBrainController* Brain = nullptr;
};
