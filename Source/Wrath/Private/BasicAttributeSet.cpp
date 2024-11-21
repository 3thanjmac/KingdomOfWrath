// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicAttributeSet.h"

void UBasicAttributeSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
    /** Health Clamp */
    if (Attribute == GetHealthAttribute())
    {
        NewValue = FMath::Clamp(NewValue, 0, MaxHealth.GetBaseValue());
    }
    /** Shadow Hearts Clamp */
    else if (Attribute == GetShadowHeartsAttribute())
    {
        NewValue = FMath::Clamp(NewValue, 0, MaxShadowHearts.GetBaseValue());
    }
    /** Stun Clamp */
    else if (Attribute == GetStunAttribute())
    {
        NewValue = FMath::Clamp(NewValue, 0, MaxStun.GetBaseValue());
    }
}