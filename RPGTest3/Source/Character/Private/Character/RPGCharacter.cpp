// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/RPGCharacter.h"


// Sets default values
ARPGCharacter::ARPGCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}


void ARPGCharacter::InitHealthComponent()
{
	HealthComponent = CreateDefaultSubobject<UHealthComponent>("HealthComponent");
}

void ARPGCharacter::InitComponents()
{
	InitHealthComponent();
}
