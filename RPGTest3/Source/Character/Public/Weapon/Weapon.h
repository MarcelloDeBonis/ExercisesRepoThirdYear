// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/FollowerComponent.h"
#include "Enums/ETeam.h"
#include "GameFramework/Actor.h"
#include "StateMachines/WeaponStates/WeaponState.h"
#include "Weapon.generated.h"

class UAttackComponent;

UCLASS(Abstract)
class CHARACTER_API AWeapon : public AActor
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStaticMeshComponent* Mesh = nullptr;
	
	AWeapon();
	void SetDamage(int _Damage, UAttackComponent* _AttackComponent);
	virtual void ActiveWeapon(float TimeActivation);
	void DeactiveWeapon();
	bool AvaiableWeapon() const { return !CanCollide; }

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character")
	UFollowerComponent* FollowerComponent = nullptr;
	
	UFUNCTION(BlueprintCallable)
	void OnCollision(AActor* OtherCharacter);
	
	void InitTeam(ETeam _Team);
private:

	UPROPERTY()
	UAttackComponent* AttackComponent = nullptr;
	bool CanCollide = false;
	ETeam Team = ETeam::None;
	void SetState(UWeaponState* NewState);
	
	UPROPERTY()
	UWeaponState* CurrentState =  nullptr;
	
	FTimerHandle ActivationTimerHandle;
	
protected:
	
	float StartDistance = 200.0f;
	int Damage = 0;

	virtual void BeginPlay() override;
	
};
