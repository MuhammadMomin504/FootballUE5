// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HttpFwd.h"
#include "Interfaces/IHttpResponse.h"
#include "UObject/NoExportTypes.h"
#include "MySignUpLoginAPI.generated.h"

/**
 * 
 */
UCLASS()
class SOCCER_API UMySignUpLoginAPI : public UObject
{
	GENERATED_BODY()

public:
	void SendSignUpRequest();
	void OnSignupResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void SendLoginRequest();
	void OnLoginResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	
};
