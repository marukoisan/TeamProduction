
// Fill out your copyright notice in the Description page of Project Settings.

#include "KM_Generated/KM_GameplayAbilitySet.h"
#include "AbilitySystemComponent.h"

UKM_GameplayAbilitySet::UKM_GameplayAbilitySet(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UKM_GameplayAbilitySet::GiveAbilities(UAbilitySystemComponent* AbilitySystemComponent, AActor* Actor) const
{
	for (const FKM_GameplayAbilityBindInfo& BindInfo : Abilities)
	{
		if (BindInfo.GameplayAbilityClass)
		{
			AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(BindInfo.GameplayAbilityClass, 1, (int32)BindInfo.Command));
		}
	}
	AbilitySystemComponent->BindAbilityActivationToInputComponent(Actor->InputComponent,
		FGameplayAbilityInputBinds(FString(""), FString(""), FString("EKM_GameplayAbilityInputBinds")));
}
