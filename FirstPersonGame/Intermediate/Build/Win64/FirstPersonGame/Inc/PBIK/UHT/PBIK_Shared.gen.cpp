// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PBIK/Public/PBIK_Shared.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePBIK_Shared() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PBIK_API UEnum* Z_Construct_UEnum_PBIK_EPBIKLimitType();
PBIK_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKBoneSetting();
UPackage* Z_Construct_UPackage__Script_PBIK();
// End Cross Module References

// Begin Enum EPBIKLimitType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPBIKLimitType;
static UEnum* EPBIKLimitType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPBIKLimitType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPBIKLimitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PBIK_EPBIKLimitType, (UObject*)Z_Construct_UPackage__Script_PBIK(), TEXT("EPBIKLimitType"));
	}
	return Z_Registration_Info_UEnum_EPBIKLimitType.OuterSingleton;
}
template<> PBIK_API UEnum* StaticEnum<EPBIKLimitType>()
{
	return EPBIKLimitType_StaticEnum();
}
struct Z_Construct_UEnum_PBIK_EPBIKLimitType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Free.Name", "EPBIKLimitType::Free" },
		{ "Limited.Name", "EPBIKLimitType::Limited" },
		{ "Locked.Name", "EPBIKLimitType::Locked" },
		{ "ModuleRelativePath", "Public/PBIK_Shared.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPBIKLimitType::Free", (int64)EPBIKLimitType::Free },
		{ "EPBIKLimitType::Limited", (int64)EPBIKLimitType::Limited },
		{ "EPBIKLimitType::Locked", (int64)EPBIKLimitType::Locked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PBIK_EPBIKLimitType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PBIK,
	nullptr,
	"EPBIKLimitType",
	"EPBIKLimitType",
	Z_Construct_UEnum_PBIK_EPBIKLimitType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PBIK_EPBIKLimitType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PBIK_EPBIKLimitType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PBIK_EPBIKLimitType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PBIK_EPBIKLimitType()
{
	if (!Z_Registration_Info_UEnum_EPBIKLimitType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPBIKLimitType.InnerSingleton, Z_Construct_UEnum_PBIK_EPBIKLimitType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPBIKLimitType.InnerSingleton;
}
// End Enum EPBIKLimitType

// Begin ScriptStruct FPBIKBoneSetting
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PBIKBoneSetting;
class UScriptStruct* FPBIKBoneSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PBIKBoneSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PBIKBoneSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPBIKBoneSetting, (UObject*)Z_Construct_UPackage__Script_PBIK(), TEXT("PBIKBoneSetting"));
	}
	return Z_Registration_Info_UScriptStruct_PBIKBoneSetting.OuterSingleton;
}
template<> PBIK_API UScriptStruct* StaticStruct<FPBIKBoneSetting>()
{
	return FPBIKBoneSetting::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PBIK_Shared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
		{ "Category", "Bone" },
		{ "Comment", "/** The Bone that these settings will be applied to. */" },
		{ "CustomWidget", "BoneName" },
		{ "ModuleRelativePath", "Public/PBIK_Shared.h" },
		{ "ToolTip", "The Bone that these settings will be applied to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationStiffness_MetaData[] = {
		{ "Category", "Stiffness" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Range is 0 to 1 (Default is 0). At higher values, the bone will resist rotating (forcing other bones to compensate). */" },
		{ "ModuleRelativePath", "Public/PBIK_Shared.h" },
		{ "ToolTip", "Range is 0 to 1 (Default is 0). At higher values, the bone will resist rotating (forcing other bones to compensate)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionStiffness_MetaData[] = {
		{ "Category", "Stiffness" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Range is 0 to 1 (Default is 0). At higher values, the bone will resist translational motion (forcing other bones to compensate). */" },
		{ "ModuleRelativePath", "Public/PBIK_Shared.h" },
		{ "ToolTip", "Range is 0 to 1 (Default is 0). At higher values, the bone will resist translational motion (forcing other bones to compensate)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** Limit the rotation angle of the bone on the X axis.\n\x09 *Free: can rotate freely in this axis.\n\x09 *Limited: rotation is clamped between the min/max angles relative to the Skeletal Mesh reference pose.\n\x09 *Locked: no rotation is allowed in this axis (will remain at reference pose angle). */" },
		{ "ModuleRelativePath", "Public/PBIK_Shared.h" },
		{ "ToolTip", "Limit the rotation angle of the bone on the X axis.\nFree: can rotate freely in this axis.\nLimited: rotation is clamped between the min/max angles relative to the Skeletal Mesh reference pose.\nLocked: no rotation is allowed in this axis (will remain at reference pose angle)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinX_MetaData[] = {
		{ "Category", "Limits" },
		{ "ClampMax", "0" },
		{ "ClampMin", "-180" },
		{ "Comment", "/**Range is -180 to 0 (Default is 0). Degrees of rotation in the negative X direction to allow when joint is in \"Limited\" mode. */" },
		{ "ModuleRelativePath", "Public/PBIK_Shared.h" },
		{ "ToolTip", "Range is -180 to 0 (Default is 0). Degrees of rotation in the negative X direction to allow when joint is in \"Limited\" mode." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-180.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxX_MetaData[] = {
		{ "Category", "Limits" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/**Range is 0 to 180 (Default is 0). Degrees of rotation in the positive X direction to allow when joint is in \"Limited\" mode. */" },
		{ "ModuleRelativePath", "Public/PBIK_Shared.h" },
		{ "ToolTip", "Range is 0 to 180 (Default is 0). Degrees of rotation in the positive X direction to allow when joint is in \"Limited\" mode." },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** Limit the rotation angle of the bone on the Y axis.\n\x09*Free: can rotate freely in this axis.\n\x09*Limited: rotation is clamped between the min/max angles relative to the Skeletal Mesh reference pose.\n\x09*Locked: no rotation is allowed in this axis (will remain at input pose angle). */" },
		{ "ModuleRelativePath", "Public/PBIK_Shared.h" },
		{ "ToolTip", "Limit the rotation angle of the bone on the Y axis.\nFree: can rotate freely in this axis.\nLimited: rotation is clamped between the min/max angles relative to the Skeletal Mesh reference pose.\nLocked: no rotation is allowed in this axis (will remain at input pose angle)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinY_MetaData[] = {
		{ "Category", "Limits" },
		{ "ClampMax", "0" },
		{ "ClampMin", "-180" },
		{ "Comment", "/**Range is -180 to 0 (Default is 0). Degrees of rotation in the negative Y direction to allow when joint is in \"Limited\" mode. */" },
		{ "ModuleRelativePath", "Public/PBIK_Shared.h" },
		{ "ToolTip", "Range is -180 to 0 (Default is 0). Degrees of rotation in the negative Y direction to allow when joint is in \"Limited\" mode." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-180.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxY_MetaData[] = {
		{ "Category", "Limits" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/**Range is 0 to 180 (Default is 0). Degrees of rotation in the positive Y direction to allow when joint is in \"Limited\" mode. */" },
		{ "ModuleRelativePath", "Public/PBIK_Shared.h" },
		{ "ToolTip", "Range is 0 to 180 (Default is 0). Degrees of rotation in the positive Y direction to allow when joint is in \"Limited\" mode." },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** Limit the rotation angle of the bone on the Z axis.\n\x09*Free: can rotate freely in this axis.\n\x09*Limited: rotation is clamped between the min/max angles relative to the Skeletal Mesh reference pose.\n\x09*Locked: no rotation is allowed in this axis (will remain at input pose angle). */" },
		{ "ModuleRelativePath", "Public/PBIK_Shared.h" },
		{ "ToolTip", "Limit the rotation angle of the bone on the Z axis.\nFree: can rotate freely in this axis.\nLimited: rotation is clamped between the min/max angles relative to the Skeletal Mesh reference pose.\nLocked: no rotation is allowed in this axis (will remain at input pose angle)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinZ_MetaData[] = {
		{ "Category", "Limits" },
		{ "ClampMax", "0" },
		{ "ClampMin", "-180" },
		{ "Comment", "/**Range is -180 to 0 (Default is 0). Degrees of rotation in the negative Z direction to allow when joint is in \"Limited\" mode. */" },
		{ "ModuleRelativePath", "Public/PBIK_Shared.h" },
		{ "ToolTip", "Range is -180 to 0 (Default is 0). Degrees of rotation in the negative Z direction to allow when joint is in \"Limited\" mode." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-180.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxZ_MetaData[] = {
		{ "Category", "Limits" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/**Range is 0 to 180 (Default is 0). Degrees of rotation in the positive Z direction to allow when joint is in \"Limited\" mode. */" },
		{ "ModuleRelativePath", "Public/PBIK_Shared.h" },
		{ "ToolTip", "Range is 0 to 180 (Default is 0). Degrees of rotation in the positive Z direction to allow when joint is in \"Limited\" mode." },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePreferredAngles_MetaData[] = {
		{ "Category", "PreferredAngles" },
		{ "Comment", "/**When true, this bone will \"prefer\" to rotate in the direction specified by the Preferred Angles when the chain it belongs to is compressed.\n\x09 * Preferred Angles should be the first method used to fix bones that bend in the wrong direction (rather than limits).\n\x09 * The resulting angles can be visualized on their own by temporarily setting the Solver iterations to 0 and moving the effectors.*/" },
		{ "ModuleRelativePath", "Public/PBIK_Shared.h" },
		{ "ToolTip", "When true, this bone will \"prefer\" to rotate in the direction specified by the Preferred Angles when the chain it belongs to is compressed.\nPreferred Angles should be the first method used to fix bones that bend in the wrong direction (rather than limits).\nThe resulting angles can be visualized on their own by temporarily setting the Solver iterations to 0 and moving the effectors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredAngles_MetaData[] = {
		{ "Category", "PreferredAngles" },
		{ "Comment", "/**The local Euler angles (in degrees) used to rotate this bone when the chain it belongs to is squashed.\n\x09 * This happens by moving the effector at the tip of the chain towards the root of the chain.\n\x09 * This can be used to coerce knees and elbows to bend in the anatomically \"correct\" direction without resorting to limits (which may require more iterations to converge).*/" },
		{ "ModuleRelativePath", "Public/PBIK_Shared.h" },
		{ "ToolTip", "The local Euler angles (in degrees) used to rotate this bone when the chain it belongs to is squashed.\nThis happens by moving the effector at the tip of the chain towards the root of the chain.\nThis can be used to coerce knees and elbows to bend in the anatomically \"correct\" direction without resorting to limits (which may require more iterations to converge)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Bone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionStiffness;
	static const UECodeGen_Private::FBytePropertyParams NewProp_X_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Y_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Z_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZ;
	static void NewProp_bUsePreferredAngles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePreferredAngles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreferredAngles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPBIKBoneSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKBoneSetting, Bone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone_MetaData), NewProp_Bone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_RotationStiffness = { "RotationStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKBoneSetting, RotationStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationStiffness_MetaData), NewProp_RotationStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_PositionStiffness = { "PositionStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKBoneSetting, PositionStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionStiffness_MetaData), NewProp_PositionStiffness_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_X_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKBoneSetting, X), Z_Construct_UEnum_PBIK_EPBIKLimitType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) }; // 1524420979
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_MinX = { "MinX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKBoneSetting, MinX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinX_MetaData), NewProp_MinX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_MaxX = { "MaxX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKBoneSetting, MaxX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxX_MetaData), NewProp_MaxX_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_Y_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKBoneSetting, Y), Z_Construct_UEnum_PBIK_EPBIKLimitType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) }; // 1524420979
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_MinY = { "MinY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKBoneSetting, MinY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinY_MetaData), NewProp_MinY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_MaxY = { "MaxY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKBoneSetting, MaxY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxY_MetaData), NewProp_MaxY_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_Z_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKBoneSetting, Z), Z_Construct_UEnum_PBIK_EPBIKLimitType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) }; // 1524420979
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_MinZ = { "MinZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKBoneSetting, MinZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinZ_MetaData), NewProp_MinZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_MaxZ = { "MaxZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKBoneSetting, MaxZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxZ_MetaData), NewProp_MaxZ_MetaData) };
void Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_bUsePreferredAngles_SetBit(void* Obj)
{
	((FPBIKBoneSetting*)Obj)->bUsePreferredAngles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_bUsePreferredAngles = { "bUsePreferredAngles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPBIKBoneSetting), &Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_bUsePreferredAngles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePreferredAngles_MetaData), NewProp_bUsePreferredAngles_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_PreferredAngles = { "PreferredAngles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKBoneSetting, PreferredAngles), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredAngles_MetaData), NewProp_PreferredAngles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_RotationStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_PositionStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_X_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_MinX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_MaxX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_Y_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_MinY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_MaxY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_Z_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_MinZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_MaxZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_bUsePreferredAngles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewProp_PreferredAngles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PBIK,
	nullptr,
	&NewStructOps,
	"PBIKBoneSetting",
	Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::PropPointers),
	sizeof(FPBIKBoneSetting),
	alignof(FPBIKBoneSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPBIKBoneSetting()
{
	if (!Z_Registration_Info_UScriptStruct_PBIKBoneSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PBIKBoneSetting.InnerSingleton, Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PBIKBoneSetting.InnerSingleton;
}
// End ScriptStruct FPBIKBoneSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_PBIK_Shared_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPBIKLimitType_StaticEnum, TEXT("EPBIKLimitType"), &Z_Registration_Info_UEnum_EPBIKLimitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1524420979U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPBIKBoneSetting::StaticStruct, Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics::NewStructOps, TEXT("PBIKBoneSetting"), &Z_Registration_Info_UScriptStruct_PBIKBoneSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPBIKBoneSetting), 974511397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_PBIK_Shared_h_1283021613(TEXT("/Script/PBIK"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_PBIK_Shared_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_PBIK_Shared_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_PBIK_Shared_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_PBIK_Shared_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
