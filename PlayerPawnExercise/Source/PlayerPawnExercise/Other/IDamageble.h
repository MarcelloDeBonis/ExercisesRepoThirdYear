// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IDamageble.generated.h"

UINTERFACE(Blueprintable)
class PLAYERPAWNEXERCISE_API UDamageable : public UInterface
{
    GENERATED_BODY()
};


class PLAYERPAWNEXERCISE_API IDamageable
{
    GENERATED_BODY()

public:

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    float TakeDamage(float DamageAmount);
    virtual float TakeDamage_Implementation(float DamageAmount) = 0;
};