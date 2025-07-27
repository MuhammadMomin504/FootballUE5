// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MiniMapHUD.generated.h"

class UMinimapOverlay;
class ASoccerGameMode;

UCLASS()
class SOCCER_API AMiniMapHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASoccerGameMode* mySoccerGameMode;

	void WorldToMiniMap(const FVector& worldLocation);

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditDefaultsOnly, Category = "MiniMap HUD")
	TSubclassOf<UMinimapOverlay> minimapOverlayClass;

	UPROPERTY()
	UMinimapOverlay* minimapOverlay;

private:
	
	
};
