// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/RigVMDispatch_If.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDispatch_If() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_If();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMDispatch_If
static_assert(std::is_polymorphic<FRigVMDispatch_If>() == std::is_polymorphic<FRigVMDispatch_CoreBase>(), "USTRUCT FRigVMDispatch_If cannot be polymorphic unless super FRigVMDispatch_CoreBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDispatch_If;
class UScriptStruct* FRigVMDispatch_If::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_If.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDispatch_If.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_If, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDispatch_If"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_If.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDispatch_If>()
{
	return FRigVMDispatch_If::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMDispatch_If_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "Comment", "/*\n * Chooses between two values based on a condition\n */" },
		{ "DisplayName", "If" },
		{ "Keywords", "Branch,Condition" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMDispatch_If.h" },
		{ "NodeColor", "0,1,0,1" },
		{ "ToolTip", "* Chooses between two values based on a condition" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDispatch_If>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDispatch_If_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase,
	&NewStructOps,
	"RigVMDispatch_If",
	nullptr,
	0,
	sizeof(FRigVMDispatch_If),
	alignof(FRigVMDispatch_If),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDispatch_If_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMDispatch_If_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_If()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_If.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDispatch_If.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDispatch_If_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_If.InnerSingleton;
}
// End ScriptStruct FRigVMDispatch_If

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_If_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMDispatch_If::StaticStruct, Z_Construct_UScriptStruct_FRigVMDispatch_If_Statics::NewStructOps, TEXT("RigVMDispatch_If"), &Z_Registration_Info_UScriptStruct_RigVMDispatch_If, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDispatch_If), 1829963224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_If_h_895526466(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_If_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_If_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
