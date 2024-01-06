// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomSystem/Public/Direction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirection() {}
// Cross Module References
	ROOMSYSTEM_API UEnum* Z_Construct_UEnum_RoomSystem_EDirection();
	UPackage* Z_Construct_UPackage__Script_RoomSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDirection;
	static UEnum* EDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoomSystem_EDirection, (UObject*)Z_Construct_UPackage__Script_RoomSystem(), TEXT("EDirection"));
		}
		return Z_Registration_Info_UEnum_EDirection.OuterSingleton;
	}
	template<> ROOMSYSTEM_API UEnum* StaticEnum<EDirection>()
	{
		return EDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_RoomSystem_EDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RoomSystem_EDirection_Statics::Enumerators[] = {
		{ "EDirection::None", (int64)EDirection::None },
		{ "EDirection::Up", (int64)EDirection::Up },
		{ "EDirection::Right", (int64)EDirection::Right },
		{ "EDirection::Left", (int64)EDirection::Left },
		{ "EDirection::Down", (int64)EDirection::Down },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RoomSystem_EDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Down.DisplayName", "Down" },
		{ "Down.Name", "EDirection::Down" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EDirection::Left" },
		{ "ModuleRelativePath", "Public/Direction.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EDirection::None" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EDirection::Right" },
		{ "Up.DisplayName", "Up" },
		{ "Up.Name", "EDirection::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RoomSystem_EDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RoomSystem,
		nullptr,
		"EDirection",
		"EDirection",
		Z_Construct_UEnum_RoomSystem_EDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RoomSystem_EDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RoomSystem_EDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RoomSystem_EDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_RoomSystem_EDirection()
	{
		if (!Z_Registration_Info_UEnum_EDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDirection.InnerSingleton, Z_Construct_UEnum_RoomSystem_EDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDirection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_Direction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_Direction_h_Statics::EnumInfo[] = {
		{ EDirection_StaticEnum, TEXT("EDirection"), &Z_Registration_Info_UEnum_EDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3646083944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_Direction_h_3068149543(TEXT("/Script/RoomSystem"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_Direction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marce_OneDrive_Desktop_Work_ExercisesRepoThirdYear_RPGTest3_Source_RoomSystem_Public_Direction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
