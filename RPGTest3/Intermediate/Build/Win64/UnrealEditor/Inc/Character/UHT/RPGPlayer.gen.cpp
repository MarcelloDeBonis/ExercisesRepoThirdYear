// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/Character/RPGPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGPlayer() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_ARPGCharacter();
	CHARACTER_API UClass* Z_Construct_UClass_ARPGPlayer();
	CHARACTER_API UClass* Z_Construct_UClass_ARPGPlayer_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_UExpComponent_NoRegister();
	CHARACTER_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	void ARPGPlayer::StaticRegisterNativesARPGPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPGPlayer);
	UClass* Z_Construct_UClass_ARPGPlayer_NoRegister()
	{
		return ARPGPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ARPGPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExpComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARPGCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/RPGPlayer.h" },
		{ "ModuleRelativePath", "Public/Character/RPGPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayer_Statics::NewProp_ExpComponent_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/RPGPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPlayer_Statics::NewProp_ExpComponent = { "ExpComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGPlayer, ExpComponent), Z_Construct_UClass_UExpComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayer_Statics::NewProp_ExpComponent_MetaData), Z_Construct_UClass_ARPGPlayer_Statics::NewProp_ExpComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayer_Statics::NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/RPGPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPlayer_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGPlayer, InventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayer_Statics::NewProp_InventoryComponent_MetaData), Z_Construct_UClass_ARPGPlayer_Statics::NewProp_InventoryComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayer_Statics::NewProp_ExpComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayer_Statics::NewProp_InventoryComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGPlayer_Statics::ClassParams = {
		&ARPGPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARPGPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPGPlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARPGPlayer()
	{
		if (!Z_Registration_Info_UClass_ARPGPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGPlayer.OuterSingleton, Z_Construct_UClass_ARPGPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARPGPlayer.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<ARPGPlayer>()
	{
		return ARPGPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGPlayer);
	ARPGPlayer::~ARPGPlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Character_RPGPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Character_RPGPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARPGPlayer, ARPGPlayer::StaticClass, TEXT("ARPGPlayer"), &Z_Registration_Info_UClass_ARPGPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGPlayer), 2622020288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Character_RPGPlayer_h_3243056951(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Character_RPGPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_Character_Public_Character_RPGPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
