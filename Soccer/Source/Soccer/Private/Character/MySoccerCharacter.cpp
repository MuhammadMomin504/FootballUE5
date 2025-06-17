// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/MySoccerCharacter.h"
#include "MyNPC.h"
#include "SoccerGameMode.h"
#include "Kismet/KismetMathLibrary.h"
#include "Chaos/AABBTree.h"
#include "Engine/OverlapResult.h"

// Sets default values
AMySoccerCharacter::AMySoccerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer = EAutoReceiveInput::Player0;

}

// Called when the game starts or when spawned
void AMySoccerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMySoccerCharacter::MoveForward(float Value)
{
	Super::MoveForward(Value);
}

void AMySoccerCharacter::Turn(float Value)
{
	Super::Turn(Value);
	//UE_LOG(LogTemp, Warning, TEXT("Turn"));

}

void AMySoccerCharacter::MoveRight(float Value)
{
	Super::MoveRight(Value);
}

void AMySoccerCharacter::Run(float Value)
{
	Super::Run(Value);
}

void AMySoccerCharacter::PawnEnter()
{
	Super::PawnEnter();
}

void AMySoccerCharacter::PawnExit()
{
	Super::PawnExit();
}

void AMySoccerCharacter::TryPossessNPC()
{
	UE_LOG(LogTemp, Warning, TEXT("E key is pressed"));
	if(canControl && currentNPC)
	{
		soccerGameMode->SwitchPlayerControlsToNPC(Cast<APawn>(currentNPC));
		canControl = false;
		currentNPC = nullptr;
	}
}

// Called every frame
void AMySoccerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//if(canControl)
		CheckProximityToNPC();

}

// Called to bind functionality to input
void AMySoccerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMySoccerCharacter::CheckProximityToBall()
{
}

void AMySoccerCharacter::CheckProximityToNPC()
{

	if (proximityDistance <= 0.f)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid proximity distance: %f"), proximityDistance);
		return;
	}
	TArray<FOverlapResult> overlaps;
	FCollisionShape collisionShape = FCollisionShape::MakeSphere(proximityDistance);

	bool bHit = GetWorld()->OverlapMultiByObjectType(
		overlaps,
		GetActorLocation(),
		FQuat::Identity,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_Pawn),
		collisionShape
	);
	DrawDebugSphere(GetWorld(), GetActorLocation(), proximityDistance, 16, FColor::Green, false, 0.1f);

	if(bHit)
	{
		for (auto& Hit : overlaps)
		{
			currentNPC = Cast<AMyNPC>(Hit.GetActor());
			if(currentNPC)
			{
				float distance = FVector::Dist(GetActorLocation(), currentNPC->GetActorLocation());
				UE_LOG(LogTemp, Warning, TEXT("Distance: %f"), distance);
				
				if(distance <= proximityDistance)
				{
					UE_LOG(LogTemp, Warning, TEXT("NPC is within proximity distance: %f"), proximityDistance);
					//soccerGameMode->SwitchPlayerControlsToNPC(Cast<APawn>(currentNPC));
					canControl = true;
					break;
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("Overlap hit, but NPC is too far: %f"), distance);
					canControl = false;
				}
			}
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Cannot control the NPC"));
	//canControl = false;

	
	// FVector playerCurrentLocation = GetActorLocation();
	// TArray<AActor*> foundNPC;
	// UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyNPC::StaticClass(), foundNPC);
	// for(AActor* actor : foundNPC)
	// {
	// 	if(actor && actor->ActorHasTag("NPC"))
	// 	{
	// 		FVector npcLocation = actor->GetActorLocation();
	// 		float distance = FVector::Dist(playerCurrentLocation, npcLocation);
	// 		if(distance <= proximityDistance)
	// 		{
	// 			UE_LOG(LogTemp, Warning, TEXT("NPC is within proximity distance: %f"), distance);
	// 			if(soccerGameMode)
	// 			{
	// 				soccerGameMode->SwitchPlayerControlsToNPC(this, Cast<APawn>(actor));
	// 				canControl = false;
	// 				break;
	// 			}
	// 		}
	// 	}
	// }

	
}

