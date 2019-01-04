// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG_demoreel/ARPG_demoreelPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPG_demoreelPlayerController() {}
// Cross Module References
	ARPG_DEMOREEL_API UClass* Z_Construct_UClass_AARPG_demoreelPlayerController_NoRegister();
	ARPG_DEMOREEL_API UClass* Z_Construct_UClass_AARPG_demoreelPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ARPG_demoreel();
// End Cross Module References
	void AARPG_demoreelPlayerController::StaticRegisterNativesAARPG_demoreelPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AARPG_demoreelPlayerController_NoRegister()
	{
		return AARPG_demoreelPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AARPG_demoreelPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARPG_demoreelPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG_demoreel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPG_demoreelPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ARPG_demoreelPlayerController.h" },
		{ "ModuleRelativePath", "ARPG_demoreelPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARPG_demoreelPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARPG_demoreelPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARPG_demoreelPlayerController_Statics::ClassParams = {
		&AARPG_demoreelPlayerController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002A4u,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AARPG_demoreelPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AARPG_demoreelPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARPG_demoreelPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARPG_demoreelPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARPG_demoreelPlayerController, 3851310871);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARPG_demoreelPlayerController(Z_Construct_UClass_AARPG_demoreelPlayerController, &AARPG_demoreelPlayerController::StaticClass, TEXT("/Script/ARPG_demoreel"), TEXT("AARPG_demoreelPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARPG_demoreelPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
