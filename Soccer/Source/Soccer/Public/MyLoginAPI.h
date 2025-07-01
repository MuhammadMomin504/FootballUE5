// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "HttpFwd.h"
#include "Interfaces/IHttpResponse.h"
#include "CoreMinimal.h"

/**
 * 
 */
class SOCCER_API MyLoginAPI
{
public:
	MyLoginAPI();
	~MyLoginAPI();



	void SendSignUpRequest();
	void OnSignupResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void SendLoginRequest();
	void OnLoginResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
