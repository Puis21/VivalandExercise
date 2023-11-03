// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TankGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKPROJECT_TankGameState_generated_h
#error "TankGameState.generated.h already included, missing '#pragma once' in TankGameState.h"
#endif
#define TANKPROJECT_TankGameState_generated_h

#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_SPARSE_DATA
#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_BlueTeamScore); \
	DECLARE_FUNCTION(execOnRep_RedTeamScore);


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_BlueTeamScore); \
	DECLARE_FUNCTION(execOnRep_RedTeamScore);


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_ACCESSORS
#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankGameState(); \
	friend struct Z_Construct_UClass_ATankGameState_Statics; \
public: \
	DECLARE_CLASS(ATankGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankProject"), NO_API) \
	DECLARE_SERIALIZER(ATankGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RedTeamScore=NETFIELD_REP_START, \
		BlueTeamScore, \
		NETFIELD_REP_END=BlueTeamScore	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATankGameState(); \
	friend struct Z_Construct_UClass_ATankGameState_Statics; \
public: \
	DECLARE_CLASS(ATankGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankProject"), NO_API) \
	DECLARE_SERIALIZER(ATankGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RedTeamScore=NETFIELD_REP_START, \
		BlueTeamScore, \
		NETFIELD_REP_END=BlueTeamScore	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankGameState(ATankGameState&&); \
	NO_API ATankGameState(const ATankGameState&); \
public: \
	NO_API virtual ~ATankGameState();


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankGameState(ATankGameState&&); \
	NO_API ATankGameState(const ATankGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankGameState) \
	NO_API virtual ~ATankGameState();


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_13_PROLOG
#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_SPARSE_DATA \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_RPC_WRAPPERS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_ACCESSORS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_INCLASS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_SPARSE_DATA \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_ACCESSORS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKPROJECT_API UClass* StaticClass<class ATankGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_TankGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
