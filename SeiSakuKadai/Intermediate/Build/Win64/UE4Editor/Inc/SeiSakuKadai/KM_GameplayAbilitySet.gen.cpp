// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeiSakuKadai/Public/KM_Generated/KM_GameplayAbilitySet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKM_GameplayAbilitySet() {}
// Cross Module References
	SEISAKUKADAI_API UScriptStruct* Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo();
	UPackage* Z_Construct_UPackage__Script_SeiSakuKadai();
	SEISAKUKADAI_API UEnum* Z_Construct_UEnum_SeiSakuKadai_EKM_GameplayAbilityInputBinds();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	SEISAKUKADAI_API UClass* Z_Construct_UClass_UKM_GameplayAbilitySet_NoRegister();
	SEISAKUKADAI_API UClass* Z_Construct_UClass_UKM_GameplayAbilitySet();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FKM_GameplayAbilityBindInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SEISAKUKADAI_API uint32 Get_Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo, Z_Construct_UPackage__Script_SeiSakuKadai(), TEXT("KM_GameplayAbilityBindInfo"), sizeof(FKM_GameplayAbilityBindInfo), Get_Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Hash());
	}
	return Singleton;
}
template<> SEISAKUKADAI_API UScriptStruct* StaticStruct<FKM_GameplayAbilityBindInfo>()
{
	return FKM_GameplayAbilityBindInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKM_GameplayAbilityBindInfo(FKM_GameplayAbilityBindInfo::StaticStruct, TEXT("/Script/SeiSakuKadai"), TEXT("KM_GameplayAbilityBindInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SeiSakuKadai_StaticRegisterNativesFKM_GameplayAbilityBindInfo
{
	FScriptStruct_SeiSakuKadai_StaticRegisterNativesFKM_GameplayAbilityBindInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KM_GameplayAbilityBindInfo")),new UScriptStruct::TCppStructOps<FKM_GameplayAbilityBindInfo>);
	}
} ScriptStruct_SeiSakuKadai_StaticRegisterNativesFKM_GameplayAbilityBindInfo;
	struct Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Command_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Command;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayAbilityClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameplayAbilityClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KM_Generated/KM_GameplayAbilitySet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKM_GameplayAbilityBindInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::NewProp_Command_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::NewProp_Command_MetaData[] = {
		{ "Category", "BindInfo" },
		{ "ModuleRelativePath", "Public/KM_Generated/KM_GameplayAbilitySet.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKM_GameplayAbilityBindInfo, Command), Z_Construct_UEnum_SeiSakuKadai_EKM_GameplayAbilityInputBinds, METADATA_PARAMS(Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::NewProp_Command_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::NewProp_GameplayAbilityClass_MetaData[] = {
		{ "Category", "BindInfo" },
		{ "ModuleRelativePath", "Public/KM_Generated/KM_GameplayAbilitySet.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::NewProp_GameplayAbilityClass = { "GameplayAbilityClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKM_GameplayAbilityBindInfo, GameplayAbilityClass), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::NewProp_GameplayAbilityClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::NewProp_GameplayAbilityClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::NewProp_Command_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::NewProp_Command,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::NewProp_GameplayAbilityClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeiSakuKadai,
		nullptr,
		&NewStructOps,
		"KM_GameplayAbilityBindInfo",
		sizeof(FKM_GameplayAbilityBindInfo),
		alignof(FKM_GameplayAbilityBindInfo),
		Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SeiSakuKadai();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KM_GameplayAbilityBindInfo"), sizeof(FKM_GameplayAbilityBindInfo), Get_Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo_Hash() { return 3959193906U; }
	DEFINE_FUNCTION(UKM_GameplayAbilitySet::execGiveAbilities)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GiveAbilities(Z_Param_AbilitySystemComponent,Z_Param_Actor);
		P_NATIVE_END;
	}
	void UKM_GameplayAbilitySet::StaticRegisterNativesUKM_GameplayAbilitySet()
	{
		UClass* Class = UKM_GameplayAbilitySet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GiveAbilities", &UKM_GameplayAbilitySet::execGiveAbilities },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities_Statics
	{
		struct KM_GameplayAbilitySet_eventGiveAbilities_Parms
		{
			UAbilitySystemComponent* AbilitySystemComponent;
			AActor* Actor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KM_GameplayAbilitySet_eventGiveAbilities_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KM_GameplayAbilitySet_eventGiveAbilities_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities_Statics::NewProp_AbilitySystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "KM_GAHelper" },
		{ "ModuleRelativePath", "Public/KM_Generated/KM_GameplayAbilitySet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKM_GameplayAbilitySet, nullptr, "GiveAbilities", nullptr, nullptr, sizeof(KM_GameplayAbilitySet_eventGiveAbilities_Parms), Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKM_GameplayAbilitySet_NoRegister()
	{
		return UKM_GameplayAbilitySet::StaticClass();
	}
	struct Z_Construct_UClass_UKM_GameplayAbilitySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Abilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SeiSakuKadai,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKM_GameplayAbilitySet_GiveAbilities, "GiveAbilities" }, // 4108617858
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KM_Generated/KM_GameplayAbilitySet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KM_Generated/KM_GameplayAbilitySet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKM_GameplayAbilityBindInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "AbilitySet" },
		{ "ModuleRelativePath", "Public/KM_Generated/KM_GameplayAbilitySet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKM_GameplayAbilitySet, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::NewProp_Abilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::NewProp_Abilities_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::NewProp_Abilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::NewProp_Abilities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKM_GameplayAbilitySet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::ClassParams = {
		&UKM_GameplayAbilitySet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKM_GameplayAbilitySet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKM_GameplayAbilitySet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKM_GameplayAbilitySet, 2112982428);
	template<> SEISAKUKADAI_API UClass* StaticClass<UKM_GameplayAbilitySet>()
	{
		return UKM_GameplayAbilitySet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKM_GameplayAbilitySet(Z_Construct_UClass_UKM_GameplayAbilitySet, &UKM_GameplayAbilitySet::StaticClass, TEXT("/Script/SeiSakuKadai"), TEXT("UKM_GameplayAbilitySet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKM_GameplayAbilitySet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
