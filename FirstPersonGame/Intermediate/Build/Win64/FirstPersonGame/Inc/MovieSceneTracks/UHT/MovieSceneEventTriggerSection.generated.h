// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneEventTriggerSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneEventTriggerSection_generated_h
#error "MovieSceneEventTriggerSection.generated.h already included, missing '#pragma once' in MovieSceneEventTriggerSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneEventTriggerSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventTriggerSection_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEventTriggerSection(); \
	friend struct Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEventTriggerSection, UMovieSceneEventSectionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneEventTriggerSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneEventTriggerSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventTriggerSection_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneEventTriggerSection(UMovieSceneEventTriggerSection&&); \
	UMovieSceneEventTriggerSection(const UMovieSceneEventTriggerSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEventTriggerSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEventTriggerSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEventTriggerSection) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneEventTriggerSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventTriggerSection_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventTriggerSection_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventTriggerSection_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventTriggerSection_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneEventTriggerSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventTriggerSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
