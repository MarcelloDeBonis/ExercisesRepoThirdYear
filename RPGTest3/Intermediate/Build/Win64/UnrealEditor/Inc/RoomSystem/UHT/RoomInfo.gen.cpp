// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomSystem/Public/RoomClasses/RoomInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomInfo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ROOMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRoomInfo();
	UPackage* Z_Construct_UPackage__Script_RoomSystem();
// End Cross Module References

static_assert(std::is_polymorphic<FRoomInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FRoomInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RoomInfo;
class UScriptStruct* FRoomInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RoomInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RoomInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoomInfo, (UObject*)Z_Construct_UPackage__Script_RoomSystem(), TEXT("RoomInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RoomInfo.OuterSingleton;
}
template<> ROOMSYSTEM_API UScriptStruct* StaticStruct<FRoomInfo>()
{
	return FRoomInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRoomInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MySpriteTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MySpriteTexture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Enemies_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Enemies_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemies_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Enemies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chest_MetaData[];
#endif
		static void NewProp_Chest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Chest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fountain_MetaData[];
#endif
		static void NewProp_Fountain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Fountain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RoomClasses/RoomInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRoomInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoomInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_MySpriteTexture_MetaData[] = {
		{ "Category", "RoomSystem" },
		{ "ModuleRelativePath", "Public/RoomClasses/RoomInfo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_MySpriteTexture = { "MySpriteTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoomInfo, MySpriteTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_MySpriteTexture_MetaData), Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_MySpriteTexture_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Enemies_ValueProp = { "Enemies", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Enemies_Key_KeyProp = { "Enemies_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Enemies_MetaData[] = {
		{ "Category", "RoomSystem" },
		{ "ModuleRelativePath", "Public/RoomClasses/RoomInfo.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Enemies = { "Enemies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoomInfo, Enemies), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Enemies_MetaData), Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Enemies_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Chest_MetaData[] = {
		{ "Category", "RoomSystem" },
		{ "ModuleRelativePath", "Public/RoomClasses/RoomInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Chest_SetBit(void* Obj)
	{
		((FRoomInfo*)Obj)->Chest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Chest = { "Chest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoomInfo), &Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Chest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Chest_MetaData), Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Chest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Fountain_MetaData[] = {
		{ "Category", "RoomSystem" },
		{ "ModuleRelativePath", "Public/RoomClasses/RoomInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Fountain_SetBit(void* Obj)
	{
		((FRoomInfo*)Obj)->Fountain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Fountain = { "Fountain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoomInfo), &Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Fountain_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Fountain_MetaData), Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Fountain_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoomInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_MySpriteTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Enemies_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Enemies_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Enemies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Chest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomInfo_Statics::NewProp_Fountain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoomInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RoomSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"RoomInfo",
		Z_Construct_UScriptStruct_FRoomInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomInfo_Statics::PropPointers),
		sizeof(FRoomInfo),
		alignof(FRoomInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRoomInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRoomInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RoomInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RoomInfo.InnerSingleton, Z_Construct_UScriptStruct_FRoomInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RoomInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_RoomInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_RoomInfo_h_Statics::ScriptStructInfo[] = {
		{ FRoomInfo::StaticStruct, Z_Construct_UScriptStruct_FRoomInfo_Statics::NewStructOps, TEXT("RoomInfo"), &Z_Registration_Info_UScriptStruct_RoomInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoomInfo), 857616875U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_RoomInfo_h_2211491309(TEXT("/Script/RoomSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_RoomInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_RoomClasses_RoomInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
