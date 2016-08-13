// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "ControlPoint.generated.h"

UCLASS()
class POINTWARS_API AControlPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AControlPoint();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(EditAnywhere)
		USphereComponent* SphereComponent;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere, Category = "Time")
		int32 CountDownTime;

	
private:
	void PersonIsOnPoint();

	UPROPERTY(EditAnywhere, Category = "Colors")
	UMaterial* PointNotCaptured;

	UPROPERTY(EditAnywhere, Category = "Colors")
		UMaterial* PointCaptured;

	UPROPERTY(EditAnywhere, Category = "Colors")
		UMaterial* OpponentPointCaptured;

	FTimerManager CaptureTimer;
	FTimerHandle CaptureTimerHandle;
};
