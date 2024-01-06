// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGTest3/Public/RPGTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGTestGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	RPGTEST3_API UClass* Z_Construct_UClass_ARPGTestGameMode();
	RPGTEST3_API UClass* Z_Construct_UClass_ARPGTestGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGTest3();
// End Cross Module References
	void ARPGTestGameMode::StaticRegisterNativesARPGTestGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPGTestGameMode);
	UClass* Z_Construct_UClass_ARPGTestGameMode_NoRegister()
	{
		return ARPGTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARPGTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGTest3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGTestGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGTestGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RPGTestGameMode.h" },
		{ "ModuleRelativePath", "Public/RPGTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGTestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGTestGameMode_Statics::ClassParams = {
		&ARPGTestGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGTestGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPGTestGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARPGTestGameMode()
	{
		if (!Z_Registration_Info_UClass_ARPGTestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGTestGameMode.OuterSingleton, Z_Construct_UClass_ARPGTestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARPGTestGameMode.OuterSingleton;
	}
	template<> RPGTEST3_API UClass* StaticClass<ARPGTestGameMode>()
	{
		return ARPGTestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGTestGameMode);
	ARPGTestGameMode::~ARPGTestGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RPGTest3_Public_RPGTestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RPGTest3_Public_RPGTestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARPGTestGameMode, ARPGTestGameMode::StaticClass, TEXT("ARPGTestGameMode"), &Z_Registration_Info_UClass_ARPGTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGTestGameMode), 2094125522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RPGTest3_Public_RPGTestGameMode_h_1185749854(TEXT("/Script/RPGTest3"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RPGTest3_Public_RPGTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RPGTest3_Public_RPGTestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
