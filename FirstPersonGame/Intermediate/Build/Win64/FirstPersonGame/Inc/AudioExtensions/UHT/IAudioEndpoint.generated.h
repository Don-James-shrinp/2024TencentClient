// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAudioEndpoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEXTENSIONS_IAudioEndpoint_generated_h
#error "IAudioEndpoint.generated.h already included, missing '#pragma once' in IAudioEndpoint.h"
#endif
#define AUDIOEXTENSIONS_IAudioEndpoint_generated_h

#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioEndpointSettingsBase(); \
	friend struct Z_Construct_UClass_UAudioEndpointSettingsBase_Statics; \
public: \
	DECLARE_CLASS(UAudioEndpointSettingsBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), AUDIOEXTENSIONS_API) \
	DECLARE_SERIALIZER(UAudioEndpointSettingsBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEXTENSIONS_API UAudioEndpointSettingsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioEndpointSettingsBase(UAudioEndpointSettingsBase&&); \
	UAudioEndpointSettingsBase(const UAudioEndpointSettingsBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEXTENSIONS_API, UAudioEndpointSettingsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioEndpointSettingsBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioEndpointSettingsBase) \
	AUDIOEXTENSIONS_API virtual ~UAudioEndpointSettingsBase();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_52_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEXTENSIONS_API UClass* StaticClass<class UAudioEndpointSettingsBase>();

#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDummyEndpointSettings(); \
	friend struct Z_Construct_UClass_UDummyEndpointSettings_Statics; \
public: \
	DECLARE_CLASS(UDummyEndpointSettings, UAudioEndpointSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioExtensions"), NO_API) \
	DECLARE_SERIALIZER(UDummyEndpointSettings)


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDummyEndpointSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDummyEndpointSettings(UDummyEndpointSettings&&); \
	UDummyEndpointSettings(const UDummyEndpointSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDummyEndpointSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDummyEndpointSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDummyEndpointSettings) \
	NO_API virtual ~UDummyEndpointSettings();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_66_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEXTENSIONS_API UClass* StaticClass<class UDummyEndpointSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
