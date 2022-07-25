
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "KM_AttributeSetMacros.h"
#include "PlayerAttribute.generated.h"
/**
 * 
 */
UCLASS()
class SEISAKUKADAI_API UPlayerAttribute : public UAttributeSet
{
	GENERATED_BODY()
public:
	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data);
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;
	UAbilitySystemComponent* GetTargetComponent() { if (mTargetComponent != nullptr) { return mTargetComponent; } mTargetComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(GetOwningActor(), true); return mTargetComponent; }

	UPROPERTY(Category = "GPAAttributes", EditAnywhere, BlueprintReadWrite, ReplicatedUsing="OnRep_Stamina")
	FGameplayAttributeData Stamina{ 20.000000f };
	KM_ATTRIBUTE_ACCESSORS(UPlayerAttribute, Stamina);
	UFUNCTION()
	virtual void OnRep_Stamina(const FGameplayAttributeData& OldValue);

private:
	UAbilitySystemComponent* mTargetComponent{ nullptr };
};
