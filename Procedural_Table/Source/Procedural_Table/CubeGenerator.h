// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"

/**
 * 
 */
class PROCEDURAL_TABLE_API CubeGenerator
{
public:
	CubeGenerator();
	~CubeGenerator();
	void SetProceduralMesh(UProceduralMeshComponent* ProcMesh) { ProceduralMesh = ProcMesh; }
	void GenerateCube(int32 index, FVector Location, float WidthSize, float HeightSize, float LengthSize);
private:
	UProceduralMeshComponent* ProceduralMesh;
	//Mesh Vertices
	TArray<FVector> Vertices;
	//Mesh Triangles
	TArray<int32> Triangles;
	//Mesh Normals
	TArray<FVector> Normals;
	//Mesh UV0
	TArray<FVector2D> UV0;
	//Mesh Vertices Colors
	TArray<FLinearColor> VertexColors;
	//Mesh Tangents
	TArray<FProcMeshTangent> Tangents;

	void AddTriangles(int32 V1, int32 V2, int32 V3);
	void CleanUpValues();
};
