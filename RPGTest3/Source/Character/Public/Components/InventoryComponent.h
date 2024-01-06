// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealPotionNumberUpdated, int, Number);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CHARACTER_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	UInventoryComponent();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Delegate")
	FHealPotionNumberUpdated HealPotionNumberUpdated;

	void UseHealPotion();
	void GainHealPotions(int Quantity);
	
protected:
	
	virtual void BeginPlay() override;

private:

	int HealPotions = 0;
	void HealPotionEffect();
	bool EnoughHealPotion();
};
