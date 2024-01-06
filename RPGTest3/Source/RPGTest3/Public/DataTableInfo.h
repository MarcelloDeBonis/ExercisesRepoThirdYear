// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DataTableInfo.generated.h"

/**
 * 
 */
UCLASS()
class RPGTEST3_API UDataTableInfo : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	template<typename T>
	static T GetStructByRowName(FString path, FString rowName);

	template<typename T>
	static T GetRandomStructByRowName(FString path);
};

template <typename T>
T UDataTableInfo::GetStructByRowName(FString path, FString rowName)
{
	T* row = nullptr;
	UDataTable* table = LoadObject<UDataTable>(nullptr, *path);

	if (table)
	{
		row = table->FindRow<T>(FName(*rowName), FString(""));
	}

	if(row==nullptr)
	{
		return GetStructByRowName<T>(path, "MarcelloTestRowName");
	}
	
	return *row;
}

template <typename T>
T UDataTableInfo::GetRandomStructByRowName(FString path)
{
	T* row = nullptr;
	UDataTable* table = LoadObject<UDataTable>(nullptr, *path);

	if (table)
	{
		TArray<T*> rows;
		table->GetAllRows("", rows);
		row = rows[FMath::RandRange(0, rows.Num()-1)];
	}

	if(row==nullptr)
	{
		return GetStructByRowName<T>(path, "MarcelloTestRowName");
	}
	
	return *row;
}
