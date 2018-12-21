// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Material/GameMgr/SocketMgr.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocketMgr() {}
// Cross Module References
	MATERIAL_API UClass* Z_Construct_UClass_USocketMgr_NoRegister();
	MATERIAL_API UClass* Z_Construct_UClass_USocketMgr();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Material();
	MATERIAL_API UFunction* Z_Construct_UFunction_USocketMgr_ConnectSocket();
	MATERIAL_API UFunction* Z_Construct_UFunction_USocketMgr_RecvMsg();
	MATERIAL_API UFunction* Z_Construct_UFunction_USocketMgr_SendMsg();
// End Cross Module References
	void USocketMgr::StaticRegisterNativesUSocketMgr()
	{
		UClass* Class = USocketMgr::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectSocket", &USocketMgr::execConnectSocket },
			{ "RecvMsg", &USocketMgr::execRecvMsg },
			{ "SendMsg", &USocketMgr::execSendMsg },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics
	{
		struct SocketMgr_eventConnectSocket_Parms
		{
			FString IPAddress;
			int32 Port;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IPAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::NewProp_Port_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::NewProp_Port = { UE4CodeGen_Private::EPropertyClass::Int, "Port", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SocketMgr_eventConnectSocket_Parms, Port), METADATA_PARAMS(Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::NewProp_Port_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::NewProp_IPAddress = { UE4CodeGen_Private::EPropertyClass::Str, "IPAddress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SocketMgr_eventConnectSocket_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::NewProp_IPAddress_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::NewProp_IPAddress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::NewProp_IPAddress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "ConnectSocket" },
		{ "ModuleRelativePath", "GameMgr/SocketMgr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketMgr, "ConnectSocket", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SocketMgr_eventConnectSocket_Parms), Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketMgr_ConnectSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocketMgr_ConnectSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketMgr_RecvMsg_Statics
	{
		struct SocketMgr_eventRecvMsg_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketMgr_RecvMsg_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SocketMgr_eventRecvMsg_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocketMgr_RecvMsg_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketMgr_RecvMsg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketMgr_RecvMsg_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketMgr_RecvMsg_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketMgr_RecvMsg_Statics::Function_MetaDataParams[] = {
		{ "Category", "RecvMsg" },
		{ "ModuleRelativePath", "GameMgr/SocketMgr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketMgr_RecvMsg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketMgr, "RecvMsg", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SocketMgr_eventRecvMsg_Parms), Z_Construct_UFunction_USocketMgr_RecvMsg_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocketMgr_RecvMsg_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketMgr_RecvMsg_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocketMgr_RecvMsg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketMgr_RecvMsg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocketMgr_RecvMsg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketMgr_SendMsg_Statics
	{
		struct SocketMgr_eventSendMsg_Parms
		{
			FString Msg;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Msg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketMgr_SendMsg_Statics::NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketMgr_SendMsg_Statics::NewProp_Msg = { UE4CodeGen_Private::EPropertyClass::Str, "Msg", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SocketMgr_eventSendMsg_Parms, Msg), METADATA_PARAMS(Z_Construct_UFunction_USocketMgr_SendMsg_Statics::NewProp_Msg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USocketMgr_SendMsg_Statics::NewProp_Msg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketMgr_SendMsg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketMgr_SendMsg_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketMgr_SendMsg_Statics::Function_MetaDataParams[] = {
		{ "Category", "SendMsg" },
		{ "ModuleRelativePath", "GameMgr/SocketMgr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketMgr_SendMsg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketMgr, "SendMsg", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SocketMgr_eventSendMsg_Parms), Z_Construct_UFunction_USocketMgr_SendMsg_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocketMgr_SendMsg_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketMgr_SendMsg_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocketMgr_SendMsg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketMgr_SendMsg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocketMgr_SendMsg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USocketMgr_NoRegister()
	{
		return USocketMgr::StaticClass();
	}
	struct Z_Construct_UClass_USocketMgr_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocketMgr_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Material,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USocketMgr_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USocketMgr_ConnectSocket, "ConnectSocket" }, // 3259387012
		{ &Z_Construct_UFunction_USocketMgr_RecvMsg, "RecvMsg" }, // 2075656945
		{ &Z_Construct_UFunction_USocketMgr_SendMsg, "SendMsg" }, // 473896163
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketMgr_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameMgr/SocketMgr.h" },
		{ "ModuleRelativePath", "GameMgr/SocketMgr.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocketMgr_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocketMgr>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocketMgr_Statics::ClassParams = {
		&USocketMgr::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USocketMgr_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocketMgr_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocketMgr()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocketMgr_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocketMgr, 1554410613);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocketMgr(Z_Construct_UClass_USocketMgr, &USocketMgr::StaticClass, TEXT("/Script/Material"), TEXT("USocketMgr"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocketMgr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
