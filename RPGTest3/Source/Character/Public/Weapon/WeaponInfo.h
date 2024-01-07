#pragma once

#include "CoreMinimal.h"
#include "WeaponInfo.generated.h"

USTRUCT(BlueprintType)
struct FWeaponInfo : public FTableRowBase
{
	GENERATED_BODY()

public:

	FWeaponInfo() = default;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="WeaponClass"))
	TSubclassOf<class AWeapon> WeaponClass;

	/*
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Effect"))
	TSubclassOf<class IAffectableState> EffectState;

	A lot of states that inherit by the states of the state machine about the effect, like the freezing for the moving state, or the burning for the damage state into health component.
	All those effects inherit by the interface IAffectableState.
	*/

};