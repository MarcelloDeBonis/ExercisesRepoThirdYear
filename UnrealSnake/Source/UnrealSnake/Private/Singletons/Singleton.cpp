// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealSnake/Public/Singletons/Singleton.h"


ASingletonActor* ASingletonActor::Instance = nullptr;

ASingletonActor::ASingletonActor()
{
	// If no instance exists, set this instance as the singleton
	if (!Instance)
	{
		Instance = this;
	}
}

ASingletonActor::~ASingletonActor()
{
	// When the singleton is destroyed, reset the instance
	if (Instance == this)
	{
		Instance = nullptr;
	}
}

ASingletonActor* ASingletonActor::GetInstance()
{
	return Instance;
}

