// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerSaveGame.h"
#include "GameFramework/Pawn.h"
#include "Components/SkeletalMeshComponent.h" 
#include "PlayerPawn.generated.h"


UENUM(BlueprintType)
enum class EPlayerClass : uint8
{
	Warrior,
	Mage,
	Archer
};

UCLASS()
class PLAYERPAWNEXERCISE_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	APlayerPawn();

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, Category = "Player")
	FGameData const& GetPlayerStatistics() const { return PlayerStats; }

	UFUNCTION(BlueprintCallable, Category = "Player")
	void SetPlayerStatistics(const FGameData& NewStatistics);

	UFUNCTION(BlueprintCallable, Category = "Player")
	void Kill();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player", meta = (AllowPrivateAccess = "true"))
	FGameData PlayerStats;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	USkeletalMeshComponent* PlayerMesh;
};
