// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomSystem/Public/InteractableObjects/Door/DoorInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorInfo() {}
// Cross Module References
	ROOMSYSTEM_API UClass* Z_Construct_UClass_URoom_NoRegister();
	ROOMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDoorInfo();
	UPackage* Z_Construct_UPackage__Script_RoomSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoorInfo;
class UScriptStruct* FDoorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoorInfo, (UObject*)Z_Construct_UPackage__Script_RoomSystem(), TEXT("DoorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DoorInfo.OuterSingleton;
}
template<> ROOMSYSTEM_API UScriptStruct* StaticStruct<FDoorInfo>()
{
	return FDoorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDoorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextRoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NextRoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InteractableObjects/Door/DoorInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDoorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoorInfo_Statics::NewProp_NextRoom_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractableObjects/Door/DoorInfo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDoorInfo_Statics::NewProp_NextRoom = { "NextRoom", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoorInfo, NextRoom), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorInfo_Statics::NewProp_NextRoom_MetaData), Z_Construct_UScriptStruct_FDoorInfo_Statics::NewProp_NextRoom_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoorInfo_Statics::NewProp_NextRoom,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RoomSystem,
		nullptr,
		&NewStructOps,
		"DoorInfo",
		Z_Construct_UScriptStruct_FDoorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorInfo_Statics::PropPointers),
		sizeof(FDoorInfo),
		alignof(FDoorInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDoorInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDoorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_DoorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoorInfo.InnerSingleton, Z_Construct_UScriptStruct_FDoorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DoorInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Door_DoorInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Door_DoorInfo_h_Statics::ScriptStructInfo[] = {
		{ FDoorInfo::StaticStruct, Z_Construct_UScriptStruct_FDoorInfo_Statics::NewStructOps, TEXT("DoorInfo"), &Z_Registration_Info_UScriptStruct_DoorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoorInfo), 1892490857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Door_DoorInfo_h_3831979617(TEXT("/Script/RoomSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Door_DoorInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_InteractableObjects_Door_DoorInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
