// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/MinimapOverlay.h"

#include "Components/Image.h"

void UMinimapOverlay::UpdateMinimap(const FVector& worldLocation)
{

	UE_LOG(LogTemp, Warning, TEXT("world location: %s"), *worldLocation.ToString());
}

void UMinimapOverlay::NativeConstruct()
{
	Super::NativeConstruct();
	
}
