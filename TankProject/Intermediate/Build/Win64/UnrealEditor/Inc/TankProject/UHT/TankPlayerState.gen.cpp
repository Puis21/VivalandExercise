// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TankProject/Player/TankPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	TANKPROJECT_API UClass* Z_Construct_UClass_ATankPlayerState();
	TANKPROJECT_API UClass* Z_Construct_UClass_ATankPlayerState_NoRegister();
	TANKPROJECT_API UEnum* Z_Construct_UEnum_TankProject_ETeam();
	UPackage* Z_Construct_UPackage__Script_TankProject();
// End Cross Module References
	DEFINE_FUNCTION(ATankPlayerState::execOnRep_Team)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Team();
		P_NATIVE_END;
	}
	void ATankPlayerState::StaticRegisterNativesATankPlayerState()
	{
		UClass* Class = ATankPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Team", &ATankPlayerState::execOnRep_Team },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATankPlayerState_OnRep_Team_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPlayerState_OnRep_Team_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/TankPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPlayerState_OnRep_Team_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPlayerState, nullptr, "OnRep_Team", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPlayerState_OnRep_Team_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPlayerState_OnRep_Team_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPlayerState_OnRep_Team()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankPlayerState_OnRep_Team_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATankPlayerState);
	UClass* Z_Construct_UClass_ATankPlayerState_NoRegister()
	{
		return ATankPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ATankPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_TankProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankPlayerState_OnRep_Team, "OnRep_Team" }, // 2693190917
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/TankPlayerState.h" },
		{ "ModuleRelativePath", "Player/TankPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATankPlayerState_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerState_Statics::NewProp_Team_MetaData[] = {
		{ "ModuleRelativePath", "Player/TankPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATankPlayerState_Statics::NewProp_Team = { "Team", "OnRep_Team", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATankPlayerState, Team), Z_Construct_UEnum_TankProject_ETeam, METADATA_PARAMS(Z_Construct_UClass_ATankPlayerState_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerState_Statics::NewProp_Team_MetaData)) }; // 331308750
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerState_Statics::NewProp_Team_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerState_Statics::NewProp_Team,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankPlayerState_Statics::ClassParams = {
		&ATankPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATankPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankPlayerState()
	{
		if (!Z_Registration_Info_UClass_ATankPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATankPlayerState.OuterSingleton, Z_Construct_UClass_ATankPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATankPlayerState.OuterSingleton;
	}
	template<> TANKPROJECT_API UClass* StaticClass<ATankPlayerState>()
	{
		return ATankPlayerState::StaticClass();
	}

	void ATankPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Team(TEXT("Team"));

		const bool bIsValid = true
			&& Name_Team == ClassReps[(int32)ENetFields_Private::Team].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATankPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPlayerState);
	ATankPlayerState::~ATankPlayerState() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATankPlayerState, ATankPlayerState::StaticClass, TEXT("ATankPlayerState"), &Z_Registration_Info_UClass_ATankPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATankPlayerState), 142336576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_1613240803(TEXT("/Script/TankProject"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
