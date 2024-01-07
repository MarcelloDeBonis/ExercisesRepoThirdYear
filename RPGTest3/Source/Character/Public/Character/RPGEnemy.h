// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RPGCharacter.h"
#include "Components/AttackComponents/AttackComponent.h"
#include "RPGEnemy.generated.h"

UCLASS()
class CHARACTER_API ARPGEnemy : public ARPGCharacter
{
	GENERATED_BODY()

public:
	ARPGEnemy();
	
	void Init(float _MinAttackDistance, float _VisibilityRange);
	void InitAttackComponent(UAttackComponent* Component);
	void InitDamage(int Damage, float _WeaponDuration);
	void InitExp(int _ExpOnDied);
	void InitHealth(int Health);

	virtual void InitComponents() override;
	
	bool InRangeForAttack();
	bool IsPlayerInVisibilityRange();
	virtual void OnDied() override;
private:

	float AttackDistance = 0.0f;
	float VisibilityRange = 0.0f;
	int ExpOnDied = 0;
};
