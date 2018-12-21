// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Material/GamePlay/SmallGamePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmallGamePlayerController() {}
// Cross Module References
	MATERIAL_API UClass* Z_Construct_UClass_ASmallGamePlayerController_NoRegister();
	MATERIAL_API UClass* Z_Construct_UClass_ASmallGamePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Material();
// End Cross Module References
	void ASmallGamePlayerController::StaticRegisterNativesASmallGamePlayerController()
	{
	}
	UClass* Z_Construct_UClass_ASmallGamePlayerController_NoRegister()
	{
		return ASmallGamePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASmallGamePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASmallGamePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmallGamePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GamePlay/SmallGamePlayerController.h" },
		{ "ModuleRelativePath", "GamePlay/SmallGamePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASmallGamePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASmallGamePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASmallGamePlayerController_Statics::ClassParams = {
		&ASmallGamePlayerController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASmallGamePlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASmallGamePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASmallGamePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASmallGamePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASmallGamePlayerController, 2651780053);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASmallGamePlayerController(Z_Construct_UClass_ASmallGamePlayerController, &ASmallGamePlayerController::StaticClass, TEXT("/Script/Material"), TEXT("ASmallGamePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASmallGamePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
