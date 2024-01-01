// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/FollowerComponent.h"

UFollowerComponent::UFollowerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	ActorToFollow = nullptr;
	DistanceToMaintain = 500.0f;
}

void UFollowerComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UFollowerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	Follow();
}

void UFollowerComponent::SetActorToFollow(AActor* NewActorToFollow)
{
	ActorToFollow = NewActorToFollow;
}

void UFollowerComponent::SetDistanceToMaintain(float NewDistance)
{
	DistanceToMaintain = NewDistance;
}

void UFollowerComponent::Follow() const
{
	if(ActorToFollow)
	{
		FVector NewLocation = ActorToFollow->GetActorLocation() - (ActorToFollow->GetActorForwardVector() * DistanceToMaintain);
		GetOwner()->SetActorLocation(NewLocation);
	}
}
