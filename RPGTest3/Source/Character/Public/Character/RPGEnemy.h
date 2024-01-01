// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RPGCharacter.h"
#include "RPGEnemy.generated.h"

UCLASS()
class CHARACTER_API ARPGEnemy : public ARPGCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ARPGEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
