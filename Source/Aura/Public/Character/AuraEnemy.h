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
	
	//~ Begin IHoverable Interface
	virtual void OnHoverBegin() override;
	virtual void OnHoverEnd() override;
	//~ End IHoverable Interface
	
protected:
	virtual void BeginPlay() override;
	
};
