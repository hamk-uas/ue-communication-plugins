// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Thingworx/Public/Thingworx.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThingworx() {}
// Cross Module References
	THINGWORX_API UScriptStruct* Z_Construct_UScriptStruct_FResponse();
	UPackage* Z_Construct_UPackage__Script_Thingworx();
	THINGWORX_API UScriptStruct* Z_Construct_UScriptStruct_FMeasurementValue();
	THINGWORX_API UScriptStruct* Z_Construct_UScriptStruct_FDataShape();
	THINGWORX_API UScriptStruct* Z_Construct_UScriptStruct_FFieldDefinitions();
	THINGWORX_API UScriptStruct* Z_Construct_UScriptStruct_FFieldDefinitionField();
	THINGWORX_API UScriptStruct* Z_Construct_UScriptStruct_FAspects();
	THINGWORX_API UClass* Z_Construct_UClass_UThingworx_NoRegister();
	THINGWORX_API UClass* Z_Construct_UClass_UThingworx();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	THINGWORX_API UFunction* Z_Construct_UFunction_UThingworx_getMeasurement();
// End Cross Module References
class UScriptStruct* FResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THINGWORX_API uint32 Get_Z_Construct_UScriptStruct_FResponse_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResponse, Z_Construct_UPackage__Script_Thingworx(), TEXT("Response"), sizeof(FResponse), Get_Z_Construct_UScriptStruct_FResponse_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResponse(FResponse::StaticStruct, TEXT("/Script/Thingworx"), TEXT("Response"), false, nullptr, nullptr);
static struct FScriptStruct_Thingworx_StaticRegisterNativesFResponse
{
	FScriptStruct_Thingworx_StaticRegisterNativesFResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Response")),new UScriptStruct::TCppStructOps<FResponse>);
	}
} ScriptStruct_Thingworx_StaticRegisterNativesFResponse;
	struct Z_Construct_UScriptStruct_FResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rows_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rows;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rows_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dataShape_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dataShape;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponse_Statics::NewProp_rows_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FResponse_Statics::NewProp_rows = { UE4CodeGen_Private::EPropertyClass::Array, "rows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FResponse, rows), METADATA_PARAMS(Z_Construct_UScriptStruct_FResponse_Statics::NewProp_rows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResponse_Statics::NewProp_rows_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResponse_Statics::NewProp_rows_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "rows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMeasurementValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponse_Statics::NewProp_dataShape_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResponse_Statics::NewProp_dataShape = { UE4CodeGen_Private::EPropertyClass::Struct, "dataShape", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FResponse, dataShape), Z_Construct_UScriptStruct_FDataShape, METADATA_PARAMS(Z_Construct_UScriptStruct_FResponse_Statics::NewProp_dataShape_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResponse_Statics::NewProp_dataShape_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponse_Statics::NewProp_rows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponse_Statics::NewProp_rows_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponse_Statics::NewProp_dataShape,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Thingworx,
		nullptr,
		&NewStructOps,
		"Response",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FResponse),
		alignof(FResponse),
		Z_Construct_UScriptStruct_FResponse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FResponse_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResponse_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResponse_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Thingworx();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Response"), sizeof(FResponse), Get_Z_Construct_UScriptStruct_FResponse_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResponse_CRC() { return 3269758617U; }
class UScriptStruct* FMeasurementValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THINGWORX_API uint32 Get_Z_Construct_UScriptStruct_FMeasurementValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeasurementValue, Z_Construct_UPackage__Script_Thingworx(), TEXT("MeasurementValue"), sizeof(FMeasurementValue), Get_Z_Construct_UScriptStruct_FMeasurementValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeasurementValue(FMeasurementValue::StaticStruct, TEXT("/Script/Thingworx"), TEXT("MeasurementValue"), false, nullptr, nullptr);
static struct FScriptStruct_Thingworx_StaticRegisterNativesFMeasurementValue
{
	FScriptStruct_Thingworx_StaticRegisterNativesFMeasurementValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeasurementValue")),new UScriptStruct::TCppStructOps<FMeasurementValue>);
	}
} ScriptStruct_Thingworx_StaticRegisterNativesFMeasurementValue;
	struct Z_Construct_UScriptStruct_FMeasurementValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeasurementValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeasurementValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeasurementValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeasurementValue_Statics::NewProp_timestamp_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeasurementValue_Statics::NewProp_timestamp = { UE4CodeGen_Private::EPropertyClass::Str, "timestamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FMeasurementValue, timestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeasurementValue_Statics::NewProp_timestamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeasurementValue_Statics::NewProp_timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeasurementValue_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeasurementValue_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FMeasurementValue, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeasurementValue_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeasurementValue_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeasurementValue_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeasurementValue_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FMeasurementValue, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeasurementValue_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeasurementValue_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeasurementValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeasurementValue_Statics::NewProp_timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeasurementValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeasurementValue_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeasurementValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Thingworx,
		nullptr,
		&NewStructOps,
		"MeasurementValue",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMeasurementValue),
		alignof(FMeasurementValue),
		Z_Construct_UScriptStruct_FMeasurementValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeasurementValue_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeasurementValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeasurementValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeasurementValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeasurementValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Thingworx();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeasurementValue"), sizeof(FMeasurementValue), Get_Z_Construct_UScriptStruct_FMeasurementValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeasurementValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeasurementValue_CRC() { return 4115461428U; }
