// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterModule/Public/Character/RPGEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGEnemy() {}
// Cross Module References
	CHARACTERMODULE_API UClass* Z_Construct_UClass_ARPGCharacter();
	CHARACTERMODULE_API UClass* Z_Construct_UClass_ARPGEnemy();
	CHARACTERMODULE_API UClass* Z_Construct_UClass_ARPGEnemy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CharacterModule();
// End Cross Module References
	void ARPGEnemy::StaticRegisterNativesARPGEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPGEnemy);
	UClass* Z_Construct_UClass_ARPGEnemy_NoRegister()
	{
		return ARPGEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ARPGEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARPGCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGEnemy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/RPGEnemy.h" },
		{ "ModuleRelativePath", "Public/Character/RPGEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGEnemy_Statics::ClassParams = {
		&ARPGEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPGEnemy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARPGEnemy()
	{
		if (!Z_Registration_Info_UClass_ARPGEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGEnemy.OuterSingleton, Z_Construct_UClass_ARPGEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARPGEnemy.OuterSingleton;
	}
	template<> CHARACTERMODULE_API UClass* StaticClass<ARPGEnemy>()
	{
		return ARPGEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGEnemy);
	ARPGEnemy::~ARPGEnemy() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest2_Source_CharacterModule_Public_Character_RPGEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest2_Source_CharacterModule_Public_Character_RPGEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARPGEnemy, ARPGEnemy::StaticClass, TEXT("ARPGEnemy"), &Z_Registration_Info_UClass_ARPGEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGEnemy), 3486561038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest2_Source_CharacterModule_Public_Character_RPGEnemy_h_3137790282(TEXT("/Script/CharacterModule"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest2_Source_CharacterModule_Public_Character_RPGEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest2_Source_CharacterModule_Public_Character_RPGEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS