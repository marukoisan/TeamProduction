
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#define KM_GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) 	static FGameplayAttribute Get##PropertyName##Attribute() 	{ 		static FProperty* Prop = FindFieldChecked<FProperty>(ClassName::StaticClass(), GET_MEMBER_NAME_CHECKED(ClassName, PropertyName)); 		return Prop; 	}

#define KM_GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) 	FORCEINLINE float Get##PropertyName() const 	{ 		return PropertyName.GetCurrentValue(); 	}

#define KM_GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) 	FORCEINLINE void Set##PropertyName(float NewVal) 	{ 		UAbilitySystemComponent* AbilityComp = GetTargetComponent(); 		if (ensure(AbilityComp)) 		{ 			AbilityComp->SetNumericAttributeBase(Get##PropertyName##Attribute(), NewVal); 		}; 	}

#define KM_GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName) 	FORCEINLINE void Init##PropertyName(float NewVal) 	{ 		PropertyName.SetBaseValue(NewVal); 		PropertyName.SetCurrentValue(NewVal); 	}

#define KM_ATTRIBUTE_ACCESSORS(ClassName, PropertyName) 	KM_GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) 	KM_GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) 	KM_GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) 	KM_GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
