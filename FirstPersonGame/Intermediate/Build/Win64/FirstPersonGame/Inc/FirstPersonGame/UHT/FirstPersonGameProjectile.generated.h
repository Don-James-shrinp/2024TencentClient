// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirstPersonGameProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FIRSTPERSONGAME_FirstPersonGameProjectile_generated_h
#error "FirstPersonGameProjectile.generated.h already included, missing '#pragma once' in FirstPersonGameProjectile.h"
#endif
#define FIRSTPERSONGAME_FirstPersonGameProjectile_generated_h

#define FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonGameProjectile(); \
	friend struct Z_Construct_UClass_AFirstPersonGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFirstPersonGameProjectile(AFirstPersonGameProjectile&&); \
	AFirstPersonGameProjectile(const AFirstPersonGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonGameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPersonGameProjectile) \
	NO_API virtual ~AFirstPersonGameProjectile();


#define FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_12_PROLOG
#define FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONGAME_API UClass* StaticClass<class AFirstPersonGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
