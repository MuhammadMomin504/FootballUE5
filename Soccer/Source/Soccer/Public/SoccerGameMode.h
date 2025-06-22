// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SoccerGameMode.generated.h"

class AMyNPC;
class ACharacterMovementController;
class AMySoccerCharacter;

UCLASS(minimalapi)

//UCLASS()
class ASoccerGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASoccerGameMode();

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gameplay Settings")

	UPROPERTY()
	APlayerController* storedOriginalPlayerController = nullptr;

	UPROPERTY()
	APawn* storedOriginalPawn = nullptr;
	
	UFUNCTION()
	void SwitchPlayerControlsToNPC(APawn* NewPawn);

protected:

	virtual void BeginPlay() override;



private:
	FTimerHandle SwitchPawnTimerHandle;

	void SwitchToDefaultPawn();

};




