// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ExpComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CHARACTER_API UExpComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	UExpComponent();
	void OnUpdateLevel(int NewLevel, int ExpToObtain);
	void GainExp(int NewExp);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UI")
	float GetUiExp();

	void FirstLevel();
protected:
	
	virtual void BeginPlay() override;

private:

	int CurrentLevel = 1;
	int CurrentExp = 0;
	int MaxExp = 0;
	
	bool LevelUp();
	
};
