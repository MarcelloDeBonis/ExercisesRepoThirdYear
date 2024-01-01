// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LevelSystem/LevelInfo.h"
#include "ExpComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLevelChanged, int, NewLevel);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnExpUpdated, int, MaxExp, int , CurrentExp);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CHARACTER_API UExpComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	UExpComponent();
	void OnUpdateLevel(int ExpToObtain);
	void GainExp(int NewExp);

	UPROPERTY(BlueprintAssignable, Category = "Delegates")
	FOnLevelChanged OnLevelChanged;

	UPROPERTY(BlueprintAssignable, Category = "Delegates")
	FOnExpUpdated OnExpUpdated;
	
protected:
	
	virtual void BeginPlay() override;

private:

	int CurrentLevel = 1;
	int CurrentExp = 0;
	int MaxExp = 0;
	
	bool LevelUp();
	
};
