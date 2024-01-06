// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/Weapon/Arrow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrow() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_AArrow();
	CHARACTER_API UClass* Z_Construct_UClass_AArrow_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	void AArrow::StaticRegisterNativesAArrow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArrow);
	UClass* Z_Construct_UClass_AArrow_NoRegister()
	{
		return AArrow::StaticClass();
	}
	struct Z_Construct_UClass_AArrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArrow_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArrow_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon/Arrow.h" },
		{ "ModuleRelativePath", "Public/Weapon/Arrow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArrow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArrow_Statics::ClassParams = {
		&AArrow::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArrow_Statics::Class_MetaDataParams), Z_Construct_UClass_AArrow_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AArrow()
	{
		if (!Z_Registration_Info_UClass_AArrow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArrow.OuterSingleton, Z_Construct_UClass_AArrow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArrow.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<AArrow>()
	{
		return AArrow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArrow);
	AArrow::~AArrow() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Weapon_Arrow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Weapon_Arrow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArrow, AArrow::StaticClass, TEXT("AArrow"), &Z_Registration_Info_UClass_AArrow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArrow), 361096924U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Weapon_Arrow_h_364175367(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Weapon_Arrow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Weapon_Arrow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
