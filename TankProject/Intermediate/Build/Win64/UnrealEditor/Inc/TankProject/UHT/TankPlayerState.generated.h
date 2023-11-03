// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/TankPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKPROJECT_TankPlayerState_generated_h
#error "TankPlayerState.generated.h already included, missing '#pragma once' in TankPlayerState.h"
#endif
#define TANKPROJECT_TankPlayerState_generated_h

#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_SPARSE_DATA
#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Team);


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Team);


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_ACCESSORS
#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankPlayerState(); \
	friend struct Z_Construct_UClass_ATankPlayerState_Statics; \
public: \
	DECLARE_CLASS(ATankPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankProject"), NO_API) \
	DECLARE_SERIALIZER(ATankPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Team=NETFIELD_REP_START, \
		NETFIELD_REP_END=Team	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_INCLASS \
private: \
	static void StaticRegisterNativesATankPlayerState(); \
	friend struct Z_Construct_UClass_ATankPlayerState_Statics; \
public: \
	DECLARE_CLASS(ATankPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankProject"), NO_API) \
	DECLARE_SERIALIZER(ATankPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Team=NETFIELD_REP_START, \
		NETFIELD_REP_END=Team	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPlayerState(ATankPlayerState&&); \
	NO_API ATankPlayerState(const ATankPlayerState&); \
public: \
	NO_API virtual ~ATankPlayerState();


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPlayerState(ATankPlayerState&&); \
	NO_API ATankPlayerState(const ATankPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankPlayerState) \
	NO_API virtual ~ATankPlayerState();


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_15_PROLOG
#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_SPARSE_DATA \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_RPC_WRAPPERS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_ACCESSORS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_INCLASS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_SPARSE_DATA \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_ACCESSORS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKPROJECT_API UClass* StaticClass<class ATankPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Player_TankPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
