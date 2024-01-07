// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/Weapon/WeaponInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponInfo() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	CHARACTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References

static_assert(std::is_polymorphic<FWeaponInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWeaponInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponInfo;
class UScriptStruct* FWeaponInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponInfo, (UObject*)Z_Construct_UPackage__Script_Character(), TEXT("WeaponInfo"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponInfo.OuterSingleton;
}
template<> CHARACTER_API UScriptStruct* StaticStruct<FWeaponInfo>()
{
	return FWeaponInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeaponInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "DisplayName", "WeaponClass" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponInfo.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponInfo, WeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponClass_MetaData), Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"WeaponInfo",
		Z_Construct_UScriptStruct_FWeaponInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::PropPointers),
		sizeof(FWeaponInfo),
		alignof(FWeaponInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_WeaponInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponInfo.InnerSingleton, Z_Construct_UScriptStruct_FWeaponInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeaponInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Weapon_WeaponInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Weapon_WeaponInfo_h_Statics::ScriptStructInfo[] = {
		{ FWeaponInfo::StaticStruct, Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewStructOps, TEXT("WeaponInfo"), &Z_Registration_Info_UScriptStruct_WeaponInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponInfo), 2562942021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Weapon_WeaponInfo_h_2094525610(TEXT("/Script/Character"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Weapon_WeaponInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Weapon_WeaponInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
