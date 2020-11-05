// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Procedural_Table/Procedural_TableGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcedural_TableGameModeBase() {}
// Cross Module References
	PROCEDURAL_TABLE_API UClass* Z_Construct_UClass_AProcedural_TableGameModeBase_NoRegister();
	PROCEDURAL_TABLE_API UClass* Z_Construct_UClass_AProcedural_TableGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Procedural_Table();
// End Cross Module References
	void AProcedural_TableGameModeBase::StaticRegisterNativesAProcedural_TableGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AProcedural_TableGameModeBase_NoRegister()
	{
		return AProcedural_TableGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProcedural_TableGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProcedural_TableGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Procedural_Table,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcedural_TableGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Procedural_TableGameModeBase.h" },
		{ "ModuleRelativePath", "Procedural_TableGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProcedural_TableGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProcedural_TableGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProcedural_TableGameModeBase_Statics::ClassParams = {
		&AProcedural_TableGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProcedural_TableGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProcedural_TableGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProcedural_TableGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProcedural_TableGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProcedural_TableGameModeBase, 2531918132);
	template<> PROCEDURAL_TABLE_API UClass* StaticClass<AProcedural_TableGameModeBase>()
	{
		return AProcedural_TableGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProcedural_TableGameModeBase(Z_Construct_UClass_AProcedural_TableGameModeBase, &AProcedural_TableGameModeBase::StaticClass, TEXT("/Script/Procedural_Table"), TEXT("AProcedural_TableGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProcedural_TableGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
