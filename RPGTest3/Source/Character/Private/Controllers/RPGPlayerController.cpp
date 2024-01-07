// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/RPGPlayerController.h"

#include "Character/RPGPlayer.h"
#include "StateMachines/ControllerState/States/IdleState.h"


ARPGPlayerController::ARPGPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ARPGPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void ARPGPlayerController::Init()
{
	StateMachine = NewObject<URPGCharacterStateMachine>();
	StateMachine->Init(Cast<ARPGPlayer>(GetPawn()));
	Cast<ARPGPlayer>(GetPawn())->InitController(this);
}

void ARPGPlayerController::OnDeactiveAttack()
{
	StateMachine->OnAttacked();
}

void ARPGPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if(StateMachine->CurrentState!=nullptr)
	{
		StateMachine->CurrentState->OnUpdate(DeltaTime);
	}
}

void ARPGPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis(TEXT("MoveX"), this, &ARPGPlayerController::OnX);
	InputComponent->BindAxis(TEXT("MoveY"), this, &ARPGPlayerController::OnY);
	InputComponent->BindAction("Interact", IE_Pressed, this, &ARPGPlayerController::OnHeal);
	InputComponent->BindAction("Heal", IE_Pressed, this, &ARPGPlayerController::OnHeal);
	InputComponent->BindAction("Attack", IE_Pressed, this, &ARPGPlayerController::OnAttack);
}

void ARPGPlayerController::OnX(float AxisValue)
{
	StateMachine->OnMoveX(AxisValue);
}

void ARPGPlayerController::OnY(float AxisValue)
{
	StateMachine->OnMoveY(AxisValue);
}

void ARPGPlayerController::OnAttack()
{
	StateMachine->OnAttack();
}

void ARPGPlayerController::OnHeal()
{
	Cast<ARPGPlayer>(GetPawn())->InventoryComponent->UseHealPotion();
}

void ARPGPlayerController::OnInteract()
{
	Cast<ARPGPlayer>(GetPawn())->Interact();
}
