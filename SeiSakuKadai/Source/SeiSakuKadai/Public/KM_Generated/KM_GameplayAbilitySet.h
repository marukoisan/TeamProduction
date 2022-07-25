
// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "Abilities/GameplayAbility.h"
#include "EKM_GameplayAbilityInputBinds.h"
#include "KM_GameplayAbilitySet.generated.h"

class UAbilitySystemComponent;

USTRUCT()
struct FKM_GameplayAbilityBindInfo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, Category = BindInfo)
	EKM_GameplayAbilityInputBinds Command = EKM_GameplayAbilityInputBinds::None;

	UPROPERTY(EditAnywhere, Category = BindInfo)
	TSubclassOf<UGameplayAbility>	GameplayAbilityClass;
};

UCLASS(BlueprintType, Blueprintable)
class SEISAKUKADAI_API UKM_GameplayAbilitySet : public UPrimaryDataAsset
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(EditAnywhere, Category = AbilitySet)
	TArray<FKM_GameplayAbilityBindInfo>	Abilities;

	UFUNCTION(BlueprintCallable, Category = KM_GAHelper)
	void GiveAbilities(UAbilitySystemComponent* AbilitySystemComponent, AActor* Actor) const;
};
