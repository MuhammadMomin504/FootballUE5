// Fill out your copyright notice in the Description page of Project Settings.

#include "HttpModule.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "JsonUtils/JsonPointer.h"
#include "UObject/ConstructorHelpers.h"
#include "MyLoginAPI.h"

MyLoginAPI::MyLoginAPI()
{
	
}

MyLoginAPI::~MyLoginAPI()
{
}

void MyLoginAPI::SendSignUpRequest()
{
	UE_LOG(LogTemp, Warning, TEXT("Signup Request Called"));
	TSharedPtr<FJsonObject> jsonObject = MakeShareable(new FJsonObject());
	jsonObject->SetStringField(TEXT("name"), "John Doe");
	jsonObject->SetStringField(TEXT("email"), "john154654@example.com");
	jsonObject->SetStringField(TEXT("password"), "password123");

	FString requestBody;
	TSharedRef<TJsonWriter<>> writer = TJsonWriterFactory<>::Create(&requestBody);
	FJsonSerializer::Serialize(jsonObject.ToSharedRef(), writer);

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->SetURL("https://auth-server-production-0171.up.railway.app/api/auth/signup");
	HttpRequest->SetVerb("POST");
	HttpRequest->SetHeader("Content-Type", "application/json");
	HttpRequest->SetContentAsString(requestBody);

	HttpRequest->OnProcessRequestComplete().BindLambda([](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
	{
		if (!bWasSuccessful || !Response.IsValid())
		{
			UE_LOG(LogTemp, Error, TEXT("Signup request failed."));
			return;
		}
	
		FString ResponseString = Response->GetContentAsString();
		UE_LOG(LogTemp, Warning, TEXT("Signup Response: %s"), *ResponseString);
	});
	//HttpRequest->OnProcessRequestComplete().BindUObject(this, &ASoccerGameMode::OnSignupResponseReceived);
	HttpRequest->ProcessRequest();
	UE_LOG(LogTemp, Warning, TEXT("Signup Request Proceeded"));
}

void MyLoginAPI::OnSignupResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (!bWasSuccessful || !Response.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Signup request failed"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("Signup response: %s"), *Response->GetContentAsString());
}

void MyLoginAPI::SendLoginRequest()
{
	TSharedPtr<FJsonObject> jsonObject = MakeShareable(new FJsonObject());
	jsonObject->SetStringField(TEXT("email"), "john@example.com");
	jsonObject->SetStringField(TEXT("password"), "password123");

	FString RequestBody;
	TSharedRef<TJsonWriter<>> writer = TJsonWriterFactory<>::Create(&RequestBody);
	FJsonSerializer::Serialize(jsonObject.ToSharedRef(), writer);

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->SetURL("https://auth-server-production-0171.up.railway.app/api/auth/login");
	HttpRequest->SetVerb("POST");
	HttpRequest->SetHeader("Content-Type", "application/json");
	HttpRequest->SetContentAsString(RequestBody);

	HttpRequest->OnProcessRequestComplete().BindLambda([](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
	{
		if (!bWasSuccessful || !Response.IsValid())
		{
			UE_LOG(LogTemp, Error, TEXT("Sign in request failed."));
			return;
		}
	
		FString ResponseString = Response->GetContentAsString();
		UE_LOG(LogTemp, Warning, TEXT("Sign in Response: %s"), *ResponseString);
	});

	//HttpRequest->OnProcessRequestComplete().BindUObject(this, &YourClass::OnLoginResponseReceived);
	HttpRequest->ProcessRequest();
}

void MyLoginAPI::OnLoginResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (!bWasSuccessful || !Response.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Login request failed"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("Login response: %s"), *Response->GetContentAsString());

	// Optionally parse token from JSON response
	TSharedPtr<FJsonObject> JsonResponse;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

	if (FJsonSerializer::Deserialize(Reader, JsonResponse) && JsonResponse.IsValid())
	{
		FString Token = JsonResponse->GetStringField(TEXT("token"));  // Adjust field name based on actual response
		UE_LOG(LogTemp, Warning, TEXT("Received Token: %s"), *Token);
	}
}
