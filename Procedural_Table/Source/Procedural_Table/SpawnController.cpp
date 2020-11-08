// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnController.h"

// Sets default values
ASpawnController::ASpawnController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnController::BeginPlay()
{
	Super::BeginPlay();
	FVector Location = FVector(0.0f, 0.0f, 10.0f);
	FRotator R1 = FRotator(0.0f, 0.0f, 0.0f);
	SpawnSingleChair(FVector(80.0f, 30.0f, 10.0f), R1);
	SpawnSingleChair(FVector(120.0f, 50.0f, 10.0f), R1);
	SpawnSingleChair(FVector(180.0f, 70.0f, 10.0f), R1);
	SpawnSingleChair(FVector(220.0f, 90.0f, 10.0f), R1);
}

// Called every frame
void ASpawnController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASpawnController::SpawnSingleChair(FVector Location, FRotator Rotation)
{
	UWorld* CurrentWorld = GetWorld();
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.Owner = this;
	SpawnInfo.Instigator = GetInstigator();
	CurrentWorld->SpawnActor<AChair>(AChair::StaticClass(), Location, Rotation, SpawnInfo);
	
}

