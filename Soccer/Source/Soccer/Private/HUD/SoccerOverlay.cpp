// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/SoccerOverlay.h"
#include "MySignUpLoginAPI.h"

#include "Components/Button.h"

void USoccerOverlay::OnSignupButtonClicked()
{
	// if(myLoginAPI)
	// {
	// 	myLoginAPI->SendSignUpRequest();
	// }
	
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
