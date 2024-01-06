// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomSystem/Public/RoomClasses/RoomController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_AChestController_NoRegister();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_ADoorController_NoRegister();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_AFountainController_NoRegister();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_ARoomController();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_ARoomController_NoRegister();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_URoom_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RoomSystem();
// End Cross Module References
	void ARoomController::StaticRegisterNativesARoomController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoomController);
	UClass* Z_Construct_UClass_ARoomController_NoRegister()
	{
		return ARoomController::StaticClass();
	}
	struct Z_Construct_UClass_ARoomController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FountainController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FountainController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChestController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChestController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastRoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastRoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoomController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RoomSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RoomClasses/RoomController.h" },
		{ "ModuleRelativePath", "Public/RoomClasses/RoomController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomController_Statics::NewProp_FountainController_MetaData[] = {
		{ "Category", "RoomSystem" },
		{ "ModuleRelativePath", "Public/RoomClasses/RoomController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoomController_Statics::NewProp_FountainController = { "FountainController", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomController, FountainController), Z_Construct_UClass_AFountainController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomController_Statics::NewProp_FountainController_MetaData), Z_Construct_UClass_ARoomController_Statics::NewProp_FountainController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomController_Statics::NewProp_ChestController_MetaData[] = {
		{ "Category", "RoomSystem" },
		{ "ModuleRelativePath", "Public/RoomClasses/RoomController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoomController_Statics::NewProp_ChestController = { "ChestController", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomController, ChestController), Z_Construct_UClass_AChestController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomController_Statics::NewProp_ChestController_MetaData), Z_Construct_UClass_ARoomController_Statics::NewProp_ChestController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomController_Statics::NewProp_DoorController_MetaData[] = {
		{ "Category", "RoomSystem" },
		{ "ModuleRelativePath", "Public/RoomClasses/RoomController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoomController_Statics::NewProp_DoorController = { "DoorController", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomController, DoorController), Z_Construct_UClass_ADoorController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomController_Statics::NewProp_DoorController_MetaData), Z_Construct_UClass_ARoomController_Statics::NewProp_DoorController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomController_Statics::NewProp_LastRoom_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoomClasses/RoomController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoomController_Statics::NewProp_LastRoom = { "LastRoom", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomController, LastRoom), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomController_Statics::NewProp_LastRoom_MetaData), Z_Construct_UClass_ARoomController_Statics::NewProp_LastRoom_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoomController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomController_Statics::NewProp_FountainController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomController_Statics::NewProp_ChestController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomController_Statics::NewProp_DoorController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomController_Statics::NewProp_LastRoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoomController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoomController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoomController_Statics::ClassParams = {
		&ARoomController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARoomController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARoomController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomController_Statics::Class_MetaDataParams), Z_Construct_UClass_ARoomController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARoomController()
	{
		if (!Z_Registration_Info_UClass_ARoomController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoomController.OuterSingleton, Z_Construct_UClass_ARoomController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARoomController.OuterSingleton;
	}
	template<> ROOMSYSTEM_API UClass* StaticClass<ARoomController>()
	{
		return ARoomController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoomController);
	ARoomController::~ARoomController() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_RoomController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_RoomController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARoomController, ARoomController::StaticClass, TEXT("ARoomController"), &Z_Registration_Info_UClass_ARoomController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoomController), 1088546562U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_RoomController_h_2175243353(TEXT("/Script/RoomSystem"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_RoomController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_RoomController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
