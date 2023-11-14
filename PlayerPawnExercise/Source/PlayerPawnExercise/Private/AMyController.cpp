// Fill out your copyright notice in the Description page of Project Settings.


#include "AMyController.h"

void AMyController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis(TEXT("MoveX"), this, &AMyController::OnMoveX);
	InputComponent->BindAxis(TEXT("MoveY"), this, &AMyController::OnMoveY);
}

void AMyController::OnMoveX(float AxisValue)
{
	if (AxisValue != 0.0f)
	{
		APawn* MyPawn = GetPawn();
		if (MyPawn)
		{
			MyPawn->AddMovementInput(FVector::RightVector, AxisValue);
		}
	}
}

void AMyController::OnMoveY(float AxisValue)
{
	if (AxisValue != 0.0f)
	{
		APawn* MyPawn = GetPawn();
		if (MyPawn)
		{
			MyPawn->AddMovementInput(FVector::ForwardVector, AxisValue);
		}
	}
}
