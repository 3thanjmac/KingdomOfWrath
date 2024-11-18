// Fill out your copyright notice in the Description page of Project Settings.


#include "KOWCharacter.h"
#include "AbilitySystemComponent.h"
#include "BasicAttributeSet.h"

AKOWCharacter::AKOWCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilityComponent"));
}

void AKOWCharacter::BeginPlay()
{
	Super::BeginPlay();

	if(IsValid(AbilitySystemComponent))
	{
		BasicAttributeSet = AbilitySystemComponent->GetSet<UBasicAttributeSet>();
	}
}

void AKOWCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}