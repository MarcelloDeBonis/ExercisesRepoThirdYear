// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/RPGBrainController.h"


// Sets default values
ARPGBrainController::ARPGBrainController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ARPGBrainController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARPGBrainController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

