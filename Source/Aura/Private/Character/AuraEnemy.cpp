// Copyright Yoimiya


#include "Character/AuraEnemy.h"

AAuraEnemy::AAuraEnemy()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
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
