// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/RPGCharacter.h"

ARPGCharacter::ARPGCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ARPGCharacter::OnDied()
{
}

void ARPGCharacter::InitHealthComponent()
{
	HealthComponent = CreateDefaultSubobject<UHealthComponent>("HealthComponent");
}

void ARPGCharacter::InitComponents()
{
	InitHealthComponent();
}
