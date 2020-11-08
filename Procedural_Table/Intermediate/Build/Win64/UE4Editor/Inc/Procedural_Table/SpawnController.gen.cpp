// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Procedural_Table/SpawnController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnController() {}
// Cross Module References
	PROCEDURAL_TABLE_API UClass* Z_Construct_UClass_ASpawnController_NoRegister();
	PROCEDURAL_TABLE_API UClass* Z_Construct_UClass_ASpawnController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Procedural_Table();
// End Cross Module References
	void ASpawnController::StaticRegisterNativesASpawnController()
	{
	}
	UClass* Z_Construct_UClass_ASpawnController_NoRegister()
	{
		return ASpawnController::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Procedural_Table,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnController.h" },
		{ "ModuleRelativePath", "SpawnController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnController_Statics::ClassParams = {
		&ASpawnController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnController, 2613645884);
	template<> PROCEDURAL_TABLE_API UClass* StaticClass<ASpawnController>()
	{
		return ASpawnController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnController(Z_Construct_UClass_ASpawnController, &ASpawnController::StaticClass, TEXT("/Script/Procedural_Table"), TEXT("ASpawnController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
