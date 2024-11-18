// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicAttributeSet.h"

void UBasicAttributeSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
    /** Shadow Hearts Clamp */
    if (Attribute == GetShadowHeartsAttribute())
    {
        NewValue = FMath::Clamp(NewValue, 0, MaxShadowHearts.GetBaseValue());
    }
    /** Health Clamp */
    else if (Attribute == GetHealthAttribute())
    {
        NewValue = FMath::Clamp(NewValue, 0, MaxHealth.GetBaseValue());
    }
}