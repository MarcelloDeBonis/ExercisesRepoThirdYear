#pragma once

#include "CoreMinimal.h"
#include "CharacterInfo.generated.h"

USTRUCT(BlueprintType)
struct FCharacterInfo : public FTableRowBase
{
	GENERATED_BODY()

public:

	FCharacterInfo() = default;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Life"))
	int Life = 0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Damage"))
	int Damage = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="WeaponDuration"))
	float WeaponDuration = 2;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Exp"))
	int Exp = 0;
};
