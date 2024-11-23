// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeviceProfiles/DeviceProfileManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DeviceProfileManager_generated_h
#error "DeviceProfileManager.generated.h already included, missing '#pragma once' in DeviceProfileManager.h"
#endif
#define ENGINE_DeviceProfileManager_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeviceProfileManager(); \
	friend struct Z_Construct_UClass_UDeviceProfileManager_Statics; \
public: \
	DECLARE_CLASS(UDeviceProfileManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDeviceProfileManager) \
	static const TCHAR* StaticConfigName() {return TEXT("DeviceProfiles");} \



#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDeviceProfileManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDeviceProfileManager(UDeviceProfileManager&&); \
	UDeviceProfileManager(const UDeviceProfileManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDeviceProfileManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeviceProfileManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeviceProfileManager) \
	ENGINE_API virtual ~UDeviceProfileManager();


#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_40_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_45_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDeviceProfileManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
