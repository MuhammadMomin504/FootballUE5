// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SoccerOverlay.generated.h"

class ASoccerGameMode;
class UMySignUpLoginAPI;

UCLASS()
class SOCCER_API USoccerOverlay : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta=(BindWidget))
	class UButton* SignupButton;


private:
	UFUNCTION()
	void OnSignupButtonClicked();

	
protected:
	virtual void NativeConstruct() override;

	UPROPERTY()
	UMySignUpLoginAPI* mySignUpLoginAPI;
	

	
	
};
