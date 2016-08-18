// Fill out your copyright notice in the Description page of Project Settings.

#include "PointWars.h"
#include "ControlPoint.h"

#define OUT
// Sets default values
AControlPoint::AControlPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Root Component"));
	RootComponent = SphereComponent;
	SphereComponent->InitSphereRadius(800.f);


	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Point"));
	StaticMesh->SetupAttachment(RootComponent);

	CountDownTime = 20;
}

// Called when the game starts or when spawned
void AControlPoint::BeginPlay()
{
	Super::BeginPlay();
	//GetWorldTimerManager().SetTimer()
}

// Called every frame
void AControlPoint::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
	PersonIsOnPoint();

}

void AControlPoint::PersonIsOnPoint()
{
	TArray<AActor*> OverlappingActors;
	SphereComponent->GetOverlappingActors(OUT OverlappingActors);
	
	for (const auto Actor : OverlappingActors) {
		UE_LOG(LogTemp, Warning, TEXT("%s is on the point"), *Actor->GetName());
		//CaptureTimer.SetTimer(CaptureTimerHandle, &AControlPoint::PersonIsOnPoint, 1.0f, true);
		--CountDownTime;
			if (CountDownTime < 1) {
				StaticMesh->SetMaterial(0, PointCaptured);
				//CaptureTimer.ClearTimer(CaptureTimerHandle);
		}
	}
}