class UScriptStruct* FDataShape::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THINGWORX_API uint32 Get_Z_Construct_UScriptStruct_FDataShape_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataShape, Z_Construct_UPackage__Script_Thingworx(), TEXT("DataShape"), sizeof(FDataShape), Get_Z_Construct_UScriptStruct_FDataShape_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataShape(FDataShape::StaticStruct, TEXT("/Script/Thingworx"), TEXT("DataShape"), false, nullptr, nullptr);
static struct FScriptStruct_Thingworx_StaticRegisterNativesFDataShape
{
	FScriptStruct_Thingworx_StaticRegisterNativesFDataShape()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DataShape")),new UScriptStruct::TCppStructOps<FDataShape>);
	}
} ScriptStruct_Thingworx_StaticRegisterNativesFDataShape;
	struct Z_Construct_UScriptStruct_FDataShape_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fieldDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_fieldDefinitions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataShape_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataShape_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataShape>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataShape_Statics::NewProp_fieldDefinitions_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataShape_Statics::NewProp_fieldDefinitions = { UE4CodeGen_Private::EPropertyClass::Struct, "fieldDefinitions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FDataShape, fieldDefinitions), Z_Construct_UScriptStruct_FFieldDefinitions, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataShape_Statics::NewProp_fieldDefinitions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDataShape_Statics::NewProp_fieldDefinitions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataShape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataShape_Statics::NewProp_fieldDefinitions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataShape_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Thingworx,
		nullptr,
		&NewStructOps,
		"DataShape",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FDataShape),
		alignof(FDataShape),
		Z_Construct_UScriptStruct_FDataShape_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FDataShape_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataShape_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDataShape_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataShape()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataShape_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Thingworx();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataShape"), sizeof(FDataShape), Get_Z_Construct_UScriptStruct_FDataShape_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataShape_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataShape_CRC() { return 456879974U; }
class UScriptStruct* FFieldDefinitions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THINGWORX_API uint32 Get_Z_Construct_UScriptStruct_FFieldDefinitions_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFieldDefinitions, Z_Construct_UPackage__Script_Thingworx(), TEXT("FieldDefinitions"), sizeof(FFieldDefinitions), Get_Z_Construct_UScriptStruct_FFieldDefinitions_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFieldDefinitions(FFieldDefinitions::StaticStruct, TEXT("/Script/Thingworx"), TEXT("FieldDefinitions"), false, nullptr, nullptr);
static struct FScriptStruct_Thingworx_StaticRegisterNativesFFieldDefinitions
{
	FScriptStruct_Thingworx_StaticRegisterNativesFFieldDefinitions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FieldDefinitions")),new UScriptStruct::TCppStructOps<FFieldDefinitions>);
	}
} ScriptStruct_Thingworx_StaticRegisterNativesFFieldDefinitions;
	struct Z_Construct_UScriptStruct_FFieldDefinitions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldDefinitions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFieldDefinitions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFieldDefinitions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldDefinitions_Statics::NewProp_timestamp_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFieldDefinitions_Statics::NewProp_timestamp = { UE4CodeGen_Private::EPropertyClass::Struct, "timestamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFieldDefinitions, timestamp), Z_Construct_UScriptStruct_FFieldDefinitionField, METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldDefinitions_Statics::NewProp_timestamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldDefinitions_Statics::NewProp_timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldDefinitions_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFieldDefinitions_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFieldDefinitions, Value), Z_Construct_UScriptStruct_FFieldDefinitionField, METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldDefinitions_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldDefinitions_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldDefinitions_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFieldDefinitions_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Struct, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFieldDefinitions, Name), Z_Construct_UScriptStruct_FFieldDefinitionField, METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldDefinitions_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldDefinitions_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFieldDefinitions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldDefinitions_Statics::NewProp_timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldDefinitions_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldDefinitions_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFieldDefinitions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Thingworx,
		nullptr,
		&NewStructOps,
		"FieldDefinitions",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FFieldDefinitions),
		alignof(FFieldDefinitions),
		Z_Construct_UScriptStruct_FFieldDefinitions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldDefinitions_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldDefinitions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldDefinitions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFieldDefinitions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFieldDefinitions_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Thingworx();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FieldDefinitions"), sizeof(FFieldDefinitions), Get_Z_Construct_UScriptStruct_FFieldDefinitions_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFieldDefinitions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFieldDefinitions_CRC() { return 3075411658U; }
