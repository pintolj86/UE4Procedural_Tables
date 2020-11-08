// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "CubeGenerator.h"
#include "Chair.generated.h"

UCLASS()
class PROCEDURAL_TABLE_API AChair : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChair();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Procedural Mesh")
	UProceduralMeshComponent* ProceduralMesh;
	void GenerateChair();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	CubeGenerator CG;
};
