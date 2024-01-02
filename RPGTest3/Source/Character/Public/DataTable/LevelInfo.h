#pragma once

#include "CoreMinimal.h"
#include "LevelInfo.generated.h"

USTRUCT(BlueprintType)
struct FLevelInfo : public FTableRowBase
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Life"))
	int Life = 0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Damage"))
	int Damage = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Exp"))
	int Exp = 0;
};
