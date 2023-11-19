// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Singleton.generated.h"

UCLASS()
class UNREALSNAKE_API ASingletonActor : public AActor
{
	GENERATED_BODY()

protected:
	// Protected constructor to prevent external instantiation
	ASingletonActor();

private:
	// Static pointer to the singleton instance
	static ASingletonActor* Instance;

public:
	// Static method to get the singleton instance
	static ASingletonActor* GetInstance();

	// Ensure the destructor is public and virtual
	virtual ~ASingletonActor();
};
