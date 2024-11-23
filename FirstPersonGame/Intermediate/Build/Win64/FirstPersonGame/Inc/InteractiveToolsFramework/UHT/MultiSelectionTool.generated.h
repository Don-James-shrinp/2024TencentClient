// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiSelectionTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_MultiSelectionTool_generated_h
#error "MultiSelectionTool.generated.h already included, missing '#pragma once' in MultiSelectionTool.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_MultiSelectionTool_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_MultiSelectionTool_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiSelectionTool(); \
	friend struct Z_Construct_UClass_UMultiSelectionTool_Statics; \
public: \
	DECLARE_CLASS(UMultiSelectionTool, UInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UMultiSelectionTool) \
	virtual UObject* _getUObject() const override { return const_cast<UMultiSelectionTool*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_MultiSelectionTool_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UMultiSelectionTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMultiSelectionTool(UMultiSelectionTool&&); \
	UMultiSelectionTool(const UMultiSelectionTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UMultiSelectionTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiSelectionTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiSelectionTool) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UMultiSelectionTool();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_MultiSelectionTool_h_12_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_MultiSelectionTool_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_MultiSelectionTool_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_MultiSelectionTool_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UMultiSelectionTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_MultiSelectionTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
