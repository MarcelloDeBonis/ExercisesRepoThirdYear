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
	template<class T>
	static T* Instance;
	template<class T>
	void SetSingleInstance(T* _Instance);
public:

	template<class T>
	static T* GetInstance()
	{
		return Instance<T>;
	}

	template<class T>
	void RemoveSingleInstance();
};


template<class T>
T* ASingletonActor::Instance = nullptr;

template<class T>
void ASingletonActor::SetSingleInstance(T* _Instance)
{
	if (!Instance<T>)
	{
		Instance<T> = _Instance;
	}
}

template<class T>
void ASingletonActor::RemoveSingleInstance()
{
	Instance<T> = nullptr;
}