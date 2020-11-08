// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeGenerator.h"

CubeGenerator::CubeGenerator()
{
}

CubeGenerator::~CubeGenerator()
{
}


void CubeGenerator::AddTriangles(int32 V1, int32 V2, int32 V3)
{
	Triangles.Add(V1);
	Triangles.Add(V2);
	Triangles.Add(V3);
}
void CubeGenerator::GenerateCube(int32 index, FVector Location, float WidthSize, float HeightSize, float LengthSize)
{
	CleanUpValues();

	//Floor Face
	Vertices.Add(FVector(Location.X, Location.Y, Location.Z));
	Vertices.Add(FVector(Location.X + WidthSize, Location.Y, Location.Z));
	Vertices.Add(FVector(Location.X, Location.Y + HeightSize, Location.Z));
	Vertices.Add(FVector(Location.X + WidthSize, Location.Y + HeightSize, Location.Z));

	//Cealing Face
	Vertices.Add(FVector(Location.X, Location.Y, (Location.Z + LengthSize)));
	Vertices.Add(FVector((Location.X + WidthSize), Location.Y, (Location.Z + LengthSize)));
	Vertices.Add(FVector(Location.X, (Location.Y + HeightSize), (Location.Z + LengthSize)));
	Vertices.Add(FVector((Location.X + WidthSize), (Location.Y + HeightSize), (Location.Z + LengthSize)));

	//Floor Face
	AddTriangles(2, 0, 1);   //front 2-3-1
	AddTriangles(1, 3, 2);	//front 2-1-0	

	//Cealing Face
	AddTriangles(4, 7, 5);
	AddTriangles(4, 6, 7);

	//Left Rect
	AddTriangles(1, 5, 7);
	AddTriangles(1, 7, 3);

	//Right Rect
	AddTriangles(3, 7, 6);
	AddTriangles(3, 6, 2);

	//Right Bottom
	AddTriangles(0, 2, 4);
	AddTriangles(2, 6, 4);

	//Left Bottom
	AddTriangles(0, 4, 5);
	AddTriangles(1, 0, 5);

	//Mesh Normals
	Normals.Add(FVector(1, 0, 0));
	Normals.Add(FVector(1, 0, 0));
	Normals.Add(FVector(1, 0, 0));
	Normals.Add(FVector(1, 0, 0));

	//Mesh UVs
	UV0.Add(FVector2D(1.0f, 0.0f));
	UV0.Add(FVector2D(1.0f, 0.0f));
	UV0.Add(FVector2D(1.0f, 0.0f));
	UV0.Add(FVector2D(1.0f, 0.0f));

	//TArray<FLinearColor> VertexColors;
	VertexColors.Add(FLinearColor(0.f, 0.f, 1.f));
	VertexColors.Add(FLinearColor(1.f, 0.f, 0.f));
	VertexColors.Add(FLinearColor(1.f, 0.f, 0.f));
	VertexColors.Add(FLinearColor(0.f, 1.f, 0.f));
	VertexColors.Add(FLinearColor(0.5f, 1.f, 0.5f));
	VertexColors.Add(FLinearColor(0.f, 1.f, 0.f));
	VertexColors.Add(FLinearColor(1.f, 1.f, 0.f));
	VertexColors.Add(FLinearColor(0.f, 1.f, 1.f));

	Tangents.Add(FProcMeshTangent(0, 1, 0));
	Tangents.Add(FProcMeshTangent(0, 1, 0));
	Tangents.Add(FProcMeshTangent(0, 1, 0));
	Tangents.Add(FProcMeshTangent(0, 1, 0));

	ProceduralMesh->CreateMeshSection_LinearColor(index, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, true);
	//Enable Collisions Data
	ProceduralMesh->ContainsPhysicsTriMeshData(true);
}
void CubeGenerator::CleanUpValues()
{
	Vertices.Empty();
	Triangles.Empty();
	Normals.Empty();
	UV0.Empty();
	VertexColors.Empty();
	Tangents.Empty();
}
