// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TankProject/Teams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeams() {}
// Cross Module References
	TANKPROJECT_API UEnum* Z_Construct_UEnum_TankProject_ETeam();
	UPackage* Z_Construct_UPackage__Script_TankProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETeam;
	static UEnum* ETeam_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETeam.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETeam.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TankProject_ETeam, Z_Construct_UPackage__Script_TankProject(), TEXT("ETeam"));
		}
		return Z_Registration_Info_UEnum_ETeam.OuterSingleton;
	}
	template<> TANKPROJECT_API UEnum* StaticEnum<ETeam>()
	{
		return ETeam_StaticEnum();
	}
	struct Z_Construct_UEnum_TankProject_ETeam_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TankProject_ETeam_Statics::Enumerators[] = {
		{ "ETeam::ET_RedTeam", (int64)ETeam::ET_RedTeam },
		{ "ETeam::ET_BlueTeam", (int64)ETeam::ET_BlueTeam },
		{ "ETeam::ET_NoTeam", (int64)ETeam::ET_NoTeam },
		{ "ETeam::ET_MAX", (int64)ETeam::ET_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TankProject_ETeam_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ET_BlueTeam.DisplayName", "BlueTeam" },
		{ "ET_BlueTeam.Name", "ETeam::ET_BlueTeam" },
		{ "ET_MAX.DisplayName", "DefaultMAX" },
		{ "ET_MAX.Name", "ETeam::ET_MAX" },
		{ "ET_NoTeam.DisplayName", "NoTeam" },
		{ "ET_NoTeam.Name", "ETeam::ET_NoTeam" },
		{ "ET_RedTeam.DisplayName", "RedTeam" },
		{ "ET_RedTeam.Name", "ETeam::ET_RedTeam" },
		{ "ModuleRelativePath", "Teams.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TankProject_ETeam_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TankProject,
		nullptr,
		"ETeam",
		"ETeam",
		Z_Construct_UEnum_TankProject_ETeam_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TankProject_ETeam_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TankProject_ETeam_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TankProject_ETeam_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TankProject_ETeam()
	{
		if (!Z_Registration_Info_UEnum_ETeam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETeam.InnerSingleton, Z_Construct_UEnum_TankProject_ETeam_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETeam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Teams_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Teams_h_Statics::EnumInfo[] = {
		{ ETeam_StaticEnum, TEXT("ETeam"), &Z_Registration_Info_UEnum_ETeam, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 331308750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Teams_h_2633293668(TEXT("/Script/TankProject"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Teams_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Teams_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
