// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/VirtualProductionProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualProductionProp() {}
// Cross Module References
	SMARTSUIT_API UClass* Z_Construct_UClass_UVirtualProductionProp_NoRegister();
	SMARTSUIT_API UClass* Z_Construct_UClass_UVirtualProductionProp();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References
	void UVirtualProductionProp::StaticRegisterNativesUVirtualProductionProp()
	{
	}
	UClass* Z_Construct_UClass_UVirtualProductionProp_NoRegister()
	{
		return UVirtualProductionProp::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualProductionProp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scalePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scalePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_useLocalSpace_MetaData[];
#endif
		static void NewProp_useLocalSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useLocalSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isLive_MetaData[];
#endif
		static void NewProp_isLive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualProductionProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualProductionProp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "VirtualProductionProp.h" },
		{ "ModuleRelativePath", "Public/VirtualProductionProp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_scalePosition_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_scalePosition = { "scalePosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVirtualProductionProp, scalePosition), METADATA_PARAMS(Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_scalePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_scalePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_useLocalSpace_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionProp.h" },
	};
#endif
	void Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_useLocalSpace_SetBit(void* Obj)
	{
		((UVirtualProductionProp*)Obj)->useLocalSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_useLocalSpace = { "useLocalSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVirtualProductionProp), &Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_useLocalSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_useLocalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_useLocalSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_isLive_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionProp.h" },
	};
#endif
	void Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_isLive_SetBit(void* Obj)
	{
		((UVirtualProductionProp*)Obj)->isLive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_isLive = { "isLive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVirtualProductionProp), &Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_isLive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_isLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_isLive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/**\n\x09* The port number used to listen for trackers and props data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/VirtualProductionProp.h" },
		{ "ToolTip", "The port number used to listen for trackers and props data." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVirtualProductionProp, name), METADATA_PARAMS(Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualProductionProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_scalePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_useLocalSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_isLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualProductionProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualProductionProp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVirtualProductionProp_Statics::ClassParams = {
		&UVirtualProductionProp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVirtualProductionProp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionProp_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualProductionProp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualProductionProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVirtualProductionProp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualProductionProp, 3441555630);
	template<> SMARTSUIT_API UClass* StaticClass<UVirtualProductionProp>()
	{
		return UVirtualProductionProp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualProductionProp(Z_Construct_UClass_UVirtualProductionProp, &UVirtualProductionProp::StaticClass, TEXT("/Script/Smartsuit"), TEXT("UVirtualProductionProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualProductionProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
