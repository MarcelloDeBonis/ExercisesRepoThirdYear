// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RPGController.generated.h"

UINTERFACE()
class URPGController : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class CHARACTER_API IRPGController
{
	GENERATED_BODY()

public:

	virtual void OnDeactiveAttack() = 0;
};
