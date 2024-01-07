// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/ExpComponent.h"

#include "Character/RPGPlayer.h"

UExpComponent::UExpComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UExpComponent::OnUpdateLevel(int NewLevel, int ExpToObtain)
{
	CurrentLevel = NewLevel;
	CurrentExp = 0;
	MaxExp = ExpToObtain;
}

void UExpComponent::GainExp(int NewExp)
{
	CurrentExp += NewExp;
	
	if(LevelUp())
	{
		Cast<ARPGPlayer>(GetOwner())->UpdateNewLevel(CurrentLevel+1);
	}
	
}

float UExpComponent::GetUiExp()
{
	if(CurrentExp <= 0)
	{
		return 0;
	}

	if(MaxExp <= 0)
	{
		return 0;
	}

	return (float)CurrentExp / (float)MaxExp;
}

void UExpComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UExpComponent::FirstLevel()
{
	Cast<ARPGPlayer>(GetOwner())->UpdateNewLevel(1);
}

bool UExpComponent::LevelUp()
{
	return CurrentExp >= MaxExp;
}

