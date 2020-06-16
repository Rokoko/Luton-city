// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/SmartsuitPoseNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartsuitPoseNode() {}
// Cross Module References
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitPoseNode();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	SMARTSUIT_API UClass* Z_Construct_UClass_ASmartsuitController_NoRegister();
	SMARTSUIT_API UClass* Z_Construct_UClass_USmartsuitBodyMapData_NoRegister();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitBodyMap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	SMARTSUIT_API UClass* Z_Construct_UClass_USmartsuitBodyMapData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
class UScriptStruct* FSmartsuitPoseNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMARTSUIT_API uint32 Get_Z_Construct_UScriptStruct_FSmartsuitPoseNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartsuitPoseNode, Z_Construct_UPackage__Script_Smartsuit(), TEXT("SmartsuitPoseNode"), sizeof(FSmartsuitPoseNode), Get_Z_Construct_UScriptStruct_FSmartsuitPoseNode_Hash());
	}
	return Singleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FSmartsuitPoseNode>()
{
	return FSmartsuitPoseNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSmartsuitPoseNode(FSmartsuitPoseNode::StaticStruct, TEXT("/Script/Smartsuit"), TEXT("SmartsuitPoseNode"), false, nullptr, nullptr);
static struct FScriptStruct_Smartsuit_StaticRegisterNativesFSmartsuitPoseNode
{
	FScriptStruct_Smartsuit_StaticRegisterNativesFSmartsuitPoseNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SmartsuitPoseNode")),new UScriptStruct::TCppStructOps<FSmartsuitPoseNode>);
	}
} ScriptStruct_Smartsuit_StaticRegisterNativesFSmartsuitPoseNode;
	struct Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleBones_MetaData[];
#endif
		static void NewProp_ScaleBones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ScaleBones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeToStart_MetaData[];
#endif
		static void NewProp_RelativeToStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RelativeToStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMapOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoneMapOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*! \\brief An animation controller which poses a humanoid character to the pose as received from the Smartsuit.\n*\n* This is the main animation blueprint node for Smartsuit. It takes as input a character in T-pose along with a mapping of the bones necessary to drive the animation.\n* Then it rotates the bones and translates the hip so the character behaves as the player in the Smartsuit.\n*/" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "! \\brief An animation controller which poses a humanoid character to the pose as received from the Smartsuit.\n*\n* This is the main animation blueprint node for Smartsuit. It takes as input a character in T-pose along with a mapping of the bones necessary to drive the animation.\n* Then it rotates the bones and translates the hip so the character behaves as the player in the Smartsuit." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartsuitPoseNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_ScaleBones_MetaData[] = {
		{ "Category", "SmartsuitAnimationSetup" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "Scale bones to match the BodyModel dimensions. This will make the animation look more natural on the character but may cause unusual effects on the mesh." },
	};
