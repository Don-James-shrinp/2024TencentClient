// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModelingComponentsSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGCOMPONENTS_ModelingComponentsSettings_generated_h
#error "ModelingComponentsSettings.generated.h already included, missing '#pragma once' in ModelingComponentsSettings.h"
#endif
#define MODELINGCOMPONENTS_ModelingComponentsSettings_generated_h

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModelingComponentsSettings(); \
	friend struct Z_Construct_UClass_UModelingComponentsSettings_Statics; \
public: \
	DECLARE_CLASS(UModelingComponentsSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModelingComponents"), NO_API) \
	DECLARE_SERIALIZER(UModelingComponentsSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModelingComponentsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModelingComponentsSettings(UModelingComponentsSettings&&); \
	UModelingComponentsSettings(const UModelingComponentsSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModelingComponentsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModelingComponentsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModelingComponentsSettings) \
	NO_API virtual ~UModelingComponentsSettings();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGCOMPONENTS_API UClass* StaticClass<class UModelingComponentsSettings>();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModelingComponentsEditorSettings(); \
	friend struct Z_Construct_UClass_UModelingComponentsEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UModelingComponentsEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelingComponents"), NO_API) \
	DECLARE_SERIALIZER(UModelingComponentsEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModelingComponentsEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModelingComponentsEditorSettings(UModelingComponentsEditorSettings&&); \
	UModelingComponentsEditorSettings(const UModelingComponentsEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModelingComponentsEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModelingComponentsEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModelingComponentsEditorSettings) \
	NO_API virtual ~UModelingComponentsEditorSettings();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_87_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_90_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGCOMPONENTS_API UClass* StaticClass<class UModelingComponentsEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h


#define FOREACH_ENUM_EMODELINGCOMPONENTSPLANEVISUALIZATIONMODE(op) \
	op(EModelingComponentsPlaneVisualizationMode::SimpleGrid) \
	op(EModelingComponentsPlaneVisualizationMode::HierarchicalGrid) \
	op(EModelingComponentsPlaneVisualizationMode::FixedScreenAreaGrid) 

enum class EModelingComponentsPlaneVisualizationMode : uint8;
template<> struct TIsUEnumClass<EModelingComponentsPlaneVisualizationMode> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EModelingComponentsPlaneVisualizationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
