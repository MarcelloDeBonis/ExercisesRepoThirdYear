// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/CharacterInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterInfo() {}
// Cross Module References
	CHARACTER_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References

static_assert(std::is_polymorphic<FCharacterInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCharacterInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterInfo;
class UScriptStruct* FCharacterInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterInfo, (UObject*)Z_Construct_UPackage__Script_Character(), TEXT("CharacterInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterInfo.OuterSingleton;
}
template<> CHARACTER_API UScriptStruct* StaticStruct<FCharacterInfo>()
{
	return FCharacterInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterInfo_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Exp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Life_MetaData[] = {
		{ "Category", "CharacterInfo" },
		{ "DisplayName", "Life" },
		{ "ModuleRelativePath", "Public/CharacterInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Life = { "Life", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterInfo, Life), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Life_MetaData), Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Life_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "CharacterInfo" },
		{ "DisplayName", "Damage" },
		{ "ModuleRelativePath", "Public/CharacterInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterInfo, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Damage_MetaData), Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Damage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_WeaponDuration_MetaData[] = {
		{ "Category", "CharacterInfo" },
		{ "DisplayName", "WeaponDuration" },
		{ "ModuleRelativePath", "Public/CharacterInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_WeaponDuration = { "WeaponDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterInfo, WeaponDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_WeaponDuration_MetaData), Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_WeaponDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Exp_MetaData[] = {
		{ "Category", "CharacterInfo" },
		{ "DisplayName", "Exp" },
		{ "ModuleRelativePath", "Public/CharacterInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterInfo, Exp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Exp_MetaData), Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Exp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Life,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_WeaponDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Exp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CharacterInfo",
		Z_Construct_UScriptStruct_FCharacterInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfo_Statics::PropPointers),
		sizeof(FCharacterInfo),
		alignof(FCharacterInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterInfo.InnerSingleton, Z_Construct_UScriptStruct_FCharacterInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_CharacterInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_CharacterInfo_h_Statics::ScriptStructInfo[] = {
		{ FCharacterInfo::StaticStruct, Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewStructOps, TEXT("CharacterInfo"), &Z_Registration_Info_UScriptStruct_CharacterInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterInfo), 1509920620U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_CharacterInfo_h_1051760845(TEXT("/Script/Character"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_CharacterInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_CharacterInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
