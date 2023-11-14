
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Amypawn.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStatistics
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
	float Energy;

	
};

UCLASS()
class Amypawn : public APawn
{
	GENERATED_BODY()

public:
	Amypawn();

protected:
	virtual void BeginPlay() override;
	USkeletalMeshComponent* MyMeshComponent;
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player")
	FPlayerStatistics PlayerStats;
	
	UFUNCTION(BlueprintCallable, Exec , Category="Player")
	void Kill();

	void AddMovementInput (FVector Direction, float Value, bool bForce) override;
};

