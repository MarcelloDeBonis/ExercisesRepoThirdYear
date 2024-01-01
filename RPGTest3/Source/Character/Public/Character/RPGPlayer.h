// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RPGCharacter.h"
#include "RPGPlayer.generated.h"

UCLASS()
class CHARACTER_API ARPGPlayer : public ARPGCharacter
{
	GENERATED_BODY()

public:
	ARPGPlayer();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
