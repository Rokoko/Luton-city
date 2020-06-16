// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASmartsuitController;
#ifdef SMARTSUIT_SmartsuitBlueprintLibrary_generated_h
#error "SmartsuitBlueprintLibrary.generated.h already included, missing '#pragma once' in SmartsuitBlueprintLibrary.h"
#endif
#define SMARTSUIT_SmartsuitBlueprintLibrary_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateVirtualProductionSource) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USmartsuitBlueprintLibrary::CreateVirtualProductionSource(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJSONTest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USmartsuitBlueprintLibrary::JSONTest(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSmartsuitController) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ASmartsuitController**)Z_Param__Result=USmartsuitBlueprintLibrary::GetSmartsuitController(Z_Param_id); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSmartsuitControllerByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ASmartsuitController**)Z_Param__Result=USmartsuitBlueprintLibrary::GetSmartsuitControllerByName(Z_Param_name); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateVirtualProductionSource) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USmartsuitBlueprintLibrary::CreateVirtualProductionSource(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJSONTest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USmartsuitBlueprintLibrary::JSONTest(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSmartsuitController) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ASmartsuitController**)Z_Param__Result=USmartsuitBlueprintLibrary::GetSmartsuitController(Z_Param_id); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSmartsuitControllerByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ASmartsuitController**)Z_Param__Result=USmartsuitBlueprintLibrary::GetSmartsuitControllerByName(Z_Param_name); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartsuitBlueprintLibrary(); \
	friend struct Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(USmartsuitBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(USmartsuitBlueprintLibrary)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUSmartsuitBlueprintLibrary(); \
	friend struct Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(USmartsuitBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(USmartsuitBlueprintLibrary)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USmartsuitBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartsuitBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmartsuitBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartsuitBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USmartsuitBlueprintLibrary(USmartsuitBlueprintLibrary&&); \
	NO_API USmartsuitBlueprintLibrary(const USmartsuitBlueprintLibrary&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USmartsuitBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USmartsuitBlueprintLibrary(USmartsuitBlueprintLibrary&&); \
	NO_API USmartsuitBlueprintLibrary(const USmartsuitBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmartsuitBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartsuitBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartsuitBlueprintLibrary)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_22_PROLOG
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMARTSUIT_API UClass* StaticClass<class USmartsuitBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
