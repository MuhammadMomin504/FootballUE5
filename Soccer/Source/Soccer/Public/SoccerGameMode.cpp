// Copyright Epic Games, Inc. All Rights Reserved.

#include "SoccerGameMode.h"
#include "SoccerCharacter.h"
#include "MyNPC.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"

ASoccerGameMode::ASoccerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
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
			storedOriginalPlayerController->UnPossess(); // Unpossess the current pawn
			storedOriginalPlayerController->Possess(NewPawn); // Possess the new pawn
			UE_LOG(LogTemp, Warning, TEXT("Switching player controls to NPC"));
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
	}
	// TArray<AActor*> FoundNPCs;
	// UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawn::StaticClass(), FoundNPCs);
	//
	// for (AActor* Actor : FoundNPCs)
	// {
	// 	if (Actor->GetName().Contains("BP_NPC"))
	// 	{
	// 		NPCPawnClass = Cast<APawn>(Actor);
	// 		break;
	// 	}
	// }
	//
	// GetWorldTimerManager().SetTimer(SwitchPawnTimerHandle, this, &ASoccerGameMode::SwitchToNewPawn, 5.0f, false);
}

void ASoccerGameMode::SwitchToNewPawn()
{
	UE_LOG(LogTemp, Warning, TEXT("Switching to new pawn"));
	APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
	if (PC && NPCPawnClass)
	{
		APawn* CurrentPawn = PC->GetPawn();
		if (CurrentPawn)
		{
			FVector Location = CurrentPawn->GetActorLocation();
			FRotator Rotation = CurrentPawn->GetActorRotation();
			PC->Possess(NPCPawnClass);
			

			// Spawn and possess the new pawn
			// APawn* NewPawn = GetWorld()->SpawnActor<APawn>(NPCPawnClass, Location, Rotation);
			// if (NewPawn)
			// {
			// 	PC->Possess(NewPawn);
			// }
		}
	}
}
