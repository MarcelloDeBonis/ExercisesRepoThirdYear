// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomSystem/Public/RoomClasses/Room.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoom() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_URoom();
	ROOMSYSTEM_API UClass* Z_Construct_UClass_URoom_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RoomSystem();
// End Cross Module References
	void URoom::StaticRegisterNativesURoom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URoom);
	UClass* Z_Construct_UClass_URoom_NoRegister()
	{
		return URoom::StaticClass();
	}
	struct Z_Construct_UClass_URoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RoomSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoom_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RoomClasses/Room.h" },
		{ "ModuleRelativePath", "Public/RoomClasses/Room.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URoom_Statics::ClassParams = {
		&URoom::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::Class_MetaDataParams), Z_Construct_UClass_URoom_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URoom()
	{
		if (!Z_Registration_Info_UClass_URoom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoom.OuterSingleton, Z_Construct_UClass_URoom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URoom.OuterSingleton;
	}
	template<> ROOMSYSTEM_API UClass* StaticClass<URoom>()
	{
		return URoom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoom);
	URoom::~URoom() {}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_Room_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_Room_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URoom, URoom::StaticClass, TEXT("URoom"), &Z_Registration_Info_UClass_URoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoom), 3760961370U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_Room_h_2440057077(TEXT("/Script/RoomSystem"),
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_Room_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_Room_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
