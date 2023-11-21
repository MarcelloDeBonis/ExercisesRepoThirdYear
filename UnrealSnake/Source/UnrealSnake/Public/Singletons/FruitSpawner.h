// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SingletonActor.h"
#include "FruitSpawner.generated.h"

UCLASS()
class UNREALSNAKE_API AFruitSpawner : public ASingletonActor
{
	GENERATED_BODY()
public:
	AFruitSpawner();
	virtual void Tick(float DeltaTime) override;
	void SpawnFruit();
protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};
