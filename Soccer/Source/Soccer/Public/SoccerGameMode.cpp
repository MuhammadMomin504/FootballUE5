// Copyright Epic Games, Inc. All Rights Reserved.

#include "SoccerGameMode.h"
#include "SoccerCharacter.h"
#include "MyNPC.h"
#include "Character/MySoccerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"

#include "HttpModule.h"
//#include "Interfaces/IHttpRequest.h"
// #include "Interfaces/IHttpResponse.h"
//#include "Http.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "JsonUtils/JsonPointer.h"

ASoccerGameMode::ASoccerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		//DefaultPawnClass = PlayerPawnBPClass.Class;
		DefaultPawnClass = AMySoccerCharacter::StaticClass(); 
	}
	
}

void ASoccerGameMode::SwitchPlayerControlsToNPC(APawn* NewPawn)
{
	
	// if(PC)
	// {
	// 	UE_LOG(LogTemp, Warning, TEXT("my player: %s"), *PC->GetName());
	// }
	//ACharacterMovementController* newPC = NewPawn->GetController<ACharacterMovementController>();
	if(NewPawn)
	{
		if(storedOriginalPlayerController)
		{
			AMyNPC* currentNPC = Cast<AMyNPC>(NewPawn);
			if(currentNPC)
			{
				currentNPC->PawnEnter();
				UE_LOG(LogTemp, Warning, TEXT("Switching player controls to NPC: %s"), *NewPawn->GetName());
				
				storedOriginalPlayerController->UnPossess(); // Unpossess the current pawn
				storedOriginalPlayerController->Possess(NewPawn); // Possess the new pawn

				if(mySoccerCharacter)
				{
					mySoccerCharacter->PawnExit();
				}
				
			}
			//UE_LOG(LogTemp, Warning, TEXT("Switching player controls to NPC"));
		}
		//newPC->PawnEnter();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to switch player controls to NPC"));
	}
	
}

void ASoccerGameMode::BeginPlay()
{
	Super::BeginPlay();

	storedOriginalPlayerController = GetWorld()->GetFirstPlayerController();
	if(storedOriginalPlayerController)
	{
		storedOriginalPawn = storedOriginalPlayerController->GetPawn();
		mySoccerCharacter = Cast<AMySoccerCharacter>(storedOriginalPawn);
		myHUD = storedOriginalPlayerController->GetHUD();
		//PauseGame();
	}
	
	 GetWorldTimerManager().SetTimer(SwitchPawnTimerHandle, this, &ASoccerGameMode::PauseGame, 1.0f, false);
}

void ASoccerGameMode::SwitchToDefaultPawn(APawn* passedNPC)
{
	AMyNPC* currentNPC = Cast<AMyNPC>(passedNPC);
	if(currentNPC)
	{
		storedOriginalPlayerController->UnPossess();
		storedOriginalPlayerController->Possess(storedOriginalPawn);
		currentNPC->PawnExit();
		if(mySoccerCharacter)
			mySoccerCharacter->PawnEnter();
	}
}

void ASoccerGameMode::PauseGame()
{
	if(storedOriginalPlayerController)
	{
		storedOriginalPlayerController->SetPause(true);
	}
}

void ASoccerGameMode::UnpauseGame()
{
	if(storedOriginalPlayerController)
	{
		storedOriginalPlayerController->SetPause(false);
	}
}

