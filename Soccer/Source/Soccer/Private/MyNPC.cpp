// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNPC.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/PawnSensingComponent.h"

#include "AIController.h"


//#include "Runtime/AIModule/Classes/AIController.h"

// #include "NavigationSystem.h"



// Sets default values
AMyNPC::AMyNPC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	pawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComponent"));
	GetMesh()->SetCollisionObjectType(ECollisionChannel:: ECC_WorldDynamic);
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	GetMesh()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	GetMesh()->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void AMyNPC::BeginPlay()
{
	Super::BeginPlay();
	
	// myCharacter = Cast<ACharacter>(GetOwner());
	// if(myCharacter)
	// 	myAIController = Cast<AAIController>(myCharacter->GetController());
	//
	// if(myAIController)
	// {
	// 	//myAIController->Move
	// }//
	
	
}

void AMyNPC::MoveForward(float Value)
{
	Super::MoveForward(Value);
}

void AMyNPC::Turn(float Value)
{
	Super::Turn(Value);
}

void AMyNPC::MoveRight(float Value)
{
	Super::MoveRight(Value);
}

void AMyNPC::Run(float Value)
{
	Super::Run(Value);
}

// Called every frame
void AMyNPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyNPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

