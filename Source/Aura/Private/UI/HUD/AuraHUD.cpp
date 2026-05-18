// Copyright Yoimiya


#include "UI/HUD/AuraHUD.h"
#include "UI/Widget/AuraUserWidget.h"

void AAuraHUD::BeginPlay()
{
	Super::BeginPlay();
	if (IsValid(OverlayWidgetClass))
	{
		UUserWidget* Widget = CreateWidget(GetWorld(), OverlayWidgetClass);
		Widget->AddToViewport();
	}

}
