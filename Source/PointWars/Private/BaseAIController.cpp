// Fill out your copyright notice in the Description page of Project Settings.

#include "PointWars.h"
#include "BaseAIController.h"

void ABaseAIController::BeginPlay()
{
	Super::BeginPlay();
	RunBehaviorTree(BTAsset);
}
