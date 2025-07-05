// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/SoccerHUD.h"
#include "HUD/SoccerOverlay.h"
#include "SoccerGameMode.h"

#include "Blueprint/UserWidget.h"

void ASoccerHUD::BeginPlay()
{
	Super::BeginPlay();
	UWorld* world = GetWorld();
	if(world)
	{
		APlayerController* controller = world->GetFirstPlayerController();
		if(controller)
		{
			soccerOverlay = CreateWidget<USoccerOverlay>(controller, soccerOverlayClass);
			soccerOverlay->AddToViewport();
		}
	}

}
