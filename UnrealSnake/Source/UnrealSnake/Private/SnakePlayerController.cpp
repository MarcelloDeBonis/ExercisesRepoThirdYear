// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakePlayerController.h"
#include "SnakePawn.h"

ASnakePlayerController::ASnakePlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASnakePlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void ASnakePlayerController::GoUp()
{
	if(CanChangeDirection(Up))
	{
		ASnakePawn* SnakePawn = Cast<ASnakePawn>(GetPawn());
		SnakePawn->ChangeDirection(Up);
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Can't go UP"));
	}
}

void ASnakePlayerController::GoRight()
{
	if(CanChangeDirection(Right))
	{
		ASnakePawn* SnakePawn = Cast<ASnakePawn>(GetPawn());
		SnakePawn->ChangeDirection(Right);
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Can't go RIGHT"));
	}
}

void ASnakePlayerController::GoDown()
{
	if(CanChangeDirection(Down))
	{
		ASnakePawn* SnakePawn = Cast<ASnakePawn>(GetPawn());
		SnakePawn->ChangeDirection(Down);
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Can't go DOWN"));
	}
}

void ASnakePlayerController::GoLeft()
{
	if(CanChangeDirection(Left))
	{
		ASnakePawn* SnakePawn = Cast<ASnakePawn>(GetPawn());
		SnakePawn->ChangeDirection(Left);
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Can't go LEFT"));
	}
}


bool ASnakePlayerController::CanChangeDirection(Direction NewDirection)
{
	switch (Cast<ASnakePawn>(GetPawn())->GetDirection())
	{
	//
	case Up:
		switch (NewDirection)
		{
	case Up:
		return false;
			break;
				
	case Right:
		return true;
			break;

	case Left:
		return true;
			break;

	case Down:
		return false;
			break;
		}
		break;
//
	case Right:
		switch (NewDirection)
		{
	case Up:
		return true;
			break;
				
	case Right:
		return false;
			break;

	case Left:
		return false;
			break;

	case Down:
		return true;
			break;
		}
		break;
//
	case Down:
		switch (NewDirection)
		{
	case Up:
		return false;
			break;
				
	case Right:
		return true;
			break;

	case Left:
		return true;
			break;

	case Down:
		return false;
			break;
		}
		break;
//
	case Left:
		switch (NewDirection)
		{
	case Up:
		return true;
			break;
				
	case Right:
		return false;
			break;

	case Left:
		return false;
			break;

	case Down:
		return true;
			break;
		}
		break;
	}
	return false;
}

void ASnakePlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASnakePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	InputComponent->BindAction("GoUp", IE_Pressed, this, &ASnakePlayerController::GoUp);
	InputComponent->BindAction("GoRight", IE_Pressed, this, &ASnakePlayerController::GoRight);
	InputComponent->BindAction("GoDown", IE_Pressed, this, &ASnakePlayerController::GoDown);
	InputComponent->BindAction("GoLeft", IE_Pressed, this, &ASnakePlayerController::GoLeft);
	
}

