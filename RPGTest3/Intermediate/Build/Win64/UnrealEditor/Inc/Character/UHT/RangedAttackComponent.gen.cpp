// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/Components/AttackComponents/RangedAttackComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangedAttackComponent() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_UAttackComponent();
	CHARACTER_API UClass* Z_Construct_UClass_URangedAttackComponent();
	CHARACTER_API UClass* Z_Construct_UClass_URangedAttackComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	void URangedAttackComponent::StaticRegisterNativesURangedAttackComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URangedAttackComponent);
	UClass* Z_Construct_UClass_URangedAttackComponent_NoRegister()
	{
		return URangedAttackComponent::StaticClass();
	}
	struct Z_Construct_UClass_URangedAttackComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URangedAttackComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttackComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URangedAttackComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedAttackComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/AttackComponents/RangedAttackComponent.h" },
		{ "ModuleRelativePath", "Public/Components/AttackComponents/RangedAttackComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URangedAttackComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URangedAttackComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URangedAttackComponent_Statics::ClassParams = {
		&URangedAttackComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URangedAttackComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URangedAttackComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URangedAttackComponent()
	{
		if (!Z_Registration_Info_UClass_URangedAttackComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URangedAttackComponent.OuterSingleton, Z_Construct_UClass_URangedAttackComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URangedAttackComponent.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<URangedAttackComponent>()
	{
		return URangedAttackComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URangedAttackComponent);
	URangedAttackComponent::~URangedAttackComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_AttackComponents_RangedAttackComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_AttackComponents_RangedAttackComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URangedAttackComponent, URangedAttackComponent::StaticClass, TEXT("URangedAttackComponent"), &Z_Registration_Info_UClass_URangedAttackComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URangedAttackComponent), 3782754695U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_AttackComponents_RangedAttackComponent_h_955256565(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_AttackComponents_RangedAttackComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Components_AttackComponents_RangedAttackComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
