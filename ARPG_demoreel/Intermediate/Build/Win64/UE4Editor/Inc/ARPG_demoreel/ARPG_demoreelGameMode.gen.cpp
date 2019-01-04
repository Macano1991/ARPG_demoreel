// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG_demoreel/ARPG_demoreelGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPG_demoreelGameMode() {}
// Cross Module References
	ARPG_DEMOREEL_API UClass* Z_Construct_UClass_AARPG_demoreelGameMode_NoRegister();
	ARPG_DEMOREEL_API UClass* Z_Construct_UClass_AARPG_demoreelGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ARPG_demoreel();
// End Cross Module References
	void AARPG_demoreelGameMode::StaticRegisterNativesAARPG_demoreelGameMode()
	{
	}
	UClass* Z_Construct_UClass_AARPG_demoreelGameMode_NoRegister()
	{
		return AARPG_demoreelGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AARPG_demoreelGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARPG_demoreelGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG_demoreel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPG_demoreelGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ARPG_demoreelGameMode.h" },
		{ "ModuleRelativePath", "ARPG_demoreelGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARPG_demoreelGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARPG_demoreelGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARPG_demoreelGameMode_Statics::ClassParams = {
		&AARPG_demoreelGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AARPG_demoreelGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AARPG_demoreelGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARPG_demoreelGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARPG_demoreelGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARPG_demoreelGameMode, 2255992116);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARPG_demoreelGameMode(Z_Construct_UClass_AARPG_demoreelGameMode, &AARPG_demoreelGameMode::StaticClass, TEXT("/Script/ARPG_demoreel"), TEXT("AARPG_demoreelGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARPG_demoreelGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
