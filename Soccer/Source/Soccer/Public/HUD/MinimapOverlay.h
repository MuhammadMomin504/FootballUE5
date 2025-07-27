// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MinimapOverlay.generated.h"

class UImage;
/**
 * 
 */
UCLASS()
class SOCCER_API UMinimapOverlay : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta=(BindWidget))
	UImage* PlayerPointer;

	void UpdateMinimap(const FVector& worldLocation);

protected:
	virtual void NativeConstruct() override;
	
};
