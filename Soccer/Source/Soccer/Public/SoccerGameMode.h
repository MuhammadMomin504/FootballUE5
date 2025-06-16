// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SoccerGameMode.generated.h"

class AMyNPC;
class ACharacterMovementController;

UCLASS(minimalapi)

//UCLASS()
class ASoccerGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASoccerGameMode();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gameplay Settings")
	APawn* NPCPawnClass;

	UPROPERTY()
	APlayerController* storedOriginalPlayerController = nullptr;

	UPROPERTY()
	APawn* storedOriginalPawn = nullptr;
	
	UFUNCTION()
	void SwitchPlayerControlsToNPC(APawn* NewPawn);

protected:

	virtual void BeginPlay() override;
	
	UFUNCTION()
	void SwitchToNewPawn();


private:
	FTimerHandle SwitchPawnTimerHandle;

};




