// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSnake/Public/SnakePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakePlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UNREALSNAKE_API UClass* Z_Construct_UClass_ASnakePlayerController();
	UNREALSNAKE_API UClass* Z_Construct_UClass_ASnakePlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealSnake();
// End Cross Module References
	void ASnakePlayerController::StaticRegisterNativesASnakePlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakePlayerController);
	UClass* Z_Construct_UClass_ASnakePlayerController_NoRegister()
	{
		return ASnakePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASnakePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealSnake,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SnakePlayerController.h" },
		{ "ModuleRelativePath", "Public/SnakePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakePlayerController_Statics::ClassParams = {
		&ASnakePlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnakePlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASnakePlayerController()
	{
		if (!Z_Registration_Info_UClass_ASnakePlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakePlayerController.OuterSingleton, Z_Construct_UClass_ASnakePlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASnakePlayerController.OuterSingleton;
	}
	template<> UNREALSNAKE_API UClass* StaticClass<ASnakePlayerController>()
	{
		return ASnakePlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakePlayerController);
	ASnakePlayerController::~ASnakePlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_SnakePlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_SnakePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASnakePlayerController, ASnakePlayerController::StaticClass, TEXT("ASnakePlayerController"), &Z_Registration_Info_UClass_ASnakePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakePlayerController), 3769051788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_SnakePlayerController_h_2450006121(TEXT("/Script/UnrealSnake"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_SnakePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_SnakePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
