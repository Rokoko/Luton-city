// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRokokoCommandAPI_IPInfo;
#ifdef SMARTSUIT_RokokoStudioCommandAPI_generated_h
#error "RokokoStudioCommandAPI.generated.h already included, missing '#pragma once' in RokokoStudioCommandAPI.h"
#endif
#define SMARTSUIT_RokokoStudioCommandAPI_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics; \
	SMARTSUIT_API static class UScriptStruct* StaticStruct();


template<> SMARTSUIT_API UScriptStruct* StaticStruct<struct FRokokoCommandAPI_IPInfo>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_25_DELEGATE \
struct _Script_Smartsuit_eventOnCompletedRequest_Parms \
{ \
	int32 ResponseCode; \
	FString ResponseContentString; \
	bool bSucceeded; \
}; \
static inline void FOnCompletedRequest_DelegateWrapper(const FMulticastScriptDelegate& OnCompletedRequest, int32 ResponseCode, const FString& ResponseContentString, bool bSucceeded) \
{ \
	_Script_Smartsuit_eventOnCompletedRequest_Parms Parms; \
	Parms.ResponseCode=ResponseCode; \
	Parms.ResponseContentString=ResponseContentString; \
	Parms.bSucceeded=bSucceeded ? true : false; \
	OnCompletedRequest.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveConfigFile) \
	{ \
		P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SmartSuitname); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveConfigFile(Z_Param_Out_IPInfo,Z_Param_SmartSuitname); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRecording) \
	{ \
		P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRecording(Z_Param_Out_IPInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecording) \
	{ \
		P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRecording(Z_Param_Out_IPInfo,Z_Param_FileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalibrate) \
	{ \
		P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SmartSuitName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CountdownDelay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Calibrate(Z_Param_Out_IPInfo,Z_Param_SmartSuitName,Z_Param_CountdownDelay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestart) \
	{ \
		P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SmartSuitName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Restart(Z_Param_Out_IPInfo,Z_Param_SmartSuitName); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveConfigFile) \
	{ \
		P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SmartSuitname); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveConfigFile(Z_Param_Out_IPInfo,Z_Param_SmartSuitname); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRecording) \
	{ \
		P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRecording(Z_Param_Out_IPInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecording) \
	{ \
		P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRecording(Z_Param_Out_IPInfo,Z_Param_FileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalibrate) \
	{ \
		P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SmartSuitName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CountdownDelay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Calibrate(Z_Param_Out_IPInfo,Z_Param_SmartSuitName,Z_Param_CountdownDelay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestart) \
	{ \
		P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SmartSuitName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Restart(Z_Param_Out_IPInfo,Z_Param_SmartSuitName); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURokokoStudioCommandAPI(); \
	friend struct Z_Construct_UClass_URokokoStudioCommandAPI_Statics; \
public: \
	DECLARE_CLASS(URokokoStudioCommandAPI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(URokokoStudioCommandAPI) \
	static const TCHAR* StaticConfigName() {return TEXT("RokokoStudioCommandAPI");} \



#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_INCLASS \
private: \
	static void StaticRegisterNativesURokokoStudioCommandAPI(); \
	friend struct Z_Construct_UClass_URokokoStudioCommandAPI_Statics; \
public: \
	DECLARE_CLASS(URokokoStudioCommandAPI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(URokokoStudioCommandAPI) \
	static const TCHAR* StaticConfigName() {return TEXT("RokokoStudioCommandAPI");} \



#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URokokoStudioCommandAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URokokoStudioCommandAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URokokoStudioCommandAPI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URokokoStudioCommandAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URokokoStudioCommandAPI(URokokoStudioCommandAPI&&); \
	NO_API URokokoStudioCommandAPI(const URokokoStudioCommandAPI&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URokokoStudioCommandAPI(URokokoStudioCommandAPI&&); \
	NO_API URokokoStudioCommandAPI(const URokokoStudioCommandAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URokokoStudioCommandAPI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URokokoStudioCommandAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URokokoStudioCommandAPI)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_30_PROLOG
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMARTSUIT_API UClass* StaticClass<class URokokoStudioCommandAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
