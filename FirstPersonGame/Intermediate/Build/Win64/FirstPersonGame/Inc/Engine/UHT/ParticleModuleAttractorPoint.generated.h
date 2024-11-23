// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Attractor/ParticleModuleAttractorPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleAttractorPoint_generated_h
#error "ParticleModuleAttractorPoint.generated.h already included, missing '#pragma once' in ParticleModuleAttractorPoint.h"
#endif
#define ENGINE_ParticleModuleAttractorPoint_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPoint_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleAttractorPoint(); \
	friend struct Z_Construct_UClass_UParticleModuleAttractorPoint_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleAttractorPoint, UParticleModuleAttractorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleAttractorPoint)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPoint_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleAttractorPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleAttractorPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleAttractorPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleAttractorPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleAttractorPoint(UParticleModuleAttractorPoint&&); \
	UParticleModuleAttractorPoint(const UParticleModuleAttractorPoint&); \
public: \
	ENGINE_API virtual ~UParticleModuleAttractorPoint();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPoint_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPoint_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPoint_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPoint_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleAttractorPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
