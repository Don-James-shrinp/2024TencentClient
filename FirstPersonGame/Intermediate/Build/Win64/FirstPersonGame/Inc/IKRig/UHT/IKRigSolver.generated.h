// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/Solvers/IKRigSolver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IKRIG_IKRigSolver_generated_h
#error "IKRigSolver.generated.h already included, missing '#pragma once' in IKRigSolver.h"
#endif
#define IKRIG_IKRigSolver_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolver_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigSolver(); \
	friend struct Z_Construct_UClass_UIKRigSolver_Statics; \
public: \
	DECLARE_CLASS(UIKRigSolver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(UIKRigSolver)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolver_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIKRigSolver(UIKRigSolver&&); \
	UIKRigSolver(const UIKRigSolver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRigSolver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigSolver); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UIKRigSolver) \
	NO_API virtual ~UIKRigSolver();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolver_h_15_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolver_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolver_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolver_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIG_API UClass* StaticClass<class UIKRigSolver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
