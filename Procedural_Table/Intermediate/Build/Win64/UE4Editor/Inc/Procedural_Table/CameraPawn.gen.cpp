// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Procedural_Table/CameraPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraPawn() {}
// Cross Module References
	PROCEDURAL_TABLE_API UClass* Z_Construct_UClass_ACameraPawn_NoRegister();
	PROCEDURAL_TABLE_API UClass* Z_Construct_UClass_ACameraPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Procedural_Table();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ACameraPawn::StaticRegisterNativesACameraPawn()
	{
	}
	UClass* Z_Construct_UClass_ACameraPawn_NoRegister()
	{
		return ACameraPawn::StaticClass();
	}
	struct Z_Construct_UClass_ACameraPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementUnits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bZoomIn_MetaData[];
#endif
		static void NewProp_bZoomIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bZoomIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraLagSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraLagSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringArmRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringArmLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraSpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Procedural_Table,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CameraPawn.h" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraPawn_Statics::NewProp_MovementUnits_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_MovementUnits = { "MovementUnits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraPawn, MovementUnits), METADATA_PARAMS(Z_Construct_UClass_ACameraPawn_Statics::NewProp_MovementUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::NewProp_MovementUnits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraPawn_Statics::NewProp_ZoomFactor_MetaData[] = {
		{ "Category", "Camera Settings:Basics" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_ZoomFactor = { "ZoomFactor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraPawn, ZoomFactor), METADATA_PARAMS(Z_Construct_UClass_ACameraPawn_Statics::NewProp_ZoomFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::NewProp_ZoomFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraPawn_Statics::NewProp_bZoomIn_MetaData[] = {
		{ "Category", "Camera Settings:Basics" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
#endif
	void Z_Construct_UClass_ACameraPawn_Statics::NewProp_bZoomIn_SetBit(void* Obj)
	{
		((ACameraPawn*)Obj)->bZoomIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_bZoomIn = { "bZoomIn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACameraPawn), &Z_Construct_UClass_ACameraPawn_Statics::NewProp_bZoomIn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACameraPawn_Statics::NewProp_bZoomIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::NewProp_bZoomIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraPawn_Statics::NewProp_CameraLagSpeed_MetaData[] = {
		{ "Category", "Camera Settings:Basics" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_CameraLagSpeed = { "CameraLagSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraPawn, CameraLagSpeed), METADATA_PARAMS(Z_Construct_UClass_ACameraPawn_Statics::NewProp_CameraLagSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::NewProp_CameraLagSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraPawn_Statics::NewProp_ArmLength_MetaData[] = {
		{ "Category", "Camera Settings:Basics" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_ArmLength = { "ArmLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraPawn, ArmLength), METADATA_PARAMS(Z_Construct_UClass_ACameraPawn_Statics::NewProp_ArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::NewProp_ArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraPawn_Statics::NewProp_SpringArmRotation_MetaData[] = {
		{ "Category", "Camera Settings:Basics" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_SpringArmRotation = { "SpringArmRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraPawn, SpringArmRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ACameraPawn_Statics::NewProp_SpringArmRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::NewProp_SpringArmRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraPawn_Statics::NewProp_SpringArmLocation_MetaData[] = {
		{ "Category", "Camera Settings:Basics" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_SpringArmLocation = { "SpringArmLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraPawn, SpringArmLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACameraPawn_Statics::NewProp_SpringArmLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::NewProp_SpringArmLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraPawn_Statics::NewProp_CameraSpringArm_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_CameraSpringArm = { "CameraSpringArm", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraPawn, CameraSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraPawn_Statics::NewProp_CameraSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::NewProp_CameraSpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraPawn_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "Comment", "/*Camera Component Variables*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CameraPawn.h" },
		{ "ToolTip", "Camera Component Variables" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraPawn, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraPawn_Statics::NewProp_PlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::NewProp_PlayerCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_MovementUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_ZoomFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_bZoomIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_CameraLagSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_ArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_SpringArmRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_SpringArmLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_CameraSpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_PlayerCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACameraPawn_Statics::ClassParams = {
		&ACameraPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACameraPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACameraPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraPawn, 4217075420);
	template<> PROCEDURAL_TABLE_API UClass* StaticClass<ACameraPawn>()
	{
		return ACameraPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraPawn(Z_Construct_UClass_ACameraPawn, &ACameraPawn::StaticClass, TEXT("/Script/Procedural_Table"), TEXT("ACameraPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
