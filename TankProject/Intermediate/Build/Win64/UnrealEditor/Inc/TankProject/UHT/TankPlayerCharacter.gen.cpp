// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TankProject/Player/TankPlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPlayerCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	TANKPROJECT_API UClass* Z_Construct_UClass_ATankGameMode_NoRegister();
	TANKPROJECT_API UClass* Z_Construct_UClass_ATankPlayerCharacter();
	TANKPROJECT_API UClass* Z_Construct_UClass_ATankPlayerCharacter_NoRegister();
	TANKPROJECT_API UClass* Z_Construct_UClass_ATankPlayerController_NoRegister();
	TANKPROJECT_API UClass* Z_Construct_UClass_ATankPlayerState_NoRegister();
	TANKPROJECT_API UClass* Z_Construct_UClass_UBuffComponent_NoRegister();
	TANKPROJECT_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TankProject();
// End Cross Module References
	DEFINE_FUNCTION(ATankPlayerCharacter::execMulticastEliminated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastEliminated_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ATankPlayerCharacter_MulticastEliminated = FName(TEXT("MulticastEliminated"));
	void ATankPlayerCharacter::MulticastEliminated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATankPlayerCharacter_MulticastEliminated),NULL);
	}
	void ATankPlayerCharacter::StaticRegisterNativesATankPlayerCharacter()
	{
		UClass* Class = ATankPlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastEliminated", &ATankPlayerCharacter::execMulticastEliminated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATankPlayerCharacter_MulticastEliminated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPlayerCharacter_MulticastEliminated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/TankPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPlayerCharacter_MulticastEliminated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPlayerCharacter, nullptr, "MulticastEliminated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPlayerCharacter_MulticastEliminated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPlayerCharacter_MulticastEliminated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPlayerCharacter_MulticastEliminated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankPlayerCharacter_MulticastEliminated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATankPlayerCharacter);
	UClass* Z_Construct_UClass_ATankPlayerCharacter_NoRegister()
	{
		return ATankPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATankPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TankPlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TankGameMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverheadWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverheadWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CombatComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuffComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BuffComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElimDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElimDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RedMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TankProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankPlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankPlayerCharacter_MulticastEliminated, "MulticastEliminated" }, // 1802158459
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/TankPlayerCharacter.h" },
		{ "ModuleRelativePath", "Player/TankPlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Player/TankPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATankPlayerCharacter, PlayerController), Z_Construct_UClass_ATankPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_TankPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Player/TankPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_TankPlayerState = { "TankPlayerState", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATankPlayerCharacter, TankPlayerState), Z_Construct_UClass_ATankPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_TankPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_TankPlayerState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_TankGameMode_MetaData[] = {
		{ "ModuleRelativePath", "Player/TankPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_TankGameMode = { "TankGameMode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATankPlayerCharacter, TankGameMode), Z_Construct_UClass_ATankGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_TankGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_TankGameMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "Category", "TankPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/TankPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATankPlayerCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_TopDownCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_TopDownCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "TankPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/TankPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATankPlayerCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_OverheadWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TankPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/TankPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_OverheadWidget = { "OverheadWidget", nullptr, (EPropertyFlags)0x004400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATankPlayerCharacter, OverheadWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_OverheadWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_OverheadWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_CombatComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/TankPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_CombatComponent = { "CombatComponent", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATankPlayerCharacter, CombatComponent), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_CombatComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_CombatComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_BuffComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/TankPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_BuffComponent = { "BuffComponent", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATankPlayerCharacter, BuffComponent), Z_Construct_UClass_UBuffComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_BuffComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_BuffComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_ElimDelay_MetaData[] = {
		{ "Category", "TankPlayerCharacter" },
		{ "ModuleRelativePath", "Player/TankPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_ElimDelay = { "ElimDelay", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATankPlayerCharacter, ElimDelay), METADATA_PARAMS(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_ElimDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_ElimDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_RedMaterial_MetaData[] = {
		{ "Category", "Elim" },
		{ "Comment", "/**\n\x09* Team colors\n\x09*/" },
		{ "ModuleRelativePath", "Player/TankPlayerCharacter.h" },
		{ "ToolTip", "Team colors" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_RedMaterial = { "RedMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATankPlayerCharacter, RedMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_RedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_RedMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_BlueMaterial_MetaData[] = {
		{ "Category", "Elim" },
		{ "ModuleRelativePath", "Player/TankPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_BlueMaterial = { "BlueMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATankPlayerCharacter, BlueMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_BlueMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_BlueMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_OriginalMaterial_MetaData[] = {
		{ "Category", "Elim" },
		{ "ModuleRelativePath", "Player/TankPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_OriginalMaterial = { "OriginalMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATankPlayerCharacter, OriginalMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_OriginalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_OriginalMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankPlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_TankPlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_TankGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_OverheadWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_CombatComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_BuffComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_ElimDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_RedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_BlueMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerCharacter_Statics::NewProp_OriginalMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankPlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankPlayerCharacter_Statics::ClassParams = {
		&ATankPlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATankPlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankPlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_ATankPlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATankPlayerCharacter.OuterSingleton, Z_Construct_UClass_ATankPlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATankPlayerCharacter.OuterSingleton;
	}
	template<> TANKPROJECT_API UClass* StaticClass<ATankPlayerCharacter>()
	{
		return ATankPlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPlayerCharacter);
	ATankPlayerCharacter::~ATankPlayerCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATankPlayerCharacter, ATankPlayerCharacter::StaticClass, TEXT("ATankPlayerCharacter"), &Z_Registration_Info_UClass_ATankPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATankPlayerCharacter), 3197897538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerCharacter_h_482891834(TEXT("/Script/TankProject"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
