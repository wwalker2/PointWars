// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "BaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class POINTWARS_API ABaseAIController : public AAIController
{
	GENERATED_BODY()
	
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category = "Behaviour Tree")
	UBehaviorTree * BTAsset;
};
