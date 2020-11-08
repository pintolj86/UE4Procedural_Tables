// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Chair.h"
#include "SpawnController.generated.h"

UCLASS()
class PROCEDURAL_TABLE_API ASpawnController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	/*This Method Spawns a single chair item*/
	void SpawnSingleChair(FVector Location, FRotator Rotation);
};
