// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeiSakuKadai/Public/KM_Generated/EKM_GameplayAbilityInputBinds.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEKM_GameplayAbilityInputBinds() {}
// Cross Module References
	SEISAKUKADAI_API UEnum* Z_Construct_UEnum_SeiSakuKadai_EKM_GameplayAbilityInputBinds();
	UPackage* Z_Construct_UPackage__Script_SeiSakuKadai();
// End Cross Module References
	static UEnum* EKM_GameplayAbilityInputBinds_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SeiSakuKadai_EKM_GameplayAbilityInputBinds, Z_Construct_UPackage__Script_SeiSakuKadai(), TEXT("EKM_GameplayAbilityInputBinds"));
		}
		return Singleton;
	}
	template<> SEISAKUKADAI_API UEnum* StaticEnum<EKM_GameplayAbilityInputBinds>()
	{
		return EKM_GameplayAbilityInputBinds_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKM_GameplayAbilityInputBinds(EKM_GameplayAbilityInputBinds_StaticEnum, TEXT("/Script/SeiSakuKadai"), TEXT("EKM_GameplayAbilityInputBinds"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SeiSakuKadai_EKM_GameplayAbilityInputBinds_Hash() { return 396887216U; }
	UEnum* Z_Construct_UEnum_SeiSakuKadai_EKM_GameplayAbilityInputBinds()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SeiSakuKadai();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKM_GameplayAbilityInputBinds"), 0, Get_Z_Construct_UEnum_SeiSakuKadai_EKM_GameplayAbilityInputBinds_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKM_GameplayAbilityInputBinds::None", (int64)EKM_GameplayAbilityInputBinds::None },
				{ "EKM_GameplayAbilityInputBinds::Jump", (int64)EKM_GameplayAbilityInputBinds::Jump },
				{ "EKM_GameplayAbilityInputBinds::ResetVR", (int64)EKM_GameplayAbilityInputBinds::ResetVR },
				{ "EKM_GameplayAbilityInputBinds::Dash", (int64)EKM_GameplayAbilityInputBinds::Dash },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Dash.Name", "EKM_GameplayAbilityInputBinds::Dash" },
				{ "Jump.Name", "EKM_GameplayAbilityInputBinds::Jump" },
				{ "ModuleRelativePath", "Public/KM_Generated/EKM_GameplayAbilityInputBinds.h" },
				{ "None.Name", "EKM_GameplayAbilityInputBinds::None" },
				{ "ResetVR.Name", "EKM_GameplayAbilityInputBinds::ResetVR" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SeiSakuKadai,
				nullptr,
				"EKM_GameplayAbilityInputBinds",
				"EKM_GameplayAbilityInputBinds",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
