// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterModule/Public/Components/ExpComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpComponent() {}
// Cross Module References
	CHARACTERMODULE_API UClass* Z_Construct_UClass_UExpComponent();
	CHARACTERMODULE_API UClass* Z_Construct_UClass_UExpComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CharacterModule();
// End Cross Module References
	void UExpComponent::StaticRegisterNativesUExpComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExpComponent);
	UClass* Z_Construct_UClass_UExpComponent_NoRegister()
	{
		return UExpComponent::StaticClass();
	}
	struct Z_Construct_UClass_UExpComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExpComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExpComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/ExpComponent.h" },
		{ "ModuleRelativePath", "Public/Components/ExpComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExpComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExpComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExpComponent_Statics::ClassParams = {
		&UExpComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExpComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UExpComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UExpComponent()
	{
		if (!Z_Registration_Info_UClass_UExpComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExpComponent.OuterSingleton, Z_Construct_UClass_UExpComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExpComponent.OuterSingleton;
	}
	template<> CHARACTERMODULE_API UClass* StaticClass<UExpComponent>()
	{
		return UExpComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExpComponent);
	UExpComponent::~UExpComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest2_Source_CharacterModule_Public_Components_ExpComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest2_Source_CharacterModule_Public_Components_ExpComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExpComponent, UExpComponent::StaticClass, TEXT("UExpComponent"), &Z_Registration_Info_UClass_UExpComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExpComponent), 674600756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest2_Source_CharacterModule_Public_Components_ExpComponent_h_2218202680(TEXT("/Script/CharacterModule"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest2_Source_CharacterModule_Public_Components_ExpComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest2_Source_CharacterModule_Public_Components_ExpComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS