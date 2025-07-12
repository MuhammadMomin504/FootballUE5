// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SoccerOverlay.generated.h"

class UMySignUpLoginAPI;
class UEditableTextBox;
class UButton;
class UCanvasPanel;
class ASoccerHUD;

UCLASS()
class SOCCER_API USoccerOverlay : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta=(BindWidget))
	UButton* SignupButton;

	UPROPERTY(meta=(BindWidget))
	UEditableTextBox* emailTextField;

	UPROPERTY(meta=(BindWidget))
	UEditableTextBox* passwordTextField;

	UFUNCTION()
	void ShowLoginPanel(bool shouldShow);

	UFUNCTION()
	void SetSoccerHUDReference(ASoccerHUD* passedSoccerHUD);


private:
	UFUNCTION()
	void OnSignupButtonClicked();

	UPROPERTY()
	ASoccerHUD* mySoccerHUD;

	
protected:
	virtual void NativeConstruct() override;

	UPROPERTY()
	UMySignUpLoginAPI* mySignUpLoginAPI;

	UPROPERTY(meta = (BindWidget))
	UCanvasPanel* SSignupPanel;
};
