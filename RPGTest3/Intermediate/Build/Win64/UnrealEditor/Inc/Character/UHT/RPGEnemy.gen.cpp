// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/Character/RPGEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGEnemy() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_ARPGBrainController_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_ARPGCharacter();
	CHARACTER_API UClass* Z_Construct_UClass_ARPGEnemy();
	CHARACTER_API UClass* Z_Construct_UClass_ARPGEnemy_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_UAttackComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Character();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brain_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Brain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARPGCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGEnemy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/RPGEnemy.h" },
		{ "ModuleRelativePath", "Public/Character/RPGEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGEnemy_Statics::NewProp_AttackComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/RPGEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGEnemy_Statics::NewProp_AttackComponent = { "AttackComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGEnemy, AttackComponent), Z_Construct_UClass_UAttackComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGEnemy_Statics::NewProp_AttackComponent_MetaData), Z_Construct_UClass_ARPGEnemy_Statics::NewProp_AttackComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGEnemy_Statics::NewProp_Brain_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/RPGEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGEnemy_Statics::NewProp_Brain = { "Brain", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGEnemy, Brain), Z_Construct_UClass_ARPGBrainController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGEnemy_Statics::NewProp_Brain_MetaData), Z_Construct_UClass_ARPGEnemy_Statics::NewProp_Brain_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGEnemy_Statics::NewProp_AttackComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGEnemy_Statics::NewProp_Brain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGEnemy_Statics::ClassParams = {
		&ARPGEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARPGEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARPGEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPGEnemy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGEnemy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARPGEnemy()
	{
		if (!Z_Registration_Info_UClass_ARPGEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGEnemy.OuterSingleton, Z_Construct_UClass_ARPGEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARPGEnemy.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<ARPGEnemy>()
	{
		return ARPGEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGEnemy);
	ARPGEnemy::~ARPGEnemy() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Character_RPGEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Character_RPGEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARPGEnemy, ARPGEnemy::StaticClass, TEXT("ARPGEnemy"), &Z_Registration_Info_UClass_ARPGEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGEnemy), 1726693180U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Character_RPGEnemy_h_1903676672(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Character_RPGEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Character_RPGEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
