// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FQuat;
struct FRotator;
struct FTracker;
struct FProp;
#ifdef SMARTSUIT_SmartsuitReceiver_generated_h
#error "SmartsuitReceiver.generated.h already included, missing '#pragma once' in SmartsuitReceiver.h"
#endif
#define SMARTSUIT_SmartsuitReceiver_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUPosition) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=ASmartsuitReceiver::UPosition(Z_Param_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFQuatToRotator) \
	{ \
		P_GET_STRUCT(FQuat,Z_Param_rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=ASmartsuitReceiver::FQuatToRotator(Z_Param_rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTracker) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_UBOOL(Z_Param_isLive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTracker*)Z_Param__Result=ASmartsuitReceiver::GetTracker(Z_Param_name,Z_Param_isLive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProp) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_UBOOL(Z_Param_isLive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FProp*)Z_Param__Result=ASmartsuitReceiver::GetProp(Z_Param_name,Z_Param_isLive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListener) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopListener(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartListener) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartListener(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUPosition) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=ASmartsuitReceiver::UPosition(Z_Param_position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFQuatToRotator) \
	{ \
		P_GET_STRUCT(FQuat,Z_Param_rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=ASmartsuitReceiver::FQuatToRotator(Z_Param_rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTracker) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_UBOOL(Z_Param_isLive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTracker*)Z_Param__Result=ASmartsuitReceiver::GetTracker(Z_Param_name,Z_Param_isLive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProp) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_UBOOL(Z_Param_isLive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FProp*)Z_Param__Result=ASmartsuitReceiver::GetProp(Z_Param_name,Z_Param_isLive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListener) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopListener(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartListener) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartListener(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASmartsuitReceiver(); \
	friend struct Z_Construct_UClass_ASmartsuitReceiver_Statics; \
public: \
	DECLARE_CLASS(ASmartsuitReceiver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(ASmartsuitReceiver)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASmartsuitReceiver(); \
	friend struct Z_Construct_UClass_ASmartsuitReceiver_Statics; \
public: \
	DECLARE_CLASS(ASmartsuitReceiver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(ASmartsuitReceiver)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASmartsuitReceiver(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASmartsuitReceiver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASmartsuitReceiver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmartsuitReceiver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASmartsuitReceiver(ASmartsuitReceiver&&); \
	NO_API ASmartsuitReceiver(const ASmartsuitReceiver&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASmartsuitReceiver(ASmartsuitReceiver&&); \
	NO_API ASmartsuitReceiver(const ASmartsuitReceiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASmartsuitReceiver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmartsuitReceiver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASmartsuitReceiver)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_17_PROLOG
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMARTSUIT_API UClass* StaticClass<class ASmartsuitReceiver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
