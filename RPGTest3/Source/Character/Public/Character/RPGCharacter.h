// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/HealthComponent.h"
#include "Components/AttackComponents/AttackComponent.h"
#include "Controllers/RPGController.h"
#include "Enums/ETeam.h"
#include "GameFramework/Actor.h"
#include "RPGCharacter.generated.h"

UCLASS(Abstract)
class CHARACTER_API ARPGCharacter : public APawn
{
	GENERATED_BODY()

public:
	
	ARPGCharacter();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character")
	UHealthComponent* HealthComponent = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character")
	UAttackComponent* AttackComponent = nullptr;

	void InitController(IRPGController* _Controller);
	virtual void OnDied();
	ETeam GetTeam() const { return Team; }

	IRPGController* Controller = nullptr;
protected:
	
	ETeam Team = ETeam::None;
	void InitHealthComponent();
	virtual void InitComponents();
};
