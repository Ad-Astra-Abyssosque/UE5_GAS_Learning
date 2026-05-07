// Copyright Yoimiya

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/Hoverable.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IHoverable
{
	GENERATED_BODY()
	
public:
	AAuraEnemy();
	
	virtual void OnHoverBegin() override;
	
	virtual void OnHoverEnd() override;
	
};
