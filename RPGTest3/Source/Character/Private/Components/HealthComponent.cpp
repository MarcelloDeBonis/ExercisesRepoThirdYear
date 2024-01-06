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
	OnUpdateLife.Broadcast(CurrentLife, MaxLife);

	if(Died())
	{
		Death();
	}
}

void UHealthComponent::SetMaxLife(int NewMaxLife)
{
	MaxLife = NewMaxLife;
	HealTotally();
	OnUpdateLife.Broadcast(CurrentLife, MaxLife);
}

void UHealthComponent::Heal(int HealAmount)
{
	CurrentLife += HealAmount;
	if(CurrentLife > MaxLife)
	{
		CurrentLife = MaxLife;
	}
	OnUpdateLife.Broadcast(CurrentLife, MaxLife);	
}

void UHealthComponent::HealTotally()
{
	CurrentLife = MaxLife;
	OnUpdateLife.Broadcast(CurrentLife, MaxLife);
}

void UHealthComponent::Death()
{
	Cast<ARPGCharacter>(GetOwner())->OnDied();
}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
}

bool UHealthComponent::Died()
{
	return CurrentLife <= 0;
}

