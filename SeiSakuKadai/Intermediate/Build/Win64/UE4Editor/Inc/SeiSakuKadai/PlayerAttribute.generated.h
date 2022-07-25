// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef SEISAKUKADAI_PlayerAttribute_generated_h
#error "PlayerAttribute.generated.h already included, missing '#pragma once' in PlayerAttribute.h"
#endif
#define SEISAKUKADAI_PlayerAttribute_generated_h

#define SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_SPARSE_DATA
#define SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Stamina);


#define SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Stamina);


#define SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAttribute(); \
	friend struct Z_Construct_UClass_UPlayerAttribute_Statics; \
public: \
	DECLARE_CLASS(UPlayerAttribute, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeiSakuKadai"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAttribute) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Stamina=NETFIELD_REP_START, \
		NETFIELD_REP_END=Stamina	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UPlayerAttribute) \
public:


#define SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerAttribute(); \
	friend struct Z_Construct_UClass_UPlayerAttribute_Statics; \
public: \
	DECLARE_CLASS(UPlayerAttribute, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeiSakuKadai"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAttribute) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Stamina=NETFIELD_REP_START, \
		NETFIELD_REP_END=Stamina	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UPlayerAttribute) \
public:


#define SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAttribute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAttribute) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAttribute); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAttribute); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAttribute(UPlayerAttribute&&); \
	NO_API UPlayerAttribute(const UPlayerAttribute&); \
public:


#define SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAttribute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAttribute(UPlayerAttribute&&); \
	NO_API UPlayerAttribute(const UPlayerAttribute&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAttribute); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAttribute); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAttribute)


#define SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_PRIVATE_PROPERTY_OFFSET
#define SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_15_PROLOG
#define SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_PRIVATE_PROPERTY_OFFSET \
	SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_SPARSE_DATA \
	SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_RPC_WRAPPERS \
	SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_INCLASS \
	SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_PRIVATE_PROPERTY_OFFSET \
	SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_SPARSE_DATA \
	SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_INCLASS_NO_PURE_DECLS \
	SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEISAKUKADAI_API UClass* StaticClass<class UPlayerAttribute>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SeiSakuKadai_Source_SeiSakuKadai_Public_KM_GAAttributes_PlayerAttribute_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
