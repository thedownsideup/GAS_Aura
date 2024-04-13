
#include "AbilitySystem/AuraAttributeSet.h"
#include "AblitySystemComponent.h"

UAuraAttributeSet::UAuraAttributeSet()
{
}

void UAuraAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTIRUBUTE_REPNOTIFY(UAuraAttributeSet, Health, OldHealth);
}
