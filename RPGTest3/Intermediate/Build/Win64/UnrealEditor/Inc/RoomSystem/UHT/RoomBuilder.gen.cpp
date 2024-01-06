// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomSystem/Public/RoomClasses/RoomBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomBuilder() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_URoomBuilder();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_URoomBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RoomSystem();
// End Cross Module References
	void URoomBuilder::StaticRegisterNativesURoomBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URoomBuilder);
	UClass* Z_Construct_UClass_URoomBuilder_NoRegister()
	{
		return URoomBuilder::StaticClass();
	}
	struct Z_Construct_UClass_URoomBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoomBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RoomSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomBuilder_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomBuilder_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RoomClasses/RoomBuilder.h" },
		{ "ModuleRelativePath", "Public/RoomClasses/RoomBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoomBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomBuilder_Statics::ClassParams = {
		&URoomBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomBuilder_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URoomBuilder()
	{
		if (!Z_Registration_Info_UClass_URoomBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomBuilder.OuterSingleton, Z_Construct_UClass_URoomBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URoomBuilder.OuterSingleton;
	}
	template<> ROOMSYSTEM_API UClass* StaticClass<URoomBuilder>()
	{
		return URoomBuilder::StaticClass();
	}
	URoomBuilder::URoomBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoomBuilder);
	URoomBuilder::~URoomBuilder() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_RoomBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_RoomBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URoomBuilder, URoomBuilder::StaticClass, TEXT("URoomBuilder"), &Z_Registration_Info_UClass_URoomBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomBuilder), 2194865331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_RoomBuilder_h_2768438293(TEXT("/Script/RoomSystem"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_RoomBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_RoomBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
