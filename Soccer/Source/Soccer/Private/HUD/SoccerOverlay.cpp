// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/SoccerOverlay.h"
#include "MySignUpLoginAPI.h"

#include "Components/Button.h"
#include "Components/EditableTextBox.h"

void USoccerOverlay::OnSignupButtonClicked()
{
	if(!mySignUpLoginAPI || !emailTextField || !passwordTextField)
	{
		UE_LOG(LogTemp, Error, TEXT("SignUp API or TextFields are not initialized"));
		return;
	}

	FString email = emailTextField->GetText().ToString();
	FString password = passwordTextField->GetText().ToString();
	
	if(mySignUpLoginAPI)
	{
		mySignUpLoginAPI->SendSignUpRequest(email, password);
	}
	
}

void USoccerOverlay::NativeConstruct()
{
	Super::NativeConstruct();
	
	if(SignupButton)
	{
		SignupButton->OnClicked.AddDynamic(this, &USoccerOverlay::OnSignupButtonClicked);
	}
	if(!mySignUpLoginAPI)
	{
		mySignUpLoginAPI = NewObject<UMySignUpLoginAPI>();
	}

}
