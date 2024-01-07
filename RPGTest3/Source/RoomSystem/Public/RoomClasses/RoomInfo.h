#pragma once

#include "CoreMinimal.h"
#include "RoomInfo.generated.h"

USTRUCT(BlueprintType)
struct FRoomInfo : public FTableRowBase
{
	GENERATED_BODY()

	FRoomInfo() = default;
public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RoomSystem")
	UTexture2D* MySpriteTexture;;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RoomSystem")
	TMap<FString, FVector> Enemies;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RoomSystem")
	bool Chest;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RoomSystem")
	bool Fountain;
	
};


