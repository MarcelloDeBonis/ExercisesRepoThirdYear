// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/LevelSystem/LevelInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInfo() {}
// Cross Module References
	CHARACTER_API UScriptStruct* Z_Construct_UScriptStruct_FLevelInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References

static_assert(std::is_polymorphic<FLevelInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLevelInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelInfo;
class UScriptStruct* FLevelInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelInfo, (UObject*)Z_Construct_UPackage__Script_Character(), TEXT("LevelInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LevelInfo.OuterSingleton;
}
template<> CHARACTER_API UScriptStruct* StaticStruct<FLevelInfo>()
{
	return FLevelInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Life_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Life;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Exp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelSystem/LevelInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelInfo_Statics::NewProp_Life_MetaData[] = {
		{ "Category", "LevelInfo" },
		{ "DisplayName", "Life" },
		{ "ModuleRelativePath", "Public/LevelSystem/LevelInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelInfo_Statics::NewProp_Life = { "Life", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelInfo, Life), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelInfo_Statics::NewProp_Life_MetaData), Z_Construct_UScriptStruct_FLevelInfo_Statics::NewProp_Life_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelInfo_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "LevelInfo" },
		{ "DisplayName", "Damage" },
		{ "ModuleRelativePath", "Public/LevelSystem/LevelInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelInfo_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelInfo, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelInfo_Statics::NewProp_Damage_MetaData), Z_Construct_UScriptStruct_FLevelInfo_Statics::NewProp_Damage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelInfo_Statics::NewProp_Exp_MetaData[] = {
		{ "Category", "LevelInfo" },
		{ "DisplayName", "Exp" },
		{ "ModuleRelativePath", "Public/LevelSystem/LevelInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelInfo_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelInfo, Exp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelInfo_Statics::NewProp_Exp_MetaData), Z_Construct_UScriptStruct_FLevelInfo_Statics::NewProp_Exp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelInfo_Statics::NewProp_Life,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelInfo_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelInfo_Statics::NewProp_Exp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"LevelInfo",
		Z_Construct_UScriptStruct_FLevelInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelInfo_Statics::PropPointers),
		sizeof(FLevelInfo),
		alignof(FLevelInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLevelInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelInfo.InnerSingleton, Z_Construct_UScriptStruct_FLevelInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_LevelSystem_LevelInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_LevelSystem_LevelInfo_h_Statics::ScriptStructInfo[] = {
		{ FLevelInfo::StaticStruct, Z_Construct_UScriptStruct_FLevelInfo_Statics::NewStructOps, TEXT("LevelInfo"), &Z_Registration_Info_UScriptStruct_LevelInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelInfo), 2795126743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_LevelSystem_LevelInfo_h_4191466278(TEXT("/Script/Character"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_LevelSystem_LevelInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_LevelSystem_LevelInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
