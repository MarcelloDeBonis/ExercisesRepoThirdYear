// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSnake/Public/Enums/Direction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirection() {}
// Cross Module References
	UNREALSNAKE_API UEnum* Z_Construct_UEnum_UnrealSnake_Direction();
	UPackage* Z_Construct_UPackage__Script_UnrealSnake();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_Direction;
	static UEnum* Direction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_Direction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_Direction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealSnake_Direction, (UObject*)Z_Construct_UPackage__Script_UnrealSnake(), TEXT("Direction"));
		}
		return Z_Registration_Info_UEnum_Direction.OuterSingleton;
	}
	template<> UNREALSNAKE_API UEnum* StaticEnum<Direction>()
	{
		return Direction_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealSnake_Direction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealSnake_Direction_Statics::Enumerators[] = {
		{ "Up", (int64)Up },
		{ "Right", (int64)Right },
		{ "Left", (int64)Left },
		{ "Down", (int64)Down },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealSnake_Direction_Statics::Enum_MetaDataParams[] = {
		{ "Down.DisplayName", "Down" },
		{ "Down.Name", "Down" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "Left" },
		{ "ModuleRelativePath", "Public/Enums/Direction.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "Right" },
		{ "Up.DisplayName", "Up" },
		{ "Up.Name", "Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealSnake_Direction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealSnake,
		nullptr,
		"Direction",
		"Direction",
		Z_Construct_UEnum_UnrealSnake_Direction_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealSnake_Direction_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealSnake_Direction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealSnake_Direction_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UnrealSnake_Direction()
	{
		if (!Z_Registration_Info_UEnum_Direction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_Direction.InnerSingleton, Z_Construct_UEnum_UnrealSnake_Direction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_Direction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Enums_Direction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Enums_Direction_h_Statics::EnumInfo[] = {
		{ Direction_StaticEnum, TEXT("Direction"), &Z_Registration_Info_UEnum_Direction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1532417472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Enums_Direction_h_3851557867(TEXT("/Script/UnrealSnake"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Enums_Direction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_Enums_Direction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
