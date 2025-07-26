// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "SoccerGameMode.generated.h"

class AFootball;
class AAIController;
class AMyNPC;
class ACharacterMovementController;
class AMySoccerCharacter;
class AMiniMapHUD;


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

	UPROPERTY()
	AHUD* myHUD;
	
	UFUNCTION()
	void SwitchPlayerControlsToNPC(APawn* NewPawn);

	void SwitchToDefaultPawn(APawn* passedNPC);

	void PauseGame();
	void UnpauseGame();

	AFootball* footballReference;

	AMiniMapHUD* miniMapHUD;

	UPROPERTY(EditAnywhere, Category="AI")
	TSubclassOf<AAIController> BallChaseAIControllerBPClass;

protected:

	virtual void BeginPlay() override;




private:
	FTimerHandle SwitchPawnTimerHandle;
	AMySoccerCharacter* mySoccerCharacter;

};




