// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SoccerHUD.generated.h"

class USoccerOverlay;
class ASoccerGameMode;

UCLASS()
class SOCCER_API ASoccerHUD : public AHUD
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditDefaultsOnly, Category ="Soccer HUD")
	TSubclassOf<USoccerOverlay> soccerOverlayClass;
	UPROPERTY()
	USoccerOverlay* soccerOverlay;
	ASoccerGameMode* mySoccerGameMode;

public:

	void PauseGameButtonCallBack();
	void UnpauseGameButtonCallBack();
	void SetReference();

};

