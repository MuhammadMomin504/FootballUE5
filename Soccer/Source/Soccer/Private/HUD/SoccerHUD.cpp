// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/SoccerHUD.h"
#include "HUD/SoccerOverlay.h"
#include "SoccerGameMode.h"
#include "Kismet/GameplayStatics.h"

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
			SetReference();
		}
		mySoccerGameMode = Cast<ASoccerGameMode>(UGameplayStatics::GetGameMode(world));
	}

}

void ASoccerHUD::PauseGameButtonCallBack()
{
	if(mySoccerGameMode)
	{
		mySoccerGameMode->PauseGame();
	}
}

void ASoccerHUD::UnpauseGameButtonCallBack()
{
	if(mySoccerGameMode)
	{
		mySoccerGameMode->UnpauseGame();
	}
}

void ASoccerHUD::SetReference()
{
	if(soccerOverlay)
	{
		soccerOverlay->SetSoccerHUDReference(this);		
	}
	
}
