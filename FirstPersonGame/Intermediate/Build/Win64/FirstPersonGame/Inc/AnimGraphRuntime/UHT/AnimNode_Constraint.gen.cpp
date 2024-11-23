// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_Constraint.h"
#include "Runtime/AnimationCore/Public/Constraint.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Constraint() {}

// Begin Cross Module References
ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_ETransformConstraintType();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis();
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Constraint();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConstraint();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Enum EConstraintOffsetOption
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConstraintOffsetOption;
static UEnum* EConstraintOffsetOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EConstraintOffsetOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EConstraintOffsetOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EConstraintOffsetOption"));
	}
	return Z_Registration_Info_UEnum_EConstraintOffsetOption.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EConstraintOffsetOption>()
{
	return EConstraintOffsetOption_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** \n * Enum value to describe how you'd like to maintain offset\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "None.Name", "EConstraintOffsetOption::None" },
		{ "Offset_RefPose.Comment", "// no offset\n" },
		{ "Offset_RefPose.Name", "EConstraintOffsetOption::Offset_RefPose" },
		{ "Offset_RefPose.ToolTip", "no offset" },
		{ "ToolTip", "Enum value to describe how you'd like to maintain offset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EConstraintOffsetOption::None", (int64)EConstraintOffsetOption::None },
		{ "EConstraintOffsetOption::Offset_RefPose", (int64)EConstraintOffsetOption::Offset_RefPose },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"EConstraintOffsetOption",
	"EConstraintOffsetOption",
	Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption()
{
	if (!Z_Registration_Info_UEnum_EConstraintOffsetOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConstraintOffsetOption.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EConstraintOffsetOption.InnerSingleton;
}
// End Enum EConstraintOffsetOption

// Begin ScriptStruct FConstraint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Constraint;
class UScriptStruct* FConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Constraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Constraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraint, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("Constraint"));
	}
	return Z_Registration_Info_UScriptStruct_Constraint.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FConstraint>()
{
	return FConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Constraint Set up\n *\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "ToolTip", "Constraint Set up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[] = {
		{ "Category", "FConstraint" },
		{ "Comment", "/** Target Bone this is constraint to */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "ToolTip", "Target Bone this is constraint to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetOption_MetaData[] = {
		{ "Category", "FConstraint" },
		{ "Comment", "/** Maintain offset based on refpose or not.\n\x09 * \n\x09 * None - no offset\n\x09 * Offset_RefPose - offset is created based on reference pose\n\x09 * \n\x09 * In the future, we'd like to support custom offset, not just based on ref pose\n\x09 */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "ToolTip", "Maintain offset based on refpose or not.\n\nNone - no offset\nOffset_RefPose - offset is created based on reference pose\n\nIn the future, we'd like to support custom offset, not just based on ref pose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[] = {
		{ "Category", "FConstraint" },
		{ "Comment", "/** What transform type is constraint to - Translation, Rotation, Scale OR Parent. Parent overrides all component */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "ToolTip", "What transform type is constraint to - Translation, Rotation, Scale OR Parent. Parent overrides all component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerAxis_MetaData[] = {
		{ "Category", "FConstraint" },
		{ "Comment", "/** Per axis filter options - applied in their local space not in world space */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "ToolTip", "Per axis filter options - applied in their local space not in world space" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetBone;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OffsetOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OffsetOption;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TargetBone = { "TargetBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraint, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetBone_MetaData), NewProp_TargetBone_MetaData) }; // 4218265988
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_OffsetOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_OffsetOption = { "OffsetOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraint, OffsetOption), Z_Construct_UEnum_AnimGraphRuntime_EConstraintOffsetOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetOption_MetaData), NewProp_OffsetOption_MetaData) }; // 4049428651
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TransformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraint, TransformType), Z_Construct_UEnum_AnimationCore_ETransformConstraintType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformType_MetaData), NewProp_TransformType_MetaData) }; // 112181424
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_PerAxis = { "PerAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraint, PerAxis), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerAxis_MetaData), NewProp_PerAxis_MetaData) }; // 1027366730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TargetBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_OffsetOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_OffsetOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TransformType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_TransformType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraint_Statics::NewProp_PerAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"Constraint",
	Z_Construct_UScriptStruct_FConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraint_Statics::PropPointers),
	sizeof(FConstraint),
	alignof(FConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_Constraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Constraint.InnerSingleton, Z_Construct_UScriptStruct_FConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Constraint.InnerSingleton;
}
// End ScriptStruct FConstraint

// Begin ScriptStruct FAnimNode_Constraint
static_assert(std::is_polymorphic<FAnimNode_Constraint>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_Constraint cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Constraint;
class UScriptStruct* FAnimNode_Constraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Constraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Constraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Constraint, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Constraint"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Constraint.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_Constraint>()
{
	return FAnimNode_Constraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Constraint node to parent or world transform for rotation/translation\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "ToolTip", "Constraint node to parent or world transform for rotation/translation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneToModify_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** List of constraints */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "ToolTip", "List of constraints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintWeights_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** Weight data - post edit syncs up to ConstraintSetups */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Constraint.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Weight data - post edit syncs up to ConstraintSetups" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneToModify;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintSetup_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintSetup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstraintWeights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintWeights;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Constraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_BoneToModify = { "BoneToModify", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Constraint, BoneToModify), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneToModify_MetaData), NewProp_BoneToModify_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintSetup_Inner = { "ConstraintSetup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraint, METADATA_PARAMS(0, nullptr) }; // 1153832292
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintSetup = { "ConstraintSetup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Constraint, ConstraintSetup), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintSetup_MetaData), NewProp_ConstraintSetup_MetaData) }; // 1153832292
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintWeights_Inner = { "ConstraintWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintWeights = { "ConstraintWeights", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Constraint, ConstraintWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintWeights_MetaData), NewProp_ConstraintWeights_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_BoneToModify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintSetup_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintSetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintWeights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewProp_ConstraintWeights,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_Constraint",
	Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::PropPointers),
	sizeof(FAnimNode_Constraint),
	alignof(FAnimNode_Constraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Constraint()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Constraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Constraint.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Constraint.InnerSingleton;
}
// End ScriptStruct FAnimNode_Constraint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Constraint_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EConstraintOffsetOption_StaticEnum, TEXT("EConstraintOffsetOption"), &Z_Registration_Info_UEnum_EConstraintOffsetOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4049428651U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FConstraint::StaticStruct, Z_Construct_UScriptStruct_FConstraint_Statics::NewStructOps, TEXT("Constraint"), &Z_Registration_Info_UScriptStruct_Constraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraint), 1153832292U) },
		{ FAnimNode_Constraint::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics::NewStructOps, TEXT("AnimNode_Constraint"), &Z_Registration_Info_UScriptStruct_AnimNode_Constraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Constraint), 2383761560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Constraint_h_2053465122(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Constraint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Constraint_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Constraint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Constraint_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
