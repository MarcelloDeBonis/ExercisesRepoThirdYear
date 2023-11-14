// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Controller.h"
#include "AMyController.generated.h"

UCLASS()
class PLAYERPAWNEXERCISE_API AMyController : public APlayerController
{
	GENERATED_BODY()

public:

	virtual void SetupInputComponent() override;

protected:

	void OnMoveX(float AxisValue);
	void OnMoveY(float AxisValue);
	
};
