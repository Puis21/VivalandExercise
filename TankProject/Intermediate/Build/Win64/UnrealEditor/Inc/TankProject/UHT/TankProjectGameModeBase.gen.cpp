// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TankProject/TankProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankProjectGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TANKPROJECT_API UClass* Z_Construct_UClass_ATankProjectGameModeBase();
	TANKPROJECT_API UClass* Z_Construct_UClass_ATankProjectGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TankProject();
// End Cross Module References
	void ATankProjectGameModeBase::StaticRegisterNativesATankProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATankProjectGameModeBase);
	UClass* Z_Construct_UClass_ATankProjectGameModeBase_NoRegister()
	{
		return ATankProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATankProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TankProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TankProjectGameModeBase.h" },
		{ "ModuleRelativePath", "TankProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankProjectGameModeBase_Statics::ClassParams = {
		&ATankProjectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATankProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATankProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATankProjectGameModeBase.OuterSingleton, Z_Construct_UClass_ATankProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATankProjectGameModeBase.OuterSingleton;
	}
	template<> TANKPROJECT_API UClass* StaticClass<ATankProjectGameModeBase>()
	{
		return ATankProjectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankProjectGameModeBase);
	ATankProjectGameModeBase::~ATankProjectGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATankProjectGameModeBase, ATankProjectGameModeBase::StaticClass, TEXT("ATankProjectGameModeBase"), &Z_Registration_Info_UClass_ATankProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATankProjectGameModeBase), 578421745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankProjectGameModeBase_h_4241050377(TEXT("/Script/TankProject"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
