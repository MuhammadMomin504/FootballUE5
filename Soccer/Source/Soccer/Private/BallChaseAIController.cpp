// Fill out your copyright notice in the Description page of Project Settings.


#include "BallChaseAIController.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

void ABallChaseAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	myBlackboard = GetBlackboardComponent();

	if (UseBlackboard(blackboardAsset, myBlackboard))
	{
		RunBehaviorTree(behaviorTreeAsset);
	}
}