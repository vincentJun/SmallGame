// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Material/GamePlay/SmallGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmallGameInstance() {}
// Cross Module References
	MATERIAL_API UClass* Z_Construct_UClass_USmallGameInstance_NoRegister();
	MATERIAL_API UClass* Z_Construct_UClass_USmallGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Material();
// End Cross Module References
	void USmallGameInstance::StaticRegisterNativesUSmallGameInstance()
	{
	}
	UClass* Z_Construct_UClass_USmallGameInstance_NoRegister()
	{
		return USmallGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USmallGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmallGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmallGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GamePlay/SmallGameInstance.h" },
		{ "ModuleRelativePath", "GamePlay/SmallGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmallGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmallGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USmallGameInstance_Statics::ClassParams = {
		&USmallGameInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USmallGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USmallGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmallGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USmallGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USmallGameInstance, 333074923);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USmallGameInstance(Z_Construct_UClass_USmallGameInstance, &USmallGameInstance::StaticClass, TEXT("/Script/Material"), TEXT("USmallGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmallGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
