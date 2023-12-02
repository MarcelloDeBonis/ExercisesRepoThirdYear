// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSnake/Public/GridElements/GridElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridElement() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UNREALSNAKE_API UClass* Z_Construct_UClass_AGridElement();
	UNREALSNAKE_API UClass* Z_Construct_UClass_AGridElement_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealSnake();
// End Cross Module References
	void AGridElement::StaticRegisterNativesAGridElement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridElement);
	UClass* Z_Construct_UClass_AGridElement_NoRegister()
	{
		return AGridElement::StaticClass();
	}
	struct Z_Construct_UClass_AGridElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealSnake,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridElement_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridElement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GridElements/GridElement.h" },
		{ "ModuleRelativePath", "Public/GridElements/GridElement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridElement_Statics::ClassParams = {
		&AGridElement::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridElement_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridElement_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGridElement()
	{
		if (!Z_Registration_Info_UClass_AGridElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridElement.OuterSingleton, Z_Construct_UClass_AGridElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGridElement.OuterSingleton;
	}
	template<> UNREALSNAKE_API UClass* StaticClass<AGridElement>()
	{
		return AGridElement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridElement);
	AGridElement::~AGridElement() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_GridElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_GridElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridElement, AGridElement::StaticClass, TEXT("AGridElement"), &Z_Registration_Info_UClass_AGridElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridElement), 505641293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_GridElement_h_2446755984(TEXT("/Script/UnrealSnake"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_GridElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_UnrealSnake_Source_UnrealSnake_Public_GridElements_GridElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
