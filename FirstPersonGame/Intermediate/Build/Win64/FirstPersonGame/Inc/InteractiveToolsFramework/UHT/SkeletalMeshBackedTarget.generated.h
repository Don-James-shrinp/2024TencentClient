// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetInterfaces/SkeletalMeshBackedTarget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_SkeletalMeshBackedTarget_generated_h
#error "SkeletalMeshBackedTarget.generated.h already included, missing '#pragma once' in SkeletalMeshBackedTarget.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_SkeletalMeshBackedTarget_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API USkeletalMeshBackedTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USkeletalMeshBackedTarget(USkeletalMeshBackedTarget&&); \
	USkeletalMeshBackedTarget(const USkeletalMeshBackedTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, USkeletalMeshBackedTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshBackedTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshBackedTarget) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~USkeletalMeshBackedTarget();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSkeletalMeshBackedTarget(); \
	friend struct Z_Construct_UClass_USkeletalMeshBackedTarget_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshBackedTarget, UAssetBackedTarget, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(USkeletalMeshBackedTarget)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISkeletalMeshBackedTarget() {} \
public: \
	typedef USkeletalMeshBackedTarget UClassType; \
	typedef ISkeletalMeshBackedTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_12_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class USkeletalMeshBackedTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