#endif
	void Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_ScaleBones_SetBit(void* Obj)
	{
		((FSmartsuitPoseNode*)Obj)->ScaleBones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_ScaleBones = { "ScaleBones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSmartsuitPoseNode), &Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_ScaleBones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_ScaleBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_ScaleBones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RelativeToStart_MetaData[] = {
		{ "Category", "SmartsuitAnimationSetup" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "When this is True the animation will keep the starting position in the XY-plane of the character when the game starts. This way the character will not jump out of his initial position. Its Z position however will be identical to the one received from the Smartsuit." },
	};
#endif
	void Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RelativeToStart_SetBit(void* Obj)
	{
		((FSmartsuitPoseNode*)Obj)->RelativeToStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RelativeToStart = { "RelativeToStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSmartsuitPoseNode), &Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RelativeToStart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RelativeToStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RelativeToStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_Controller_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "SmartsuitAnimationSetup" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The SmartsuitController that will be used to animate this character. This is required for the animation to work." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitPoseNode, Controller), Z_Construct_UClass_ASmartsuitController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_Controller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMapOverride_MetaData[] = {
		{ "Category", "SmartsuitAnimationSetup" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMapOverride = { "BoneMapOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitPoseNode, BoneMapOverride), Z_Construct_UClass_USmartsuitBodyMapData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMapOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMapOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMap_MetaData[] = {
		{ "Category", "SmartsuitAnimationSetup" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "A mapping between the Smartsuit expected bone names and the bones that will animate from the Smartsuit component. Every bone is required for the animation to work properly." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMap = { "BoneMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitPoseNode, BoneMap), Z_Construct_UScriptStruct_FSmartsuitBodyMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_ScaleBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RelativeToStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMapOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"SmartsuitPoseNode",
		sizeof(FSmartsuitPoseNode),
		alignof(FSmartsuitPoseNode),
		Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitPoseNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSmartsuitPoseNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Smartsuit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SmartsuitPoseNode"), sizeof(FSmartsuitPoseNode), Get_Z_Construct_UScriptStruct_FSmartsuitPoseNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSmartsuitPoseNode_Hash() { return 749253914U; }
class UScriptStruct* FSmartsuitBodyMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMARTSUIT_API uint32 Get_Z_Construct_UScriptStruct_FSmartsuitBodyMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartsuitBodyMap, Z_Construct_UPackage__Script_Smartsuit(), TEXT("SmartsuitBodyMap"), sizeof(FSmartsuitBodyMap), Get_Z_Construct_UScriptStruct_FSmartsuitBodyMap_Hash());
	}
	return Singleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FSmartsuitBodyMap>()
{
	return FSmartsuitBodyMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSmartsuitBodyMap(FSmartsuitBodyMap::StaticStruct, TEXT("/Script/Smartsuit"), TEXT("SmartsuitBodyMap"), false, nullptr, nullptr);
static struct FScriptStruct_Smartsuit_StaticRegisterNativesFSmartsuitBodyMap
{
	FScriptStruct_Smartsuit_StaticRegisterNativesFSmartsuitBodyMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SmartsuitBodyMap")),new UScriptStruct::TCppStructOps<FSmartsuitBodyMap>);
	}
} ScriptStruct_Smartsuit_StaticRegisterNativesFSmartsuitBodyMap;
	struct Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightToe_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightToe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightLeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightLeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightUpleg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightUpleg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftToe_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftToe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftLeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftLeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftUpleg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftUpleg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightFingerTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightFingerTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightForearm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightForearm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightShoulder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightShoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftFingerTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftFingerTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftForearm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftForearm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftShoulder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftShoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_headTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_headTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_head_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_head;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_neck_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_neck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_chest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stomach_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stomach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*! \\brief Bone reference mapping that is used to map bones between Smartsuit sensors and skeleton.*/" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "! \\brief Bone reference mapping that is used to map bones between Smartsuit sensors and skeleton." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartsuitBodyMap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightToe_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right toe bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightToe = { "rightToe", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightToe), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightToe_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightToe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFoot_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right foot bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFoot = { "rightFoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLeg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right lower leg bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLeg = { "rightLeg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightLeg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightUpleg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right upper leg bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightUpleg = { "rightUpleg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightUpleg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightUpleg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightUpleg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftToe_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left toe bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftToe = { "leftToe", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftToe), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftToe_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftToe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFoot_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left foot bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFoot = { "leftFoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLeg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left lower leg bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLeg = { "leftLeg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftLeg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftUpleg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left upper leg bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftUpleg = { "leftUpleg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftUpleg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftUpleg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftUpleg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFingerTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left hand bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFingerTip = { "rightFingerTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightFingerTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFingerTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFingerTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightHand_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right hand bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightHand = { "rightHand", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightForearm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right lower arm bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightForearm = { "rightForearm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightForearm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightForearm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightForearm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightArm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right upper arm bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightArm = { "rightArm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightShoulder_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right shoulder bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightShoulder = { "rightShoulder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightShoulder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightShoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightShoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFingerTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left hand bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFingerTip = { "leftFingerTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftFingerTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFingerTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFingerTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftHand_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left hand bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftHand = { "leftHand", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftForearm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left lower arm bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftForearm = { "leftForearm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftForearm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftForearm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftForearm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftArm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left upper arm bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftArm = { "leftArm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftShoulder_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left shoulder bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftShoulder = { "leftShoulder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftShoulder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftShoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftShoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_headTop_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The head bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_headTop = { "headTop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, headTop), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_headTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_headTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_head_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The head bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_head = { "head", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, head), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_head_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_head_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_neck_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The neck bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_neck = { "neck", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, neck), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_neck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_neck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_chest_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The chest bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_chest = { "chest", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, chest), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_chest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_chest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_stomach_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The stomach bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_stomach = { "stomach", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, stomach), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_stomach_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_stomach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_hip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The hip bone to control." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_hip = { "hip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartsuitBodyMap, hip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_hip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_hip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightToe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightUpleg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftToe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftUpleg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFingerTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightForearm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightShoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFingerTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftForearm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftShoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_headTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_head,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_neck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_chest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_stomach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_hip,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		nullptr,
		&NewStructOps,
		"SmartsuitBodyMap",
		sizeof(FSmartsuitBodyMap),
		alignof(FSmartsuitBodyMap),
		Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitBodyMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSmartsuitBodyMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Smartsuit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SmartsuitBodyMap"), sizeof(FSmartsuitBodyMap), Get_Z_Construct_UScriptStruct_FSmartsuitBodyMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSmartsuitBodyMap_Hash() { return 1107199490U; }
	void USmartsuitBodyMapData::StaticRegisterNativesUSmartsuitBodyMapData()
	{
	}
	UClass* Z_Construct_UClass_USmartsuitBodyMapData_NoRegister()
	{
		return USmartsuitBodyMapData::StaticClass();
	}
	struct Z_Construct_UClass_USmartsuitBodyMapData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightToe_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightToe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightLeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightLeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightUpleg_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightUpleg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftToe_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftToe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftLeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftLeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftUpleg_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftUpleg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightFingerTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightFingerTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightForearm_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightForearm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightShoulder_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_rightShoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftFingerTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftFingerTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftForearm_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftForearm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftShoulder_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_leftShoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_headTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_headTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_head_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_head;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_neck_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_neck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chest_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_chest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stomach_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_stomach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hip_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_hip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartsuitBodyMapData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SmartsuitPoseNode.h" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightToe_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightToe = { "rightToe", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightToe), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightToe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightToe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightFoot_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightFoot = { "rightFoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightFoot), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLeg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLeg = { "rightLeg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightLeg), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightUpleg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightUpleg = { "rightUpleg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightUpleg), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightUpleg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightUpleg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftToe_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftToe = { "leftToe", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftToe), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftToe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftToe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftFoot_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftFoot = { "leftFoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftFoot), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLeg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLeg = { "leftLeg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftLeg), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftUpleg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftUpleg = { "leftUpleg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftUpleg), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftUpleg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftUpleg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightFingerTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightFingerTip = { "rightFingerTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightFingerTip), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightFingerTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightFingerTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightHand_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightHand = { "rightHand", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightHand), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightForearm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightForearm = { "rightForearm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightForearm), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightForearm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightForearm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightArm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightArm = { "rightArm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightArm), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightShoulder_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightShoulder = { "rightShoulder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, rightShoulder), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightShoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightShoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftFingerTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftFingerTip = { "leftFingerTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftFingerTip), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftFingerTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftFingerTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftHand_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftHand = { "leftHand", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftHand), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftForearm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftForearm = { "leftForearm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftForearm), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftForearm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftForearm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftArm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftArm = { "leftArm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftArm), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftShoulder_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftShoulder = { "leftShoulder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, leftShoulder), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftShoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftShoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_headTop_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_headTop = { "headTop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, headTop), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_headTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_headTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_head_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_head = { "head", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, head), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_head_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_head_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_neck_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_neck = { "neck", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, neck), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_neck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_neck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_chest_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_chest = { "chest", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, chest), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_chest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_chest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_stomach_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_stomach = { "stomach", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, stomach), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_stomach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_stomach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_hip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_hip = { "hip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USmartsuitBodyMapData, hip), METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_hip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_hip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartsuitBodyMapData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightToe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightLeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightUpleg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftToe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftLeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftUpleg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightFingerTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightForearm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_rightShoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftFingerTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftForearm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_leftShoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_headTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_head,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_neck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_chest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_stomach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitBodyMapData_Statics::NewProp_hip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartsuitBodyMapData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartsuitBodyMapData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USmartsuitBodyMapData_Statics::ClassParams = {
		&USmartsuitBodyMapData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USmartsuitBodyMapData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USmartsuitBodyMapData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBodyMapData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartsuitBodyMapData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USmartsuitBodyMapData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USmartsuitBodyMapData, 463236374);
	template<> SMARTSUIT_API UClass* StaticClass<USmartsuitBodyMapData>()
	{
		return USmartsuitBodyMapData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USmartsuitBodyMapData(Z_Construct_UClass_USmartsuitBodyMapData, &USmartsuitBodyMapData::StaticClass, TEXT("/Script/Smartsuit"), TEXT("USmartsuitBodyMapData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartsuitBodyMapData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
