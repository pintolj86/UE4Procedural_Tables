// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Procedural_Table/Chair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChair() {}
// Cross Module References
	PROCEDURAL_TABLE_API UClass* Z_Construct_UClass_AChair_NoRegister();
	PROCEDURAL_TABLE_API UClass* Z_Construct_UClass_AChair();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Procedural_Table();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	void AChair::StaticRegisterNativesAChair()
	{
	}
	UClass* Z_Construct_UClass_AChair_NoRegister()
	{
		return AChair::StaticClass();
	}
	struct Z_Construct_UClass_AChair_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProceduralMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChair_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Procedural_Table,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChair_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chair.h" },
		{ "ModuleRelativePath", "Chair.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChair_Statics::NewProp_ProceduralMesh_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Chair.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChair_Statics::NewProp_ProceduralMesh = { "ProceduralMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChair, ProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChair_Statics::NewProp_ProceduralMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChair_Statics::NewProp_ProceduralMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChair_Statics::NewProp_ProceduralMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChair_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChair>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChair_Statics::ClassParams = {
		&AChair::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChair_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChair_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChair_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChair_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChair()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChair_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChair, 3499629937);
	template<> PROCEDURAL_TABLE_API UClass* StaticClass<AChair>()
	{
		return AChair::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChair(Z_Construct_UClass_AChair, &AChair::StaticClass, TEXT("/Script/Procedural_Table"), TEXT("AChair"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChair);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
