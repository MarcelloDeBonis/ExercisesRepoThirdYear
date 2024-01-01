// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/InventoryComponent.h"

#include "Character/RPGPlayer.h"


UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UInventoryComponent::UseHealPotion()
{
	if(EnoughHealPotion())
	{
		HealPotions--;
		HealPotionEffect();
		HealPotionNumberUpdated.Broadcast(HealPotions);
	}
}

void UInventoryComponent::GainHealPotion()
{
	HealPotions++;
	HealPotionNumberUpdated.Broadcast(HealPotions);
}

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UInventoryComponent::HealPotionEffect()
{
	ARPGPlayer* Player = Cast<ARPGPlayer>(GetOwner());
	Player->HealthComponent->Heal(50);
}

bool UInventoryComponent::EnoughHealPotion()
{
	return HealPotions > 0;
}