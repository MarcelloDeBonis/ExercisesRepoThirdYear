// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SingletonActor.generated.h"

UCLASS(Abstract)
class UNREALSNAKE_API ASingletonActor : public AActor
{
	GENERATED_BODY()

protected:
	ASingletonActor();
	static ASingletonActor* Instance;
	void SetSingleInstance();
public:
	
	virtual ~ASingletonActor();

	template<typename T>
	static T* GetInstance()
	{
		return Cast<T>(Instance);
	}
};
