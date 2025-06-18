// Fill out your copyright notice in the Description page of Project Settings.


#include "BallChaseAIController.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

ABallChaseAIController::ABallChaseAIController()
{
	UE_LOG(LogTemp, Warning, TEXT("BallChasingAIController created"));
}

void ABallChaseAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	myBlackboard = GetBlackboardComponent();
	UE_LOG(LogTemp, Warning, TEXT("chasing ball"));

	if (UseBlackboard(blackboardAsset, myBlackboard))
	{
		RunBehaviorTree(behaviorTreeAsset);
		UE_LOG(LogTemp, Warning, TEXT("Runnnnn"));
	}
}
