// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Teams.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKPROJECT_Teams_generated_h
#error "Teams.generated.h already included, missing '#pragma once' in Teams.h"
#endif
#define TANKPROJECT_Teams_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_GenTl_OneDrive_Documents_GitHub_VivalandExercise_TankProject_Source_TankProject_Teams_h


#define FOREACH_ENUM_ETEAM(op) \
	op(ETeam::ET_RedTeam) \
	op(ETeam::ET_BlueTeam) \
	op(ETeam::ET_NoTeam) 

enum class ETeam : uint8;
template<> struct TIsUEnumClass<ETeam> { enum { Value = true }; };
template<> TANKPROJECT_API UEnum* StaticEnum<ETeam>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
