// Fill out your copyright notice in the Description page of Project Settings.


#include "BallChaseAIController.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

ABallChaseAIController::ABallChaseAIController()
{
	UE_LOG(LogTemp, Warning, TEXT("BallChasingAIController created"));
}

void ABallChaseAIController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("BallChasingAIController beginplay"));
}

void ABallChaseAIController::OnPossess(APawn* InPawn)
{
	if (!behaviorTreeAsset || !blackboardAsset)
	{
		UE_LOG(LogTemp, Error, TEXT("Missing BT or Blackboard asset!"));
		return;
	}
	Super::OnPossess(InPawn);

	myBlackboard = GetBlackboardComponent();
	UE_LOG(LogTemp, Warning, TEXT("chasing ball"));

	if (UseBlackboard(blackboardAsset, myBlackboard))
	{
		RunBehaviorTree(behaviorTreeAsset);
		UE_LOG(LogTemp, Warning, TEXT("Runnnnn"));
	}

	
}
