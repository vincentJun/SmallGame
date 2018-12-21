// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MATERIAL_SocketMgr_generated_h
#error "SocketMgr.generated.h already included, missing '#pragma once' in SocketMgr.h"
#endif
#define MATERIAL_SocketMgr_generated_h

#define Material_Source_Material_GameMgr_SocketMgr_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRecvMsg) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=P_THIS->RecvMsg(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMsg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Msg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendMsg(Z_Param_Msg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectSocket) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IPAddress); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Port); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConnectSocket(Z_Param_IPAddress,Z_Param_Port); \
		P_NATIVE_END; \
	}


#define Material_Source_Material_GameMgr_SocketMgr_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRecvMsg) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=P_THIS->RecvMsg(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMsg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Msg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendMsg(Z_Param_Msg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectSocket) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IPAddress); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Port); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConnectSocket(Z_Param_IPAddress,Z_Param_Port); \
		P_NATIVE_END; \
	}


#define Material_Source_Material_GameMgr_SocketMgr_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocketMgr(); \
	friend struct Z_Construct_UClass_USocketMgr_Statics; \
public: \
	DECLARE_CLASS(USocketMgr, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Material"), NO_API) \
	DECLARE_SERIALIZER(USocketMgr)


#define Material_Source_Material_GameMgr_SocketMgr_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSocketMgr(); \
	friend struct Z_Construct_UClass_USocketMgr_Statics; \
public: \
	DECLARE_CLASS(USocketMgr, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Material"), NO_API) \
	DECLARE_SERIALIZER(USocketMgr)


#define Material_Source_Material_GameMgr_SocketMgr_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketMgr(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketMgr) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketMgr); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketMgr); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocketMgr(USocketMgr&&); \
	NO_API USocketMgr(const USocketMgr&); \
public:


#define Material_Source_Material_GameMgr_SocketMgr_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketMgr(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocketMgr(USocketMgr&&); \
	NO_API USocketMgr(const USocketMgr&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketMgr); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketMgr); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketMgr)


#define Material_Source_Material_GameMgr_SocketMgr_h_17_PRIVATE_PROPERTY_OFFSET
#define Material_Source_Material_GameMgr_SocketMgr_h_14_PROLOG
#define Material_Source_Material_GameMgr_SocketMgr_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Material_Source_Material_GameMgr_SocketMgr_h_17_PRIVATE_PROPERTY_OFFSET \
	Material_Source_Material_GameMgr_SocketMgr_h_17_RPC_WRAPPERS \
	Material_Source_Material_GameMgr_SocketMgr_h_17_INCLASS \
	Material_Source_Material_GameMgr_SocketMgr_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Material_Source_Material_GameMgr_SocketMgr_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Material_Source_Material_GameMgr_SocketMgr_h_17_PRIVATE_PROPERTY_OFFSET \
	Material_Source_Material_GameMgr_SocketMgr_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Material_Source_Material_GameMgr_SocketMgr_h_17_INCLASS_NO_PURE_DECLS \
	Material_Source_Material_GameMgr_SocketMgr_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SocketMgr."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Material_Source_Material_GameMgr_SocketMgr_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
