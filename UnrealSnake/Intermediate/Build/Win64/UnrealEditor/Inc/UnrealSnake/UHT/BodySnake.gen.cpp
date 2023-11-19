// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSnake/Public/GridElements/BodySnake.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodySnake() {}
// Cross Module References
	UNREALSNAKE_API UClass* Z_Construct_UClass_ABodySnake();
	UNREALSNAKE_API UClass* Z_Construct_UClass_ABodySnake_NoRegister();
	UNREALSNAKE_API UClass* Z_Construct_UClass_AGridElement();
	UPackage* Z_Construct_UPackage__Script_UnrealSnake();
// End Cross Module References
	void ABodySnake::StaticRegisterNativesABodySnake()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABodySnake);
	UClass* Z_Construct_UClass_ABodySnake_NoRegister()
	{
		return ABodySnake::StaticClass();
	}
	struct Z_Construct_UClass_ABodySnake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABodySnake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGridElement,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealSnake,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABodySnake_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABodySnake_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GridElements/BodySnake.h" },
		{ "ModuleRelativePath", "Public/GridElements/BodySnake.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABodySnake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABodySnake>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABodySnake_Statics::ClassParams = {
		&ABodySnake::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABodySnake_Statics::Class_MetaDataParams), Z_Construct_UClass_ABodySnake_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABodySnake()
	{
		if (!Z_Registration_Info_UClass_ABodySnake.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABodySnake.OuterSingleton, Z_Construct_UClass_ABodySnake_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABodySnake.OuterSingleton;
	}
	template<> UNREALSNAKE_API UClass* StaticClass<ABodySnake>()
	{
		return ABodySnake::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABodySnake);
	ABodySnake::~ABodySnake() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_BodySnake_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_BodySnake_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABodySnake, ABodySnake::StaticClass, TEXT("ABodySnake"), &Z_Registration_Info_UClass_ABodySnake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABodySnake), 2943675762U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_BodySnake_h_73296073(TEXT("/Script/UnrealSnake"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_BodySnake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_BodySnake_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
