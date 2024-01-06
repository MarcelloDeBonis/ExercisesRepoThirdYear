// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "RPGTestGameMode.generated.h"

/**
 * 
 */
UCLASS()
class RPGTEST3_API ARPGTestGameMode : public AGameMode
{
	GENERATED_BODY()
public :
	
	ARPGTestGameMode();
	void StartGame();
	void EndGame();
};
