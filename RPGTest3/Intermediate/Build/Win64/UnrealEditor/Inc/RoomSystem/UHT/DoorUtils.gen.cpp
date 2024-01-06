// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomSystem/Public/InteractableObjects/Door/DoorUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorUtils() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_UDoorUtils();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_UDoorUtils_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RoomSystem();
// End Cross Module References
	void UDoorUtils::StaticRegisterNativesUDoorUtils()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDoorUtils);
	UClass* Z_Construct_UClass_UDoorUtils_NoRegister()
	{
		return UDoorUtils::StaticClass();
	}
	struct Z_Construct_UClass_UDoorUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RoomSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorUtils_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorUtils_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InteractableObjects/Door/DoorUtils.h" },
		{ "ModuleRelativePath", "Public/InteractableObjects/Door/DoorUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoorUtils_Statics::ClassParams = {
		&UDoorUtils::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UDoorUtils_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDoorUtils()
	{
		if (!Z_Registration_Info_UClass_UDoorUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoorUtils.OuterSingleton, Z_Construct_UClass_UDoorUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDoorUtils.OuterSingleton;
	}
	template<> ROOMSYSTEM_API UClass* StaticClass<UDoorUtils>()
	{
		return UDoorUtils::StaticClass();
	}
	UDoorUtils::UDoorUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorUtils);
	UDoorUtils::~UDoorUtils() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Door_DoorUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Door_DoorUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDoorUtils, UDoorUtils::StaticClass, TEXT("UDoorUtils"), &Z_Registration_Info_UClass_UDoorUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoorUtils), 1877062243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Door_DoorUtils_h_341957576(TEXT("/Script/RoomSystem"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Door_DoorUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Door_DoorUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
