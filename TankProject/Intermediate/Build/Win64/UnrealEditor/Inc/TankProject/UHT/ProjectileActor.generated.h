// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectileActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TANKPROJECT_ProjectileActor_generated_h
#error "ProjectileActor.generated.h already included, missing '#pragma once' in ProjectileActor.h"
#endif
#define TANKPROJECT_ProjectileActor_generated_h

#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_SPARSE_DATA
#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_ACCESSORS
#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileActor(); \
	friend struct Z_Construct_UClass_AProjectileActor_Statics; \
public: \
	DECLARE_CLASS(AProjectileActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankProject"), NO_API) \
	DECLARE_SERIALIZER(AProjectileActor)


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileActor(); \
	friend struct Z_Construct_UClass_AProjectileActor_Statics; \
public: \
	DECLARE_CLASS(AProjectileActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankProject"), NO_API) \
	DECLARE_SERIALIZER(AProjectileActor)


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileActor(AProjectileActor&&); \
	NO_API AProjectileActor(const AProjectileActor&); \
public: \
	NO_API virtual ~AProjectileActor();


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileActor(AProjectileActor&&); \
	NO_API AProjectileActor(const AProjectileActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileActor) \
	NO_API virtual ~AProjectileActor();


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_13_PROLOG
#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_SPARSE_DATA \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_RPC_WRAPPERS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_ACCESSORS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_INCLASS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_SPARSE_DATA \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_ACCESSORS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKPROJECT_API UClass* StaticClass<class AProjectileActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_ProjectileActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
