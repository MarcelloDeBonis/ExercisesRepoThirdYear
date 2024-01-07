// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FollowerComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CHARACTER_API UFollowerComponent : public UActorComponent
{
	GENERATED_BODY()

public:    
	UFollowerComponent();
	void SetActorToFollow(AActor* NewActorToFollow);
	void SetDistanceToMaintain(float NewDistance);
	
protected:
	virtual void BeginPlay() override;

private:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void Follow() const;
	void Rotate();
	
	UPROPERTY(EditAnywhere, Category="Follower")
	AActor* ActorToFollow = nullptr;

	UPROPERTY(EditAnywhere, Category="Follower")
	float DistanceToMaintain = 500.0f;
};
