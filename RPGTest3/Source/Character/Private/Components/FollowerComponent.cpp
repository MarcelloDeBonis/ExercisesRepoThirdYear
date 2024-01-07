// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/FollowerComponent.h"

UFollowerComponent::UFollowerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UFollowerComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UFollowerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	Follow();
	Rotate();
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
		FVector NewLocation = ActorToFollow->GetActorLocation() - ((ActorToFollow->GetActorForwardVector() * -1) * DistanceToMaintain);
		GetOwner()->SetActorLocation(NewLocation);
	}
}

void UFollowerComponent::Rotate()
{
	if(ActorToFollow)
	{
		FRotator NewRotation = ActorToFollow->GetActorRotation();
		GetOwner()->SetActorRotation(NewRotation);
	}
}
