// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTDecorator_BlackboardBase_generated_h
#error "BTDecorator_BlackboardBase.generated.h already included, missing '#pragma once' in BTDecorator_BlackboardBase.h"
#endif
#define AIMODULE_BTDecorator_BlackboardBase_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlackboardBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBTDecorator_BlackboardBase(); \
	friend struct Z_Construct_UClass_UBTDecorator_BlackboardBase_Statics; \
public: \
	DECLARE_CLASS(UBTDecorator_BlackboardBase, UBTDecorator, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTDecorator_BlackboardBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlackboardBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTDecorator_BlackboardBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_BlackboardBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTDecorator_BlackboardBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_BlackboardBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTDecorator_BlackboardBase(UBTDecorator_BlackboardBase&&); \
	UBTDecorator_BlackboardBase(const UBTDecorator_BlackboardBase&); \
public: \
	AIMODULE_API virtual ~UBTDecorator_BlackboardBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlackboardBase_h_14_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlackboardBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlackboardBase_h_17_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlackboardBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTDecorator_BlackboardBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlackboardBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
