// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeiSakuKadai/Public/Player_Staminagauge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Staminagauge() {}
// Cross Module References
	SEISAKUKADAI_API UClass* Z_Construct_UClass_APlayer_Staminagauge_NoRegister();
	SEISAKUKADAI_API UClass* Z_Construct_UClass_APlayer_Staminagauge();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SeiSakuKadai();
// End Cross Module References
	void APlayer_Staminagauge::StaticRegisterNativesAPlayer_Staminagauge()
	{
	}
	UClass* Z_Construct_UClass_APlayer_Staminagauge_NoRegister()
	{
		return APlayer_Staminagauge::StaticClass();
	}
	struct Z_Construct_UClass_APlayer_Staminagauge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer_Staminagauge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SeiSakuKadai,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Staminagauge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player_Staminagauge.h" },
		{ "ModuleRelativePath", "Public/Player_Staminagauge.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_Staminagauge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_Staminagauge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer_Staminagauge_Statics::ClassParams = {
		&APlayer_Staminagauge::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayer_Staminagauge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Staminagauge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer_Staminagauge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer_Staminagauge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_Staminagauge, 3059195818);
	template<> SEISAKUKADAI_API UClass* StaticClass<APlayer_Staminagauge>()
	{
		return APlayer_Staminagauge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_Staminagauge(Z_Construct_UClass_APlayer_Staminagauge, &APlayer_Staminagauge::StaticClass, TEXT("/Script/SeiSakuKadai"), TEXT("APlayer_Staminagauge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Staminagauge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
