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
	OnExpUpdated.Broadcast(CurrentExp, MaxExp);
}

void UExpComponent::GainExp(int NewExp)
{
	CurrentExp += NewExp;
	
	OnExpUpdated.Broadcast(CurrentExp, MaxExp);
	
	if(LevelUp())
	{
		Cast<ARPGPlayer>(GetOwner())->UpdateNewLevel(CurrentLevel+1);
	}
	
}

void UExpComponent::BeginPlay()
{
	Super::BeginPlay();
}

bool UExpComponent::LevelUp()
{
	return CurrentExp >= MaxExp;
}

