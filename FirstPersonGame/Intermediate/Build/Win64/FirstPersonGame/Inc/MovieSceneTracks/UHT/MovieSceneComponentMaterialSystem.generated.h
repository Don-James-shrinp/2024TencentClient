// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneComponentMaterialSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneComponentMaterialSystem_generated_h
#error "MovieSceneComponentMaterialSystem.generated.h already included, missing '#pragma once' in MovieSceneComponentMaterialSystem.h"
#endif
#define MOVIESCENETRACKS_MovieSceneComponentMaterialSystem_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMaterialSystem_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneComponentMaterialSystem(); \
	friend struct Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneComponentMaterialSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneComponentMaterialSystem) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneComponentMaterialSystem*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMaterialSystem_h_77_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneComponentMaterialSystem(UMovieSceneComponentMaterialSystem&&); \
	UMovieSceneComponentMaterialSystem(const UMovieSceneComponentMaterialSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneComponentMaterialSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneComponentMaterialSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneComponentMaterialSystem) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneComponentMaterialSystem();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMaterialSystem_h_70_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMaterialSystem_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMaterialSystem_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMaterialSystem_h_77_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneComponentMaterialSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMaterialSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
