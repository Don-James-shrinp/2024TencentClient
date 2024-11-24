// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetCube.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPERSONGAME_TargetCube_generated_h
#error "TargetCube.generated.h already included, missing '#pragma once' in TargetCube.h"
#endif
#define FIRSTPERSONGAME_TargetCube_generated_h

#define FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_Public_TargetCube_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_Public_TargetCube_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATargetCube(); \
	friend struct Z_Construct_UClass_ATargetCube_Statics; \
public: \
	DECLARE_CLASS(ATargetCube, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonGame"), NO_API) \
	DECLARE_SERIALIZER(ATargetCube)


#define FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_Public_TargetCube_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATargetCube(ATargetCube&&); \
	ATargetCube(const ATargetCube&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATargetCube); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATargetCube); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATargetCube) \
	NO_API virtual ~ATargetCube();


#define FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_Public_TargetCube_h_9_PROLOG
#define FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_Public_TargetCube_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_Public_TargetCube_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_Public_TargetCube_h_12_INCLASS_NO_PURE_DECLS \
	FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_Public_TargetCube_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONGAME_API UClass* StaticClass<class ATargetCube>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_Public_TargetCube_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