class UScriptStruct* FFieldDefinitionField::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THINGWORX_API uint32 Get_Z_Construct_UScriptStruct_FFieldDefinitionField_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFieldDefinitionField, Z_Construct_UPackage__Script_Thingworx(), TEXT("FieldDefinitionField"), sizeof(FFieldDefinitionField), Get_Z_Construct_UScriptStruct_FFieldDefinitionField_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFieldDefinitionField(FFieldDefinitionField::StaticStruct, TEXT("/Script/Thingworx"), TEXT("FieldDefinitionField"), false, nullptr, nullptr);
static struct FScriptStruct_Thingworx_StaticRegisterNativesFFieldDefinitionField
{
	FScriptStruct_Thingworx_StaticRegisterNativesFFieldDefinitionField()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FieldDefinitionField")),new UScriptStruct::TCppStructOps<FFieldDefinitionField>);
	}
} ScriptStruct_Thingworx_StaticRegisterNativesFFieldDefinitionField;
	struct Z_Construct_UScriptStruct_FFieldDefinitionField_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aspects_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_aspects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ordinal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ordinal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_baseType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFieldDefinitionField>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_aspects_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_aspects = { UE4CodeGen_Private::EPropertyClass::Struct, "aspects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFieldDefinitionField, aspects), Z_Construct_UScriptStruct_FAspects, METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_aspects_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_aspects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_ordinal_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_ordinal = { UE4CodeGen_Private::EPropertyClass::Int, "ordinal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFieldDefinitionField, ordinal), METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_ordinal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_ordinal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_baseType_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_baseType = { UE4CodeGen_Private::EPropertyClass::Str, "baseType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFieldDefinitionField, baseType), METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_baseType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_baseType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_description_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_description = { UE4CodeGen_Private::EPropertyClass::Str, "description", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFieldDefinitionField, description), METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_description_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_name = { UE4CodeGen_Private::EPropertyClass::Str, "name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFieldDefinitionField, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_aspects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_ordinal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_baseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::NewProp_name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Thingworx,
		nullptr,
		&NewStructOps,
		"FieldDefinitionField",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FFieldDefinitionField),
		alignof(FFieldDefinitionField),
		Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFieldDefinitionField()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFieldDefinitionField_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Thingworx();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FieldDefinitionField"), sizeof(FFieldDefinitionField), Get_Z_Construct_UScriptStruct_FFieldDefinitionField_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFieldDefinitionField_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFieldDefinitionField_CRC() { return 1227079922U; }
