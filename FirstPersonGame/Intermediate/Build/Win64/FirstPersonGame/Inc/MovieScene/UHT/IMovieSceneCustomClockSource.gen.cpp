// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/IMovieSceneCustomClockSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneCustomClockSource() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCustomClockSource();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCustomClockSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieSceneCustomClockSource Function OnRequestCurrentTime
struct Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics
{
	struct FFrameTime
	{
		FFrameNumber FrameNumber;
		float SubFrame;
	};

	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct FQualifiedFrameTime
	{
		FFrameTime Time;
		FFrameRate Rate;
	};

	struct MovieSceneCustomClockSource_eventOnRequestCurrentTime_Parms
	{
		FQualifiedFrameTime InCurrentTime;
		float InPlayRate;
		FFrameTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/IMovieSceneCustomClockSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCurrentTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCurrentTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics::NewProp_InCurrentTime = { "InCurrentTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneCustomClockSource_eventOnRequestCurrentTime_Parms, InCurrentTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCurrentTime_MetaData), NewProp_InCurrentTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneCustomClockSource_eventOnRequestCurrentTime_Parms, InPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneCustomClockSource_eventOnRequestCurrentTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics::NewProp_InCurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics::NewProp_InPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCustomClockSource, nullptr, "OnRequestCurrentTime", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics::MovieSceneCustomClockSource_eventOnRequestCurrentTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics::MovieSceneCustomClockSource_eventOnRequestCurrentTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMovieSceneCustomClockSource::execOnRequestCurrentTime)
{
	P_GET_STRUCT_REF(FQualifiedFrameTime,Z_Param_Out_InCurrentTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFrameTime*)Z_Param__Result=P_THIS->OnRequestCurrentTime(Z_Param_Out_InCurrentTime,Z_Param_InPlayRate);
	P_NATIVE_END;
}
// End Interface UMovieSceneCustomClockSource Function OnRequestCurrentTime

// Begin Interface UMovieSceneCustomClockSource Function OnStartPlaying
struct Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct FFrameTime
	{
		FFrameNumber FrameNumber;
		float SubFrame;
	};

	struct FQualifiedFrameTime
	{
		FFrameTime Time;
		FFrameRate Rate;
	};

	struct MovieSceneCustomClockSource_eventOnStartPlaying_Parms
	{
		FQualifiedFrameTime InStartTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/IMovieSceneCustomClockSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStartTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStartTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying_Statics::NewProp_InStartTime = { "InStartTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneCustomClockSource_eventOnStartPlaying_Parms, InStartTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStartTime_MetaData), NewProp_InStartTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying_Statics::NewProp_InStartTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCustomClockSource, nullptr, "OnStartPlaying", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying_Statics::MovieSceneCustomClockSource_eventOnStartPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying_Statics::MovieSceneCustomClockSource_eventOnStartPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMovieSceneCustomClockSource::execOnStartPlaying)
{
	P_GET_STRUCT_REF(FQualifiedFrameTime,Z_Param_Out_InStartTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStartPlaying(Z_Param_Out_InStartTime);
	P_NATIVE_END;
}
// End Interface UMovieSceneCustomClockSource Function OnStartPlaying

// Begin Interface UMovieSceneCustomClockSource Function OnStopPlaying
struct Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct FFrameTime
	{
		FFrameNumber FrameNumber;
		float SubFrame;
	};

	struct FQualifiedFrameTime
	{
		FFrameTime Time;
		FFrameRate Rate;
	};

	struct MovieSceneCustomClockSource_eventOnStopPlaying_Parms
	{
		FQualifiedFrameTime InStopTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/IMovieSceneCustomClockSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStopTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStopTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying_Statics::NewProp_InStopTime = { "InStopTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneCustomClockSource_eventOnStopPlaying_Parms, InStopTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStopTime_MetaData), NewProp_InStopTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying_Statics::NewProp_InStopTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCustomClockSource, nullptr, "OnStopPlaying", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying_Statics::MovieSceneCustomClockSource_eventOnStopPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying_Statics::MovieSceneCustomClockSource_eventOnStopPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMovieSceneCustomClockSource::execOnStopPlaying)
{
	P_GET_STRUCT_REF(FQualifiedFrameTime,Z_Param_Out_InStopTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStopPlaying(Z_Param_Out_InStopTime);
	P_NATIVE_END;
}
// End Interface UMovieSceneCustomClockSource Function OnStopPlaying

// Begin Interface UMovieSceneCustomClockSource Function OnTick
struct Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick_Statics
{
	struct MovieSceneCustomClockSource_eventOnTick_Parms
	{
		float DeltaSeconds;
		float InPlayRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/IMovieSceneCustomClockSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneCustomClockSource_eventOnTick_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneCustomClockSource_eventOnTick_Parms, InPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick_Statics::NewProp_DeltaSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick_Statics::NewProp_InPlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCustomClockSource, nullptr, "OnTick", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick_Statics::MovieSceneCustomClockSource_eventOnTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick_Statics::MovieSceneCustomClockSource_eventOnTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMovieSceneCustomClockSource::execOnTick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTick(Z_Param_DeltaSeconds,Z_Param_InPlayRate);
	P_NATIVE_END;
}
// End Interface UMovieSceneCustomClockSource Function OnTick

// Begin Interface UMovieSceneCustomClockSource
void UMovieSceneCustomClockSource::StaticRegisterNativesUMovieSceneCustomClockSource()
{
	UClass* Class = UMovieSceneCustomClockSource::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRequestCurrentTime", &IMovieSceneCustomClockSource::execOnRequestCurrentTime },
		{ "OnStartPlaying", &IMovieSceneCustomClockSource::execOnStartPlaying },
		{ "OnStopPlaying", &IMovieSceneCustomClockSource::execOnStopPlaying },
		{ "OnTick", &IMovieSceneCustomClockSource::execOnTick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCustomClockSource);
UClass* Z_Construct_UClass_UMovieSceneCustomClockSource_NoRegister()
{
	return UMovieSceneCustomClockSource::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCustomClockSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/IMovieSceneCustomClockSource.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime, "OnRequestCurrentTime" }, // 244556187
		{ &Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying, "OnStartPlaying" }, // 1358510094
		{ &Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying, "OnStopPlaying" }, // 2024355623
		{ &Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick, "OnTick" }, // 387221739
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneCustomClockSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneCustomClockSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCustomClockSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCustomClockSource_Statics::ClassParams = {
	&UMovieSceneCustomClockSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCustomClockSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCustomClockSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCustomClockSource()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCustomClockSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCustomClockSource.OuterSingleton, Z_Construct_UClass_UMovieSceneCustomClockSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCustomClockSource.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneCustomClockSource>()
{
	return UMovieSceneCustomClockSource::StaticClass();
}
UMovieSceneCustomClockSource::UMovieSceneCustomClockSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCustomClockSource);
UMovieSceneCustomClockSource::~UMovieSceneCustomClockSource() {}
// End Interface UMovieSceneCustomClockSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCustomClockSource, UMovieSceneCustomClockSource::StaticClass, TEXT("UMovieSceneCustomClockSource"), &Z_Registration_Info_UClass_UMovieSceneCustomClockSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCustomClockSource), 2200710100U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_4078091215(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
