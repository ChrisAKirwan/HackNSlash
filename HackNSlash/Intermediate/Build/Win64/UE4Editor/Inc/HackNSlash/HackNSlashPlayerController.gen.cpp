// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HackNSlash/HackNSlashPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHackNSlashPlayerController() {}
// Cross Module References
	HACKNSLASH_API UClass* Z_Construct_UClass_AHackNSlashPlayerController_NoRegister();
	HACKNSLASH_API UClass* Z_Construct_UClass_AHackNSlashPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_HackNSlash();
// End Cross Module References
	void AHackNSlashPlayerController::StaticRegisterNativesAHackNSlashPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AHackNSlashPlayerController_NoRegister()
	{
		return AHackNSlashPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AHackNSlashPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHackNSlashPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_HackNSlash,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHackNSlashPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HackNSlashPlayerController.h" },
		{ "ModuleRelativePath", "HackNSlashPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHackNSlashPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHackNSlashPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHackNSlashPlayerController_Statics::ClassParams = {
		&AHackNSlashPlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHackNSlashPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHackNSlashPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHackNSlashPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHackNSlashPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHackNSlashPlayerController, 2583478551);
	template<> HACKNSLASH_API UClass* StaticClass<AHackNSlashPlayerController>()
	{
		return AHackNSlashPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHackNSlashPlayerController(Z_Construct_UClass_AHackNSlashPlayerController, &AHackNSlashPlayerController::StaticClass, TEXT("/Script/HackNSlash"), TEXT("AHackNSlashPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHackNSlashPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
