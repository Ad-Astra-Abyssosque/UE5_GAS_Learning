// Copyright Yoimiya


#include "Character/AuraEnemy.h"

#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "AbilitySystem/AuraAttributeSet.h"

AAuraEnemy::AAuraEnemy()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	
	AbilitySystemComponent = CreateDefaultSubobject<UAuraAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
	
	AttributeSet = CreateDefaultSubobject<UAuraAttributeSet>("AttributeSet");
	
}

void AAuraEnemy::OnHoverBegin()
{
	UE_LOG(LogTemp, Warning, TEXT("OnHoverBegin"));
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(250);
	
	if (Weapon)
	{
		Weapon->SetRenderCustomDepth(true);
		Weapon->SetCustomDepthStencilValue(250);
	}
}

void AAuraEnemy::OnHoverEnd()
{
	UE_LOG(LogTemp, Warning, TEXT("OnHoverEnd"));
	GetMesh()->SetRenderCustomDepth(false);
	GetMesh()->SetCustomDepthStencilValue(0);
	
	if (Weapon)
	{
		Weapon->SetRenderCustomDepth(false);
		Weapon->SetCustomDepthStencilValue(0);
	}
}
