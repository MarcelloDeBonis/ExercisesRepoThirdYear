// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/HealthComponent.h"
#include "Components/AttackComponents/AttackComponent.h"
#include "Enums/ETeam.h"
#include "GameFramework/Actor.h"
#include "RPGCharacter.generated.h"

UCLASS(Abstract)
class CHARACTER_API ARPGCharacter : public APawn
{
	GENERATED_BODY()

public:
	
	ARPGCharacter();

	UPROPERTY()
	UHealthComponent* HealthComponent = nullptr;

	UPROPERTY()
	UAttackComponent* AttackComponent = nullptr;

	virtual void OnDied();
	ETeam GetTeam() const { return Team; }
protected:
	
	ETeam Team = ETeam::None;
	void InitHealthComponent();
	virtual void InitComponents();
};
