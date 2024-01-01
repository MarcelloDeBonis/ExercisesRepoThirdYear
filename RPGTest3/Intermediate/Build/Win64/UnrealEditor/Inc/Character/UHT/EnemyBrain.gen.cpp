// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/State Machines/Brain/EnemyBrain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBrain() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_UEnemyBrain();
	CHARACTER_API UClass* Z_Construct_UClass_UEnemyBrain_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	void UEnemyBrain::StaticRegisterNativesUEnemyBrain()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyBrain);
	UClass* Z_Construct_UClass_UEnemyBrain_NoRegister()
	{
		return UEnemyBrain::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyBrain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyBrain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBrain_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBrain_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "State Machines/Brain/EnemyBrain.h" },
		{ "ModuleRelativePath", "Public/State Machines/Brain/EnemyBrain.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyBrain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyBrain>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyBrain_Statics::ClassParams = {
		&UEnemyBrain::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBrain_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyBrain_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEnemyBrain()
	{
		if (!Z_Registration_Info_UClass_UEnemyBrain.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyBrain.OuterSingleton, Z_Construct_UClass_UEnemyBrain_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyBrain.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<UEnemyBrain>()
	{
		return UEnemyBrain::StaticClass();
	}
	UEnemyBrain::UEnemyBrain(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyBrain);
	UEnemyBrain::~UEnemyBrain() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_State_Machines_Brain_EnemyBrain_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_State_Machines_Brain_EnemyBrain_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyBrain, UEnemyBrain::StaticClass, TEXT("UEnemyBrain"), &Z_Registration_Info_UClass_UEnemyBrain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyBrain), 4044068396U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_State_Machines_Brain_EnemyBrain_h_307553397(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_State_Machines_Brain_EnemyBrain_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_State_Machines_Brain_EnemyBrain_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