class UScriptStruct* FAspects::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THINGWORX_API uint32 Get_Z_Construct_UScriptStruct_FAspects_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAspects, Z_Construct_UPackage__Script_Thingworx(), TEXT("Aspects"), sizeof(FAspects), Get_Z_Construct_UScriptStruct_FAspects_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAspects(FAspects::StaticStruct, TEXT("/Script/Thingworx"), TEXT("Aspects"), false, nullptr, nullptr);
static struct FScriptStruct_Thingworx_StaticRegisterNativesFAspects
{
	FScriptStruct_Thingworx_StaticRegisterNativesFAspects()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Aspects")),new UScriptStruct::TCppStructOps<FAspects>);
	}
} ScriptStruct_Thingworx_StaticRegisterNativesFAspects;
	struct Z_Construct_UScriptStruct_FAspects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPrimaryKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_isPrimaryKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAspects_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAspects_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAspects>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAspects_Statics::NewProp_isPrimaryKey_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAspects_Statics::NewProp_isPrimaryKey = { UE4CodeGen_Private::EPropertyClass::Str, "isPrimaryKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FAspects, isPrimaryKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FAspects_Statics::NewProp_isPrimaryKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAspects_Statics::NewProp_isPrimaryKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAspects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAspects_Statics::NewProp_isPrimaryKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAspects_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Thingworx,
		nullptr,
		&NewStructOps,
		"Aspects",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAspects),
		alignof(FAspects),
		Z_Construct_UScriptStruct_FAspects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAspects_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAspects_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAspects_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAspects()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAspects_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Thingworx();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Aspects"), sizeof(FAspects), Get_Z_Construct_UScriptStruct_FAspects_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAspects_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAspects_CRC() { return 1380673066U; }
	void UThingworx::StaticRegisterNativesUThingworx()
	{
		UClass* Class = UThingworx::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getMeasurement", &UThingworx::execgetMeasurement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UThingworx_getMeasurement_Statics
	{
		struct Thingworx_eventgetMeasurement_Parms
		{
			FResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UThingworx_getMeasurement_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Thingworx_eventgetMeasurement_Parms, ReturnValue), Z_Construct_UScriptStruct_FResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThingworx_getMeasurement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThingworx_getMeasurement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThingworx_getMeasurement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThingworx_getMeasurement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThingworx, "getMeasurement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(Thingworx_eventgetMeasurement_Parms), Z_Construct_UFunction_UThingworx_getMeasurement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UThingworx_getMeasurement_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThingworx_getMeasurement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UThingworx_getMeasurement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThingworx_getMeasurement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThingworx_getMeasurement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UThingworx_NoRegister()
	{
		return UThingworx::StaticClass();
	}
	struct Z_Construct_UClass_UThingworx_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StreamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeasurementList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeasurementList;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MeasurementList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApiBaseUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApiBaseUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequestFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_auth_token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_auth_token;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThingworx_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Thingworx,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UThingworx_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UThingworx_getMeasurement, "getMeasurement" }, // 2228985857
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThingworx_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Thingworx.h" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThingworx_Statics::NewProp_StreamName_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UThingworx_Statics::NewProp_StreamName = { UE4CodeGen_Private::EPropertyClass::Str, "StreamName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UThingworx, StreamName), METADATA_PARAMS(Z_Construct_UClass_UThingworx_Statics::NewProp_StreamName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThingworx_Statics::NewProp_StreamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThingworx_Statics::NewProp_SourceName_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UThingworx_Statics::NewProp_SourceName = { UE4CodeGen_Private::EPropertyClass::Str, "SourceName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UThingworx, SourceName), METADATA_PARAMS(Z_Construct_UClass_UThingworx_Statics::NewProp_SourceName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThingworx_Statics::NewProp_SourceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThingworx_Statics::NewProp_MeasurementList_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UThingworx_Statics::NewProp_MeasurementList = { UE4CodeGen_Private::EPropertyClass::Array, "MeasurementList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UThingworx, MeasurementList), METADATA_PARAMS(Z_Construct_UClass_UThingworx_Statics::NewProp_MeasurementList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThingworx_Statics::NewProp_MeasurementList_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UThingworx_Statics::NewProp_MeasurementList_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "MeasurementList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThingworx_Statics::NewProp_ApiBaseUrl_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UThingworx_Statics::NewProp_ApiBaseUrl = { UE4CodeGen_Private::EPropertyClass::Str, "ApiBaseUrl", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UThingworx, ApiBaseUrl), METADATA_PARAMS(Z_Construct_UClass_UThingworx_Statics::NewProp_ApiBaseUrl_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThingworx_Statics::NewProp_ApiBaseUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThingworx_Statics::NewProp_RequestFrequency_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThingworx_Statics::NewProp_RequestFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "RequestFrequency", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UThingworx, RequestFrequency), METADATA_PARAMS(Z_Construct_UClass_UThingworx_Statics::NewProp_RequestFrequency_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThingworx_Statics::NewProp_RequestFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThingworx_Statics::NewProp_auth_token_MetaData[] = {
		{ "Category", "Thingworx" },
		{ "ModuleRelativePath", "Public/Thingworx.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UThingworx_Statics::NewProp_auth_token = { UE4CodeGen_Private::EPropertyClass::Str, "auth_token", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UThingworx, auth_token), METADATA_PARAMS(Z_Construct_UClass_UThingworx_Statics::NewProp_auth_token_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThingworx_Statics::NewProp_auth_token_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThingworx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThingworx_Statics::NewProp_StreamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThingworx_Statics::NewProp_SourceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThingworx_Statics::NewProp_MeasurementList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThingworx_Statics::NewProp_MeasurementList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThingworx_Statics::NewProp_ApiBaseUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThingworx_Statics::NewProp_RequestFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThingworx_Statics::NewProp_auth_token,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThingworx_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThingworx>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UThingworx_Statics::ClassParams = {
		&UThingworx::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UThingworx_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UThingworx_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UThingworx_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UThingworx_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThingworx()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UThingworx_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UThingworx, 1634975389);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UThingworx(Z_Construct_UClass_UThingworx, &UThingworx::StaticClass, TEXT("/Script/Thingworx"), TEXT("UThingworx"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThingworx);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
