// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RPGController.h"
#include "StateMachines/ControllerState/RPGCharacterStateMachine.h"
#include "RPGPlayerController.generated.h"

UCLASS()
class CHARACTER_API ARPGPlayerController : public APlayerController, public IRPGController
{
	GENERATED_BODY()

public:

	ARPGPlayerController();
	virtual void BeginPlay() override;
	void Init();
	virtual void OnDeactiveAttack() override;
private:

	virtual void Tick(float DeltaTime) override;
	virtual void SetupInputComponent() override;

	UPROPERTY()
	URPGCharacterStateMachine* StateMachine = nullptr;

	void OnX(float AxisValue);
	void OnY(float AxisValue);
	void OnAttack();
	void OnHeal();
	void OnInteractOn();
};
