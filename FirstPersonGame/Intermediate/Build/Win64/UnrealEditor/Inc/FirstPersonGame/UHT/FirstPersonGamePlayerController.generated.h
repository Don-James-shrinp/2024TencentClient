// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirstPersonGamePlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPERSONGAME_FirstPersonGamePlayerController_generated_h
#error "FirstPersonGamePlayerController.generated.h already included, missing '#pragma once' in FirstPersonGamePlayerController.h"
#endif
#define FIRSTPERSONGAME_FirstPersonGamePlayerController_generated_h

#define FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGamePlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonGamePlayerController(); \
	friend struct Z_Construct_UClass_AFirstPersonGamePlayerController_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonGamePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonGamePlayerController)


#define FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGamePlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstPersonGamePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFirstPersonGamePlayerController(AFirstPersonGamePlayerController&&); \
	AFirstPersonGamePlayerController(const AFirstPersonGamePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonGamePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonGamePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPersonGamePlayerController) \
	NO_API virtual ~AFirstPersonGamePlayerController();


#define FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGamePlayerController_h_14_PROLOG
#define FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGamePlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGamePlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGamePlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONGAME_API UClass* StaticClass<class AFirstPersonGamePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TencentClient2024_FirstPersonGame_Source_FirstPersonGame_FirstPersonGamePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
