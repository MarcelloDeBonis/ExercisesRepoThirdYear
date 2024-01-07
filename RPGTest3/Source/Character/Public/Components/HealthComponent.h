// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CHARACTER_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	UHealthComponent();

	void Damage(int Damage);
	void SetMaxLife(int NewMaxLife);
	void Heal(int HealAmount);
	void HealTotally();
	void Death();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UI")
	float GetUiLife();
protected:
	
	virtual void BeginPlay() override;

private:
	
	int CurrentLife = 0;
	int MaxLife = 0;
	
	bool Died();
};
