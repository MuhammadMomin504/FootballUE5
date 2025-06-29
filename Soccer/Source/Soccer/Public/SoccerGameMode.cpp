// Copyright Epic Games, Inc. All Rights Reserved.

#include "SoccerGameMode.h"
#include "SoccerCharacter.h"
#include "MyNPC.h"
#include "Character/MySoccerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"

#include "HttpModule.h"
//#include "Interfaces/IHttpRequest.h"
// #include "Interfaces/IHttpResponse.h"
//#include "Http.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "JsonUtils/JsonPointer.h"

ASoccerGameMode::ASoccerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		//DefaultPawnClass = PlayerPawnBPClass.Class;
		DefaultPawnClass = AMySoccerCharacter::StaticClass(); 
	}
	
}

void ASoccerGameMode::SwitchPlayerControlsToNPC(APawn* NewPawn)
{
	
	// if(PC)
	// {
	// 	UE_LOG(LogTemp, Warning, TEXT("my player: %s"), *PC->GetName());
	// }
	//ACharacterMovementController* newPC = NewPawn->GetController<ACharacterMovementController>();
	if(NewPawn)
	{
		if(storedOriginalPlayerController)
		{
			AMyNPC* currentNPC = Cast<AMyNPC>(NewPawn);
			if(currentNPC)
			{
				currentNPC->PawnEnter();
				UE_LOG(LogTemp, Warning, TEXT("Switching player controls to NPC: %s"), *NewPawn->GetName());
				
				storedOriginalPlayerController->UnPossess(); // Unpossess the current pawn
				storedOriginalPlayerController->Possess(NewPawn); // Possess the new pawn

				if(mySoccerCharacter)
				{
					mySoccerCharacter->PawnExit();
				}
				
			}
			//UE_LOG(LogTemp, Warning, TEXT("Switching player controls to NPC"));
		}
		//newPC->PawnEnter();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to switch player controls to NPC"));
	}
	
}

void ASoccerGameMode::BeginPlay()
{
	Super::BeginPlay();

	storedOriginalPlayerController = GetWorld()->GetFirstPlayerController();
	if(storedOriginalPlayerController)
	{
		storedOriginalPawn = storedOriginalPlayerController->GetPawn();
		mySoccerCharacter = Cast<AMySoccerCharacter>(storedOriginalPawn);
	}

	SendSignUpRequest();
	
	// GetWorldTimerManager().SetTimer(SwitchPawnTimerHandle, this, &ASoccerGameMode::SwitchToNewPawn, 5.0f, false);
}

void ASoccerGameMode::SendSignUpRequest()
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

void ASoccerGameMode::OnSignupResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (!bWasSuccessful || !Response.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Signup request failed"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("Signup response: %s"), *Response->GetContentAsString());
}


void ASoccerGameMode::SendLoginRequest()
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

	//HttpRequest->OnProcessRequestComplete().BindUObject(this, &YourClass::OnLoginResponseReceived);
	HttpRequest->ProcessRequest();
}

void ASoccerGameMode::OnLoginResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
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

void ASoccerGameMode::SwitchToDefaultPawn(APawn* passedNPC)
{
	AMyNPC* currentNPC = Cast<AMyNPC>(passedNPC);
	if(currentNPC)
	{
		storedOriginalPlayerController->UnPossess();
		storedOriginalPlayerController->Possess(storedOriginalPawn);
		currentNPC->PawnExit();
		if(mySoccerCharacter)
			mySoccerCharacter->PawnEnter();
	}
}

