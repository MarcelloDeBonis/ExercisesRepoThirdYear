// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomSystem/Public/InteractableObjects/Door/DoorController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_ADoorController();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_ADoorController_NoRegister();
	ROOMSYSTEM_API UEnum* Z_Construct_UEnum_RoomSystem_EDirection();
	UPackage* Z_Construct_UPackage__Script_RoomSystem();
// End Cross Module References
	void ADoorController::StaticRegisterNativesADoorController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoorController);
	UClass* Z_Construct_UClass_ADoorController_NoRegister()
	{
		return ADoorController::StaticClass();
	}
	struct Z_Construct_UClass_ADoorController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpDoor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpDoor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightDoor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightDoor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownDoor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DownDoor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftDoor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftDoor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CorrespondingDoors_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CorrespondingDoors_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CorrespondingDoors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorrespondingDoors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CorrespondingDoors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RoomSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableObjects/Door/DoorController.h" },
		{ "ModuleRelativePath", "Public/InteractableObjects/Door/DoorController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorController_Statics::NewProp_UpDoor_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/InteractableObjects/Door/DoorController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorController_Statics::NewProp_UpDoor = { "UpDoor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorController, UpDoor), Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorController_Statics::NewProp_UpDoor_MetaData), Z_Construct_UClass_ADoorController_Statics::NewProp_UpDoor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorController_Statics::NewProp_RightDoor_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/InteractableObjects/Door/DoorController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorController_Statics::NewProp_RightDoor = { "RightDoor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorController, RightDoor), Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorController_Statics::NewProp_RightDoor_MetaData), Z_Construct_UClass_ADoorController_Statics::NewProp_RightDoor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorController_Statics::NewProp_DownDoor_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/InteractableObjects/Door/DoorController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorController_Statics::NewProp_DownDoor = { "DownDoor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorController, DownDoor), Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorController_Statics::NewProp_DownDoor_MetaData), Z_Construct_UClass_ADoorController_Statics::NewProp_DownDoor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorController_Statics::NewProp_LeftDoor_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/InteractableObjects/Door/DoorController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorController_Statics::NewProp_LeftDoor = { "LeftDoor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorController, LeftDoor), Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorController_Statics::NewProp_LeftDoor_MetaData), Z_Construct_UClass_ADoorController_Statics::NewProp_LeftDoor_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorController_Statics::NewProp_CorrespondingDoors_ValueProp = { "CorrespondingDoors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADoorController_Statics::NewProp_CorrespondingDoors_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADoorController_Statics::NewProp_CorrespondingDoors_Key_KeyProp = { "CorrespondingDoors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RoomSystem_EDirection, METADATA_PARAMS(0, nullptr) }; // 3646083944
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorController_Statics::NewProp_CorrespondingDoors_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractableObjects/Door/DoorController.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADoorController_Statics::NewProp_CorrespondingDoors = { "CorrespondingDoors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorController, CorrespondingDoors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorController_Statics::NewProp_CorrespondingDoors_MetaData), Z_Construct_UClass_ADoorController_Statics::NewProp_CorrespondingDoors_MetaData) }; // 3646083944
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorController_Statics::NewProp_UpDoor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorController_Statics::NewProp_RightDoor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorController_Statics::NewProp_DownDoor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorController_Statics::NewProp_LeftDoor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorController_Statics::NewProp_CorrespondingDoors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorController_Statics::NewProp_CorrespondingDoors_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorController_Statics::NewProp_CorrespondingDoors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorController_Statics::NewProp_CorrespondingDoors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoorController_Statics::ClassParams = {
		&ADoorController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADoorController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoorController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoorController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADoorController()
	{
		if (!Z_Registration_Info_UClass_ADoorController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoorController.OuterSingleton, Z_Construct_UClass_ADoorController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoorController.OuterSingleton;
	}
	template<> ROOMSYSTEM_API UClass* StaticClass<ADoorController>()
	{
		return ADoorController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorController);
	ADoorController::~ADoorController() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Door_DoorController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Door_DoorController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoorController, ADoorController::StaticClass, TEXT("ADoorController"), &Z_Registration_Info_UClass_ADoorController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorController), 1306352529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Door_DoorController_h_876553018(TEXT("/Script/RoomSystem"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Door_DoorController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Door_DoorController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
