// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBodyModel;
#ifdef SMARTSUIT_SmartsuitController_generated_h
#error "SmartsuitController.generated.h already included, missing '#pragma once' in SmartsuitController.h"
#endif
#define SMARTSUIT_SmartsuitController_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBodyModel_Statics; \
	SMARTSUIT_API static class UScriptStruct* StaticStruct();


template<> SMARTSUIT_API UScriptStruct* StaticStruct<struct FBodyModel>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDoTests) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoTests(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBodyModel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetBodyModel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBodyModel) \
	{ \
		P_GET_STRUCT(FBodyModel,Z_Param_bodyToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBodyModel(Z_Param_bodyToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnicast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Unicast(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBroadcast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Broadcast(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalibrate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Calibrate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Restart(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoTests) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoTests(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBodyModel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetBodyModel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBodyModel) \
	{ \
		P_GET_STRUCT(FBodyModel,Z_Param_bodyToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBodyModel(Z_Param_bodyToSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnicast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Unicast(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBroadcast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Broadcast(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalibrate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Calibrate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Restart(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASmartsuitController(); \
	friend struct Z_Construct_UClass_ASmartsuitController_Statics; \
public: \
	DECLARE_CLASS(ASmartsuitController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(ASmartsuitController)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_INCLASS \
private: \
	static void StaticRegisterNativesASmartsuitController(); \
	friend struct Z_Construct_UClass_ASmartsuitController_Statics; \
public: \
	DECLARE_CLASS(ASmartsuitController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(ASmartsuitController)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASmartsuitController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASmartsuitController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASmartsuitController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmartsuitController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASmartsuitController(ASmartsuitController&&); \
	NO_API ASmartsuitController(const ASmartsuitController&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASmartsuitController(ASmartsuitController&&); \
	NO_API ASmartsuitController(const ASmartsuitController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASmartsuitController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmartsuitController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASmartsuitController)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_132_PROLOG
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_135_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMARTSUIT_API UClass* StaticClass<class ASmartsuitController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
