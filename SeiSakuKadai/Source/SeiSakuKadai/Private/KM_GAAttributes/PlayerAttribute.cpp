
#include "KM_GAAttributes/PlayerAttribute.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"

void UPlayerAttribute::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)
{
	UAttributeSet::PostGameplayEffectExecute(Data);
	
	if (Data.EvaluatedData.Attribute == GetStaminaAttribute()) {
		SetStamina(FMath::Clamp(GetStamina(), 20.000000f, 999999.f));
	}

}


void UPlayerAttribute::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerAttribute, Stamina, COND_None, REPNOTIFY_Always);

}


void UPlayerAttribute::OnRep_Stamina(const FGameplayAttributeData& oldValue)
{
	static FProperty* ThisProperty = FindFieldChecked<FProperty>(UPlayerAttribute::StaticClass(), GET_MEMBER_NAME_CHECKED(UPlayerAttribute, Stamina)); 
	GetTargetComponent()->SetBaseAttributeValueFromReplication(FGameplayAttribute(ThisProperty), Stamina, oldValue); 
}


