// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdateLife, int, CurrentLife, int, MaxLife);
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CHARACTER_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	UHealthComponent();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Delegate")
	FOnUpdateLife OnUpdateLife;

	void Damage(int Damage);
	void SetMaxLife(int NewMaxLife);
	void Heal(int HealAmount);
	void Death();
	
protected:
	
	virtual void BeginPlay() override;

private:

	void HealTotally();
	
	int CurrentLife = 0;
	int MaxLife = 0;
	
	bool Died();
};
