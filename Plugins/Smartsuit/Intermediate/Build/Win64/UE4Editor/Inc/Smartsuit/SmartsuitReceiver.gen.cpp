// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/SmartsuitReceiver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartsuitReceiver() {}
// Cross Module References
	SMARTSUIT_API UClass* Z_Construct_UClass_ASmartsuitReceiver_NoRegister();
	SMARTSUIT_API UClass* Z_Construct_UClass_ASmartsuitReceiver();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FProp();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FTracker();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ASmartsuitReceiver::execUPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=ASmartsuitReceiver::UPosition(Z_Param_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execFQuatToRotator)
	{
		P_GET_STRUCT(FQuat,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=ASmartsuitReceiver::FQuatToRotator(Z_Param_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execGetTracker)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_UBOOL(Z_Param_isLive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTracker*)Z_Param__Result=ASmartsuitReceiver::GetTracker(Z_Param_name,Z_Param_isLive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execGetProp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_UBOOL(Z_Param_isLive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FProp*)Z_Param__Result=ASmartsuitReceiver::GetProp(Z_Param_name,Z_Param_isLive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execStopListener)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopListener();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartsuitReceiver::execStartListener)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartListener();
		P_NATIVE_END;
	}
	void ASmartsuitReceiver::StaticRegisterNativesASmartsuitReceiver()
	{
		UClass* Class = ASmartsuitReceiver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FQuatToRotator", &ASmartsuitReceiver::execFQuatToRotator },
			{ "GetProp", &ASmartsuitReceiver::execGetProp },
			{ "GetTracker", &ASmartsuitReceiver::execGetTracker },
			{ "StartListener", &ASmartsuitReceiver::execStartListener },
			{ "StopListener", &ASmartsuitReceiver::execStopListener },
			{ "UPosition", &ASmartsuitReceiver::execUPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics
	{
		struct SmartsuitReceiver_eventFQuatToRotator_Parms
		{
			FQuat rotation;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventFQuatToRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventFQuatToRotator_Parms, rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::NewProp_rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Converts Quaternions into rotators." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "FQuatToRotator", nullptr, nullptr, sizeof(SmartsuitReceiver_eventFQuatToRotator_Parms), Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics
	{
		struct SmartsuitReceiver_eventGetProp_Parms
		{
			FString name;
			bool isLive;
			FProp ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_isLive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLive;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetProp_Parms, ReturnValue), Z_Construct_UScriptStruct_FProp, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_isLive_SetBit(void* Obj)
	{
		((SmartsuitReceiver_eventGetProp_Parms*)Obj)->isLive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_isLive = { "isLive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SmartsuitReceiver_eventGetProp_Parms), &Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_isLive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetProp_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_isLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Calls a function in VPStreamingNetwork to retrieve a prop by name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "GetProp", nullptr, nullptr, sizeof(SmartsuitReceiver_eventGetProp_Parms), Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_GetProp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_GetProp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics
	{
		struct SmartsuitReceiver_eventGetTracker_Parms
		{
			FString name;
			bool isLive;
			FTracker ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_isLive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLive;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetTracker_Parms, ReturnValue), Z_Construct_UScriptStruct_FTracker, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::NewProp_isLive_SetBit(void* Obj)
	{
		((SmartsuitReceiver_eventGetTracker_Parms*)Obj)->isLive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::NewProp_isLive = { "isLive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SmartsuitReceiver_eventGetTracker_Parms), &Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::NewProp_isLive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventGetTracker_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::NewProp_isLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Calls a function in VPStreamingNetwork to retrieve a tracker by name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "GetTracker", nullptr, nullptr, sizeof(SmartsuitReceiver_eventGetTracker_Parms), Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_GetTracker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_GetTracker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_StartListener_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_StartListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "Comment", "/**\n\x09* Starts the SmartsuitReceiver socket so it listens for Smartsuits.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Starts the SmartsuitReceiver socket so it listens for Smartsuits." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_StartListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "StartListener", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_StartListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_StartListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_StartListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_StartListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_StopListener_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_StopListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "Comment", "/**\n\x09* Stops the SmartsuitReceiver socket so it stops listening for Smartsuits.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Stops the SmartsuitReceiver socket so it stops listening for Smartsuits." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_StopListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "StopListener", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_StopListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_StopListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_StopListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_StopListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics
	{
		struct SmartsuitReceiver_eventUPosition_Parms
		{
			FVector position;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventUPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmartsuitReceiver_eventUPosition_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Converts position into Unreal position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitReceiver, nullptr, "UPosition", nullptr, nullptr, sizeof(SmartsuitReceiver_eventUPosition_Parms), Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartsuitReceiver_UPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmartsuitReceiver_UPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASmartsuitReceiver_NoRegister()
	{
		return ASmartsuitReceiver::StaticClass();
	}
	struct Z_Construct_UClass_ASmartsuitReceiver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VPListenPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_VPListenPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_streamingDataPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_streamingDataPort;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASmartsuitReceiver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASmartsuitReceiver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASmartsuitReceiver_FQuatToRotator, "FQuatToRotator" }, // 2942828009
		{ &Z_Construct_UFunction_ASmartsuitReceiver_GetProp, "GetProp" }, // 1300812174
		{ &Z_Construct_UFunction_ASmartsuitReceiver_GetTracker, "GetTracker" }, // 516908897
		{ &Z_Construct_UFunction_ASmartsuitReceiver_StartListener, "StartListener" }, // 959429819
		{ &Z_Construct_UFunction_ASmartsuitReceiver_StopListener, "StopListener" }, // 417820758
		{ &Z_Construct_UFunction_ASmartsuitReceiver_UPosition, "UPosition" }, // 644711538
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartsuitReceiver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SmartsuitReceiver.h" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "A SmartsuitReceiver implements the network interface between Smartsuit and Unreal. This is required for SmartsuitController to work properly. You can have only one SmartsuitReceiver at the same time." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_VPListenPort_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/**\n\x09* The port number used to listen for trackers and props data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "The port number used to listen for trackers and props data." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_VPListenPort = { "VPListenPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASmartsuitReceiver, VPListenPort), METADATA_PARAMS(Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_VPListenPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_VPListenPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_streamingDataPort_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "Comment", "/**\n\x09* The port number used to listen for the streaming data of Smartsuits.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "The port number used to listen for the streaming data of Smartsuits." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_streamingDataPort = { "streamingDataPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASmartsuitReceiver, streamingDataPort), METADATA_PARAMS(Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_streamingDataPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_streamingDataPort_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASmartsuitReceiver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_VPListenPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitReceiver_Statics::NewProp_streamingDataPort,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASmartsuitReceiver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASmartsuitReceiver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASmartsuitReceiver_Statics::ClassParams = {
		&ASmartsuitReceiver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASmartsuitReceiver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitReceiver_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASmartsuitReceiver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitReceiver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASmartsuitReceiver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASmartsuitReceiver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASmartsuitReceiver, 4130630909);
	template<> SMARTSUIT_API UClass* StaticClass<ASmartsuitReceiver>()
	{
		return ASmartsuitReceiver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASmartsuitReceiver(Z_Construct_UClass_ASmartsuitReceiver, &ASmartsuitReceiver::StaticClass, TEXT("/Script/Smartsuit"), TEXT("ASmartsuitReceiver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASmartsuitReceiver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
