// Fill out your copyright notice in the Description page of Project Settings.


#include "Chair.h"

// Sets default values
AChair::AChair()
{
	PrimaryActorTick.bCanEverTick = true;
	ProceduralMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProceduralMeshComponent"));
	SetRootComponent(ProceduralMesh);
	ProceduralMesh->bUseAsyncCooking = true;
	CG = CubeGenerator();
	CG.SetProceduralMesh(ProceduralMesh);
}


// Called when the game starts or when spawned
void AChair::BeginPlay()
{
	Super::BeginPlay();
	GenerateChair();
}

// Called every frame
void AChair::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AChair::GenerateChair()
{	
	//Initial Chair Distance Vector
	FVector Location = FVector(0.0f);

	//Faces Width, Length, Height
	float WidthSize = 5.0f;
	float HeightSize = 5.0f;
	float LengthSize = 20.0f;
	float ChairWidth = 3.0f;

	//Distance Between the Chair Basis
	float DistanceBetweenTheBasis = (WidthSize * HeightSize) - HeightSize;

	//Mesh Section Index
	int index = 0;

	//Render The Chair Basis one by one
	for (index = 0; index < 4; index++)
	{
		if (index == 1) { Location = FVector(DistanceBetweenTheBasis, 0.0f, 0.0f); }
		else if (index == 2) { Location = FVector(0.0f, DistanceBetweenTheBasis, 0.0f); }
		else if (index == 3) { Location = FVector(DistanceBetweenTheBasis, DistanceBetweenTheBasis, 0.0f); }
		CG.GenerateCube(index, Location, WidthSize, HeightSize, LengthSize);
	}

	//Sit Face
	Location = FVector(0.0f, 0.0f, LengthSize);
	CG.GenerateCube(index, Location, ((4 * WidthSize) + WidthSize), ((4 * HeightSize) + HeightSize), ChairWidth);

	//Back Face
	Location = FVector(0.0f, 0.0f, LengthSize);
	index++;
	CG.GenerateCube(index, Location, ChairWidth, ((4 * HeightSize) + HeightSize), LengthSize);
}
