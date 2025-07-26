// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/MiniMapHUD.h"
#include "Kismet/GameplayStatics.h"
#include "SoccerGameMode.h"
#include "SoccerCharacter.h"
#include "HUD/MinimapOverlay.h"

#include "Blueprint/UserWidget.h"
#include "Character/MySoccerCharacter.h"

void AMiniMapHUD::BeginPlay()
{
	Super::BeginPlay();
	if(!minimapOverlayClass)
	{
		UE_LOG(LogTemp, Error, TEXT("Minimap Overlay Class is not set!"));
		return;
	}
	UE_LOG(LogTemp, Error, TEXT("Minimap Overlay Class has been setup!"));

	UWorld* world = GetWorld();
	if(world)
	{
		APlayerController* controller = world->GetFirstPlayerController();
		if(controller)
		{
			minimapOverlay = CreateWidget<UMinimapOverlay>(controller, minimapOverlayClass);
			minimapOverlay->AddToViewport();
			UE_LOG(LogTemp, Warning, TEXT("MiniMap Overlay added to viewport"));
			APawn* pawn = controller->GetPawn();

			if(pawn)
			{
				playerCharacter = Cast<AMySoccerCharacter>(pawn);
				if(playerCharacter)
				{
					UE_LOG(LogTemp, Warning, TEXT("Got player character"));
					//mySoccerGameMode = Cast<ASoccerGameMode>(UGameplayStatics::GetGameMode(world));
					FVector playerLocation = playerCharacter->GetActorLocation();
					UE_LOG(LogTemp, Warning, TEXT("Player Location: %s"), *playerLocation.ToString());
					
				}
			}
		}
	}

	
}
