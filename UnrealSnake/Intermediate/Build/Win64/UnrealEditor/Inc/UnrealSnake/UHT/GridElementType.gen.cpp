// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSnake/Public/Enums/GridElementType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridElementType() {}
// Cross Module References
	UNREALSNAKE_API UEnum* Z_Construct_UEnum_UnrealSnake_GridElementType();
	UPackage* Z_Construct_UPackage__Script_UnrealSnake();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_GridElementType;
	static UEnum* GridElementType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_GridElementType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_GridElementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealSnake_GridElementType, (UObject*)Z_Construct_UPackage__Script_UnrealSnake(), TEXT("GridElementType"));
		}
		return Z_Registration_Info_UEnum_GridElementType.OuterSingleton;
	}
	template<> UNREALSNAKE_API UEnum* StaticEnum<GridElementType>()
	{
		return GridElementType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealSnake_GridElementType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealSnake_GridElementType_Statics::Enumerators[] = {
		{ "Snake", (int64)Snake },
		{ "Fruit", (int64)Fruit },
		{ "Wall", (int64)Wall },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealSnake_GridElementType_Statics::Enum_MetaDataParams[] = {
		{ "Fruit.DisplayName", "Fruit" },
		{ "Fruit.Name", "Fruit" },
		{ "ModuleRelativePath", "Public/Enums/GridElementType.h" },
		{ "Snake.DisplayName", "Snake" },
		{ "Snake.Name", "Snake" },
		{ "Wall.DisplayName", "Wall" },
		{ "Wall.Name", "Wall" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealSnake_GridElementType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealSnake,
		nullptr,
		"GridElementType",
		"GridElementType",
		Z_Construct_UEnum_UnrealSnake_GridElementType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealSnake_GridElementType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealSnake_GridElementType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealSnake_GridElementType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UnrealSnake_GridElementType()
	{
		if (!Z_Registration_Info_UEnum_GridElementType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_GridElementType.InnerSingleton, Z_Construct_UEnum_UnrealSnake_GridElementType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_GridElementType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Enums_GridElementType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Enums_GridElementType_h_Statics::EnumInfo[] = {
		{ GridElementType_StaticEnum, TEXT("GridElementType"), &Z_Registration_Info_UEnum_GridElementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2758748171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Enums_GridElementType_h_3823501492(TEXT("/Script/UnrealSnake"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Enums_GridElementType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Enums_GridElementType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
