// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HackNSlash/HackNSlashGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHackNSlashGameMode() {}
// Cross Module References
	HACKNSLASH_API UClass* Z_Construct_UClass_AHackNSlashGameMode_NoRegister();
	HACKNSLASH_API UClass* Z_Construct_UClass_AHackNSlashGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HackNSlash();
// End Cross Module References
	void AHackNSlashGameMode::StaticRegisterNativesAHackNSlashGameMode()
	{
	}
	UClass* Z_Construct_UClass_AHackNSlashGameMode_NoRegister()
	{
		return AHackNSlashGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHackNSlashGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHackNSlashGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HackNSlash,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHackNSlashGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HackNSlashGameMode.h" },
		{ "ModuleRelativePath", "HackNSlashGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHackNSlashGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHackNSlashGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHackNSlashGameMode_Statics::ClassParams = {
		&AHackNSlashGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHackNSlashGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHackNSlashGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHackNSlashGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHackNSlashGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHackNSlashGameMode, 935902512);
	template<> HACKNSLASH_API UClass* StaticClass<AHackNSlashGameMode>()
	{
		return AHackNSlashGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHackNSlashGameMode(Z_Construct_UClass_AHackNSlashGameMode, &AHackNSlashGameMode::StaticClass, TEXT("/Script/HackNSlash"), TEXT("AHackNSlashGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHackNSlashGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
