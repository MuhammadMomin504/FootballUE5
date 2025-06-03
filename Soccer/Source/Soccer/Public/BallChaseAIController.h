// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BallChaseAIController.generated.h"

/**
 * 
 */

class UBehaviorTree;
class UBlackboardData;

UCLASS()
class SOCCER_API ABallChaseAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	virtual void OnPossess(APawn* InPawn) override;
	UPROPERTY(EditDefaultsOnly)
	UBlackboardComponent* myBlackboard;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "AI")
	UBehaviorTree* behaviorTreeAsset;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	UBlackboardData* blackboardAsset;
	
};
