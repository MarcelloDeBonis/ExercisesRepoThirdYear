// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/Enums/ETeam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETeam() {}
// Cross Module References
	CHARACTER_API UEnum* Z_Construct_UEnum_Character_ETeam();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETeam;
	static UEnum* ETeam_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETeam.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETeam.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Character_ETeam, (UObject*)Z_Construct_UPackage__Script_Character(), TEXT("ETeam"));
		}
		return Z_Registration_Info_UEnum_ETeam.OuterSingleton;
	}
	template<> CHARACTER_API UEnum* StaticEnum<ETeam>()
	{
		return ETeam_StaticEnum();
	}
	struct Z_Construct_UEnum_Character_ETeam_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Character_ETeam_Statics::Enumerators[] = {
		{ "ETeam::None", (int64)ETeam::None },
		{ "ETeam::Player", (int64)ETeam::Player },
		{ "ETeam::Enemy", (int64)ETeam::Enemy },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Character_ETeam_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Enemy.DisplayName", "Enemy" },
		{ "Enemy.Name", "ETeam::Enemy" },
		{ "ModuleRelativePath", "Public/Enums/ETeam.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ETeam::None" },
		{ "Player.DisplayName", "Player" },
		{ "Player.Name", "ETeam::Player" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Character_ETeam_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Character,
		nullptr,
		"ETeam",
		"ETeam",
		Z_Construct_UEnum_Character_ETeam_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Character_ETeam_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Character_ETeam_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Character_ETeam_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Character_ETeam()
	{
		if (!Z_Registration_Info_UEnum_ETeam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETeam.InnerSingleton, Z_Construct_UEnum_Character_ETeam_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETeam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Enums_ETeam_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Enums_ETeam_h_Statics::EnumInfo[] = {
		{ ETeam_StaticEnum, TEXT("ETeam"), &Z_Registration_Info_UEnum_ETeam, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 960853877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Enums_ETeam_h_2521369213(TEXT("/Script/Character"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Enums_ETeam_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Enums_ETeam_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
