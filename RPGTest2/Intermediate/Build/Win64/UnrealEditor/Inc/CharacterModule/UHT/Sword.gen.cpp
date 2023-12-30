// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterModule/Public/Components/Attacks/Sword.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSword() {}
// Cross Module References
	CHARACTERMODULE_API UClass* Z_Construct_UClass_ASword();
	CHARACTERMODULE_API UClass* Z_Construct_UClass_ASword_NoRegister();
	CHARACTERMODULE_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_CharacterModule();
// End Cross Module References
	void ASword::StaticRegisterNativesASword()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASword);
	UClass* Z_Construct_UClass_ASword_NoRegister()
	{
		return ASword::StaticClass();
	}
	struct Z_Construct_UClass_ASword_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASword_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASword_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASword_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/Attacks/Sword.h" },
		{ "ModuleRelativePath", "Public/Components/Attacks/Sword.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASword_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASword>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASword_Statics::ClassParams = {
		&ASword::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASword_Statics::Class_MetaDataParams), Z_Construct_UClass_ASword_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASword()
	{
		if (!Z_Registration_Info_UClass_ASword.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASword.OuterSingleton, Z_Construct_UClass_ASword_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASword.OuterSingleton;
	}
	template<> CHARACTERMODULE_API UClass* StaticClass<ASword>()
	{
		return ASword::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASword);
	ASword::~ASword() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest2_Source_CharacterModule_Public_Components_Attacks_Sword_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest2_Source_CharacterModule_Public_Components_Attacks_Sword_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASword, ASword::StaticClass, TEXT("ASword"), &Z_Registration_Info_UClass_ASword, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASword), 3360266283U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest2_Source_CharacterModule_Public_Components_Attacks_Sword_h_104619600(TEXT("/Script/CharacterModule"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest2_Source_CharacterModule_Public_Components_Attacks_Sword_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest2_Source_CharacterModule_Public_Components_Attacks_Sword_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
