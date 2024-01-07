// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/HealthComponent.h"

#include "Character/RPGCharacter.h"

UHealthComponent::UHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UHealthComponent::Damage(int Damage)
{
	CurrentLife -= Damage;

	if(CurrentLife < 0)
	{
		CurrentLife = 0;
	}
	
	if(Died())
	{
		Death();
	}
}

void UHealthComponent::SetMaxLife(int NewMaxLife)
{
	MaxLife = NewMaxLife;
	HealTotally();
}

void UHealthComponent::Heal(int HealAmount)
{
	CurrentLife += HealAmount;
	if(CurrentLife > MaxLife)
	{
		CurrentLife = MaxLife;
	}
}

void UHealthComponent::HealTotally()
{
	CurrentLife = MaxLife;
}

void UHealthComponent::Death()
{
	Cast<ARPGCharacter>(GetOwner())->OnDied();
}

float UHealthComponent::GetUiLife()
{
	if(CurrentLife <= 0)
	{
		return 0;
	}

	if(MaxLife <= 0)
	{
		return 0;
	}

	return (float)CurrentLife / (float)MaxLife;
}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
}

bool UHealthComponent::Died()
{
	return CurrentLife <= 0;
}

