// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GameplayTasks/Classes/Tasks/GameplayTask_TimeLimitedExecution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask_TimeLimitedExecution() {}

// Begin Cross Module References
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_TimeLimitedExecution();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_NoRegister();
GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GameplayTasks();
// End Cross Module References

// Begin Delegate FTaskFinishDelegate
struct Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_TimeLimitedExecution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_TimeLimitedExecution, nullptr, "TaskFinishDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UGameplayTask_TimeLimitedExecution::FTaskFinishDelegate_DelegateWrapper(const FMulticastScriptDelegate& TaskFinishDelegate)
{
	TaskFinishDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FTaskFinishDelegate

// Begin Class UGameplayTask_TimeLimitedExecution
void UGameplayTask_TimeLimitedExecution::StaticRegisterNativesUGameplayTask_TimeLimitedExecution()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTask_TimeLimitedExecution);
UClass* Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_NoRegister()
{
	return UGameplayTask_TimeLimitedExecution::StaticClass();
}
struct Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds time limit for running a child task\n * - child task needs to be created with UGameplayTask_TimeLimitedExecution passed as TaskOwner \n * - activations are tied together and when either UGameplayTask_TimeLimitedExecution or child task is activated, other one starts as well\n * - OnFinished and OnTimeExpired are mutually exclusive\n */" },
		{ "IncludePath", "Tasks/GameplayTask_TimeLimitedExecution.h" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_TimeLimitedExecution.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Adds time limit for running a child task\n- child task needs to be created with UGameplayTask_TimeLimitedExecution passed as TaskOwner\n- activations are tied together and when either UGameplayTask_TimeLimitedExecution or child task is activated, other one starts as well\n- OnFinished and OnTimeExpired are mutually exclusive" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[] = {
		{ "Comment", "/** called when child task finishes execution before time runs out */" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_TimeLimitedExecution.h" },
		{ "ToolTip", "called when child task finishes execution before time runs out" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimeExpired_MetaData[] = {
		{ "Comment", "/** called when time runs out */" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_TimeLimitedExecution.h" },
		{ "ToolTip", "called when time runs out" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimeExpired;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature, "TaskFinishDelegate__DelegateSignature" }, // 2390157570
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTask_TimeLimitedExecution>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTask_TimeLimitedExecution, OnFinished), Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinished_MetaData), NewProp_OnFinished_MetaData) }; // 2390157570
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::NewProp_OnTimeExpired = { "OnTimeExpired", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTask_TimeLimitedExecution, OnTimeExpired), Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimeExpired_MetaData), NewProp_OnTimeExpired_MetaData) }; // 2390157570
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::NewProp_OnFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::NewProp_OnTimeExpired,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::ClassParams = {
	&UGameplayTask_TimeLimitedExecution::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayTask_TimeLimitedExecution()
{
	if (!Z_Registration_Info_UClass_UGameplayTask_TimeLimitedExecution.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTask_TimeLimitedExecution.OuterSingleton, Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayTask_TimeLimitedExecution.OuterSingleton;
}
template<> GAMEPLAYTASKS_API UClass* StaticClass<UGameplayTask_TimeLimitedExecution>()
{
	return UGameplayTask_TimeLimitedExecution::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask_TimeLimitedExecution);
UGameplayTask_TimeLimitedExecution::~UGameplayTask_TimeLimitedExecution() {}
// End Class UGameplayTask_TimeLimitedExecution

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTask_TimeLimitedExecution, UGameplayTask_TimeLimitedExecution::StaticClass, TEXT("UGameplayTask_TimeLimitedExecution"), &Z_Registration_Info_UClass_UGameplayTask_TimeLimitedExecution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTask_TimeLimitedExecution), 2593059658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_1879535600(TEXT("/Script/GameplayTasks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_TimeLimitedExecution_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
