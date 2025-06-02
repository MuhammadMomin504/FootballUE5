// Copyright Epic Games, Inc. All Rights Reserved.

#include "SoccerGameMode.h"
#include "SoccerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASoccerGameMode::ASoccerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
