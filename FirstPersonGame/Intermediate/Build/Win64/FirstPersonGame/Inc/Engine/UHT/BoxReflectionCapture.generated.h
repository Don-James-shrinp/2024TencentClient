// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/BoxReflectionCapture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BoxReflectionCapture_generated_h
#error "BoxReflectionCapture.generated.h already included, missing '#pragma once' in BoxReflectionCapture.h"
#endif
#define ENGINE_BoxReflectionCapture_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABoxReflectionCapture(); \
	friend struct Z_Construct_UClass_ABoxReflectionCapture_Statics; \
public: \
	DECLARE_CLASS(ABoxReflectionCapture, AReflectionCapture, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ABoxReflectionCapture)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ABoxReflectionCapture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoxReflectionCapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ABoxReflectionCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxReflectionCapture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABoxReflectionCapture(ABoxReflectionCapture&&); \
	ABoxReflectionCapture(const ABoxReflectionCapture&); \
public: \
	ENGINE_API virtual ~ABoxReflectionCapture();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ABoxReflectionCapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
