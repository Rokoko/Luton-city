// Copyright Epic Games, Inc. All Rights Reserved.
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

#define pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_SPARSE_DATA
#define pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUPosition); \
	DECLARE_FUNCTION(execFQuatToRotator); \
	DECLARE_FUNCTION(execGetTracker); \
	DECLARE_FUNCTION(execGetProp); \
	DECLARE_FUNCTION(execStopListener); \
	DECLARE_FUNCTION(execStartListener);


#define pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUPosition); \
	DECLARE_FUNCTION(execFQuatToRotator); \
	DECLARE_FUNCTION(execGetTracker); \
	DECLARE_FUNCTION(execGetProp); \
	DECLARE_FUNCTION(execStopListener); \
	DECLARE_FUNCTION(execStartListener);


#define pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASmartsuitReceiver(); \
	friend struct Z_Construct_UClass_ASmartsuitReceiver_Statics; \
public: \
	DECLARE_CLASS(ASmartsuitReceiver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(ASmartsuitReceiver)


#define pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASmartsuitReceiver(); \
	friend struct Z_Construct_UClass_ASmartsuitReceiver_Statics; \
public: \
	DECLARE_CLASS(ASmartsuitReceiver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(ASmartsuitReceiver)


#define pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_STANDARD_CONSTRUCTORS \
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


#define pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASmartsuitReceiver(ASmartsuitReceiver&&); \
	NO_API ASmartsuitReceiver(const ASmartsuitReceiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASmartsuitReceiver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmartsuitReceiver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASmartsuitReceiver)


#define pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_PRIVATE_PROPERTY_OFFSET
#define pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_17_PROLOG
#define pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_PRIVATE_PROPERTY_OFFSET \
	pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_SPARSE_DATA \
	pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_RPC_WRAPPERS \
	pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_INCLASS \
	pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_PRIVATE_PROPERTY_OFFSET \
	pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_SPARSE_DATA \
	pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_INCLASS_NO_PURE_DECLS \
	pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMARTSUIT_API UClass* StaticClass<class ASmartsuitReceiver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID pluginconvert_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
