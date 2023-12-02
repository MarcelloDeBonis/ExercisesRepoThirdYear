// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSnake/Public/GridElements/HeadSnake.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadSnake() {}
// Cross Module References
	UNREALSNAKE_API UClass* Z_Construct_UClass_AGridElement();
	UNREALSNAKE_API UClass* Z_Construct_UClass_AHeadSnake();
	UNREALSNAKE_API UClass* Z_Construct_UClass_AHeadSnake_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealSnake();
// End Cross Module References
	void AHeadSnake::StaticRegisterNativesAHeadSnake()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeadSnake);
	UClass* Z_Construct_UClass_AHeadSnake_NoRegister()
	{
		return AHeadSnake::StaticClass();
	}
	struct Z_Construct_UClass_AHeadSnake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHeadSnake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGridElement,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealSnake,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeadSnake_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeadSnake_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GridElements/HeadSnake.h" },
		{ "ModuleRelativePath", "Public/GridElements/HeadSnake.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHeadSnake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeadSnake>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeadSnake_Statics::ClassParams = {
		&AHeadSnake::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeadSnake_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeadSnake_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AHeadSnake()
	{
		if (!Z_Registration_Info_UClass_AHeadSnake.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeadSnake.OuterSingleton, Z_Construct_UClass_AHeadSnake_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHeadSnake.OuterSingleton;
	}
	template<> UNREALSNAKE_API UClass* StaticClass<AHeadSnake>()
	{
		return AHeadSnake::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeadSnake);
	AHeadSnake::~AHeadSnake() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_HeadSnake_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_HeadSnake_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHeadSnake, AHeadSnake::StaticClass, TEXT("AHeadSnake"), &Z_Registration_Info_UClass_AHeadSnake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeadSnake), 4007661515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_HeadSnake_h_2975989516(TEXT("/Script/UnrealSnake"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_HeadSnake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_HeadSnake_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
