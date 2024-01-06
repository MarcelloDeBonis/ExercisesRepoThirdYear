// Fill out your copyright notice in the Description page of Project Settings.

#include "StateMachines/ControllerState/States/MovingState.h"

#include "StateMachines/ControllerState/RPGCharacterStateMachine.h"
#include "StateMachines/ControllerState/States/AttackingState.h"
#include "StateMachines/ControllerState/States/IdleState.h"

void UMovingState::OnEnter_Implementation(ARPGCharacter* CharacterRef, URPGCharacterStateMachine* StateMachineRef)
{
	Super::OnEnter_Implementation(CharacterRef, StateMachineRef);
}

void UMovingState::OnUpdate_Implementation(float DeltaTime)
{
	Super::OnUpdate_Implementation(DeltaTime);

	Move(DeltaTime);
	Rotate();
	
	if(StateMachine->IsAttacking())
	{
		StateMachine->SetState(NewObject<UAttackingState>());
	}

	if(StateMachine->GetXMovement()==0 && StateMachine->GetYMovement()==0)
	{
		StateMachine->SetState(NewObject<UIdleState>());
	}
}

void UMovingState::OnExit_Implementation()
{
	Super::OnExit_Implementation();
}

void UMovingState::Move(float DeltaTime)
{
	UE_LOG(LogTemp, Warning, TEXT("X: %f"), StateMachine->GetXMovement());
	UE_LOG(LogTemp, Warning, TEXT("Y: %f"), StateMachine->GetYMovement());
	UE_LOG(LogTemp, Warning, TEXT("Last pos: %s"), *Character->GetLastMovementInputVector().ToString());

	FVector MovementInput = FVector(StateMachine->GetXMovement(), StateMachine->GetYMovement(), 0.0f);
	
	FVector CurrentLocation = Character->GetActorLocation();

	FVector Offset = MovementInput * DeltaTime * 400;

	FVector NewLocation = CurrentLocation + Offset;
	
	GEngine->AddOnScreenDebugMessage(-1, 0, FColor::Cyan, FString::Printf(TEXT("%s"), *(MovementInput * DeltaTime).ToString()));
	Character->SetActorLocation(NewLocation);

	UE_LOG(LogTemp, Warning, TEXT("Current pos: %s"), *Character->GetActorLocation().ToString());
}

void UMovingState::Rotate()
{
	FVector Direction (0.0f, 0.0f, 0.0f);
	Direction.X = StateMachine->GetXMovement();
	Direction.Y = StateMachine->GetYMovement();
	const FRotator Rotation = Direction.Rotation();
	Character->SetActorRotation(Rotation);
}
