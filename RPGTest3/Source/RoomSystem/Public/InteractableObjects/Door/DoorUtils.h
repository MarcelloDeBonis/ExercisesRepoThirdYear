// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Direction.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DoorUtils.generated.h"

/**
 * 
 */
UCLASS()
class ROOMSYSTEM_API UDoorUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	static EDirection GetOppositeDirection(EDirection Direction);
};
