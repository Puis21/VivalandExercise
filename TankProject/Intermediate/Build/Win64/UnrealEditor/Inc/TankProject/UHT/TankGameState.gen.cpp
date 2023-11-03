// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TankProject/TankGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankGameState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	TANKPROJECT_API UClass* Z_Construct_UClass_ATankGameState();
	TANKPROJECT_API UClass* Z_Construct_UClass_ATankGameState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TankProject();
// End Cross Module References
	DEFINE_FUNCTION(ATankGameState::execOnRep_BlueTeamScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BlueTeamScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankGameState::execOnRep_RedTeamScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RedTeamScore();
		P_NATIVE_END;
	}
	void ATankGameState::StaticRegisterNativesATankGameState()
	{
		UClass* Class = ATankGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_BlueTeamScore", &ATankGameState::execOnRep_BlueTeamScore },
			{ "OnRep_RedTeamScore", &ATankGameState::execOnRep_RedTeamScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATankGameState_OnRep_BlueTeamScore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankGameState_OnRep_BlueTeamScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankGameState_OnRep_BlueTeamScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankGameState, nullptr, "OnRep_BlueTeamScore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankGameState_OnRep_BlueTeamScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankGameState_OnRep_BlueTeamScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankGameState_OnRep_BlueTeamScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankGameState_OnRep_BlueTeamScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankGameState_OnRep_RedTeamScore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankGameState_OnRep_RedTeamScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankGameState_OnRep_RedTeamScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankGameState, nullptr, "OnRep_RedTeamScore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankGameState_OnRep_RedTeamScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankGameState_OnRep_RedTeamScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankGameState_OnRep_RedTeamScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankGameState_OnRep_RedTeamScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATankGameState);
	UClass* Z_Construct_UClass_ATankGameState_NoRegister()
	{
		return ATankGameState::StaticClass();
	}
	struct Z_Construct_UClass_ATankGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedTeamScore_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RedTeamScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueTeamScore_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlueTeamScore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_TankProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankGameState_OnRep_BlueTeamScore, "OnRep_BlueTeamScore" }, // 2837473814
		{ &Z_Construct_UFunction_ATankGameState_OnRep_RedTeamScore, "OnRep_RedTeamScore" }, // 2126863670
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TankGameState.h" },
		{ "ModuleRelativePath", "TankGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankGameState_Statics::NewProp_RedTeamScore_MetaData[] = {
		{ "ModuleRelativePath", "TankGameState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankGameState_Statics::NewProp_RedTeamScore = { "RedTeamScore", "OnRep_RedTeamScore", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATankGameState, RedTeamScore), METADATA_PARAMS(Z_Construct_UClass_ATankGameState_Statics::NewProp_RedTeamScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankGameState_Statics::NewProp_RedTeamScore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankGameState_Statics::NewProp_BlueTeamScore_MetaData[] = {
		{ "ModuleRelativePath", "TankGameState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankGameState_Statics::NewProp_BlueTeamScore = { "BlueTeamScore", "OnRep_BlueTeamScore", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATankGameState, BlueTeamScore), METADATA_PARAMS(Z_Construct_UClass_ATankGameState_Statics::NewProp_BlueTeamScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankGameState_Statics::NewProp_BlueTeamScore_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankGameState_Statics::NewProp_RedTeamScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankGameState_Statics::NewProp_BlueTeamScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankGameState_Statics::ClassParams = {
		&ATankGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATankGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATankGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankGameState()
	{
		if (!Z_Registration_Info_UClass_ATankGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATankGameState.OuterSingleton, Z_Construct_UClass_ATankGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATankGameState.OuterSingleton;
	}
	template<> TANKPROJECT_API UClass* StaticClass<ATankGameState>()
	{
		return ATankGameState::StaticClass();
	}

	void ATankGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RedTeamScore(TEXT("RedTeamScore"));
		static const FName Name_BlueTeamScore(TEXT("BlueTeamScore"));

		const bool bIsValid = true
			&& Name_RedTeamScore == ClassReps[(int32)ENetFields_Private::RedTeamScore].Property->GetFName()
			&& Name_BlueTeamScore == ClassReps[(int32)ENetFields_Private::BlueTeamScore].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATankGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankGameState);
	ATankGameState::~ATankGameState() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATankGameState, ATankGameState::StaticClass, TEXT("ATankGameState"), &Z_Registration_Info_UClass_ATankGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATankGameState), 2872987102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_651982955(TEXT("/Script/TankProject"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
