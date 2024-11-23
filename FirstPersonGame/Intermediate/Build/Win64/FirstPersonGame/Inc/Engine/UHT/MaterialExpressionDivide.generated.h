// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionDivide.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionDivide_generated_h
#error "MaterialExpressionDivide.generated.h already included, missing '#pragma once' in MaterialExpressionDivide.h"
#endif
#define ENGINE_MaterialExpressionDivide_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDivide_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDivide(); \
	friend struct Z_Construct_UClass_UMaterialExpressionDivide_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionDivide, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionDivide)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDivide_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionDivide(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDivide) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionDivide); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDivide); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionDivide(UMaterialExpressionDivide&&); \
	UMaterialExpressionDivide(const UMaterialExpressionDivide&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionDivide();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDivide_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDivide_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDivide_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDivide_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionDivide>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDivide_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
