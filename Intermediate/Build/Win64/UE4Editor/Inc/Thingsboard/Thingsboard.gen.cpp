// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Thingsboard/Public/Thingsboard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThingsboard() {}
// Cross Module References
	THINGSBOARD_API UScriptStruct* Z_Construct_UScriptStruct_FMeasurementValues();
	UPackage* Z_Construct_UPackage__Script_Thingsboard();
	THINGSBOARD_API UScriptStruct* Z_Construct_UScriptStruct_FRenewResponse();
	THINGSBOARD_API UScriptStruct* Z_Construct_UScriptStruct_FLoginRequest();
	THINGSBOARD_API UClass* Z_Construct_UClass_UThingsboard_NoRegister();
	THINGSBOARD_API UClass* Z_Construct_UClass_UThingsboard();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	THINGSBOARD_API UFunction* Z_Construct_UFunction_UThingsboard_getMeasurementsArray();
// End Cross Module References
class UScriptStruct* FMeasurementValues::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THINGSBOARD_API uint32 Get_Z_Construct_UScriptStruct_FMeasurementValues_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeasurementValues, Z_Construct_UPackage__Script_Thingsboard(), TEXT("MeasurementValues"), sizeof(FMeasurementValues), Get_Z_Construct_UScriptStruct_FMeasurementValues_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeasurementValues(FMeasurementValues::StaticStruct, TEXT("/Script/Thingsboard"), TEXT("MeasurementValues"), false, nullptr, nullptr);
static struct FScriptStruct_Thingsboard_StaticRegisterNativesFMeasurementValues
{
	FScriptStruct_Thingsboard_StaticRegisterNativesFMeasurementValues()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeasurementValues")),new UScriptStruct::TCppStructOps<FMeasurementValues>);
	}
} ScriptStruct_Thingsboard_StaticRegisterNativesFMeasurementValues;
	struct Z_Construct_UScriptStruct_FMeasurementValues_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_measurement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_measurement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeasurementValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Thingsboard" },
		{ "ModuleRelativePath", "Public/Thingsboard.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeasurementValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeasurementValues>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeasurementValues_Statics::NewProp_value_MetaData[] = {
		{ "Category", "Thingsboard" },
		{ "ModuleRelativePath", "Public/Thingsboard.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeasurementValues_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Str, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FMeasurementValues, value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeasurementValues_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeasurementValues_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeasurementValues_Statics::NewProp_measurement_MetaData[] = {
		{ "Category", "Thingsboard" },
		{ "ModuleRelativePath", "Public/Thingsboard.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeasurementValues_Statics::NewProp_measurement = { UE4CodeGen_Private::EPropertyClass::Str, "measurement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FMeasurementValues, measurement), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeasurementValues_Statics::NewProp_measurement_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeasurementValues_Statics::NewProp_measurement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeasurementValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeasurementValues_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeasurementValues_Statics::NewProp_measurement,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeasurementValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Thingsboard,
		nullptr,
		&NewStructOps,
		"MeasurementValues",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMeasurementValues),
		alignof(FMeasurementValues),
		Z_Construct_UScriptStruct_FMeasurementValues_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeasurementValues_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeasurementValues_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeasurementValues_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeasurementValues()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeasurementValues_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Thingsboard();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeasurementValues"), sizeof(FMeasurementValues), Get_Z_Construct_UScriptStruct_FMeasurementValues_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeasurementValues_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeasurementValues_CRC() { return 1620789928U; }
class UScriptStruct* FRenewResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THINGSBOARD_API uint32 Get_Z_Construct_UScriptStruct_FRenewResponse_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenewResponse, Z_Construct_UPackage__Script_Thingsboard(), TEXT("RenewResponse"), sizeof(FRenewResponse), Get_Z_Construct_UScriptStruct_FRenewResponse_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRenewResponse(FRenewResponse::StaticStruct, TEXT("/Script/Thingsboard"), TEXT("RenewResponse"), false, nullptr, nullptr);
static struct FScriptStruct_Thingsboard_StaticRegisterNativesFRenewResponse
{
	FScriptStruct_Thingsboard_StaticRegisterNativesFRenewResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RenewResponse")),new UScriptStruct::TCppStructOps<FRenewResponse>);
	}
} ScriptStruct_Thingsboard_StaticRegisterNativesFRenewResponse;
	struct Z_Construct_UScriptStruct_FRenewResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_refreshToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_refreshToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_token;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenewResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Thingsboard.h" },
		{ "ToolTip", "struct to hold tokens for thingsboard's rest api" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenewResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenewResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenewResponse_Statics::NewProp_refreshToken_MetaData[] = {
		{ "ModuleRelativePath", "Public/Thingsboard.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRenewResponse_Statics::NewProp_refreshToken = { UE4CodeGen_Private::EPropertyClass::Str, "refreshToken", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRenewResponse, refreshToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenewResponse_Statics::NewProp_refreshToken_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRenewResponse_Statics::NewProp_refreshToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenewResponse_Statics::NewProp_token_MetaData[] = {
		{ "ModuleRelativePath", "Public/Thingsboard.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRenewResponse_Statics::NewProp_token = { UE4CodeGen_Private::EPropertyClass::Str, "token", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRenewResponse, token), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenewResponse_Statics::NewProp_token_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRenewResponse_Statics::NewProp_token_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenewResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenewResponse_Statics::NewProp_refreshToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenewResponse_Statics::NewProp_token,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenewResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Thingsboard,
		nullptr,
		&NewStructOps,
		"RenewResponse",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FRenewResponse),
		alignof(FRenewResponse),
		Z_Construct_UScriptStruct_FRenewResponse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRenewResponse_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenewResponse_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRenewResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenewResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRenewResponse_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Thingsboard();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RenewResponse"), sizeof(FRenewResponse), Get_Z_Construct_UScriptStruct_FRenewResponse_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRenewResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRenewResponse_CRC() { return 1986842481U; }
class UScriptStruct* FLoginRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THINGSBOARD_API uint32 Get_Z_Construct_UScriptStruct_FLoginRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoginRequest, Z_Construct_UPackage__Script_Thingsboard(), TEXT("LoginRequest"), sizeof(FLoginRequest), Get_Z_Construct_UScriptStruct_FLoginRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoginRequest(FLoginRequest::StaticStruct, TEXT("/Script/Thingsboard"), TEXT("LoginRequest"), false, nullptr, nullptr);
static struct FScriptStruct_Thingsboard_StaticRegisterNativesFLoginRequest
{
	FScriptStruct_Thingsboard_StaticRegisterNativesFLoginRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoginRequest")),new UScriptStruct::TCppStructOps<FLoginRequest>);
	}
} ScriptStruct_Thingsboard_StaticRegisterNativesFLoginRequest;
	struct Z_Construct_UScriptStruct_FLoginRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_username;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Thingsboard.h" },
		{ "ToolTip", "struct to hold access data to thingsboard" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoginRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoginRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginRequest_Statics::NewProp_password_MetaData[] = {
		{ "ModuleRelativePath", "Public/Thingsboard.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginRequest_Statics::NewProp_password = { UE4CodeGen_Private::EPropertyClass::Str, "password", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLoginRequest, password), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginRequest_Statics::NewProp_password_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginRequest_Statics::NewProp_password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginRequest_Statics::NewProp_username_MetaData[] = {
		{ "ModuleRelativePath", "Public/Thingsboard.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginRequest_Statics::NewProp_username = { UE4CodeGen_Private::EPropertyClass::Str, "username", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLoginRequest, username), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginRequest_Statics::NewProp_username_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginRequest_Statics::NewProp_username_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoginRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginRequest_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginRequest_Statics::NewProp_username,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoginRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Thingsboard,
		nullptr,
		&NewStructOps,
		"LoginRequest",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FLoginRequest),
		alignof(FLoginRequest),
		Z_Construct_UScriptStruct_FLoginRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginRequest_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoginRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoginRequest_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Thingsboard();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoginRequest"), sizeof(FLoginRequest), Get_Z_Construct_UScriptStruct_FLoginRequest_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoginRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoginRequest_CRC() { return 3554144746U; }
	void UThingsboard::StaticRegisterNativesUThingsboard()
	{
		UClass* Class = UThingsboard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getMeasurementsArray", &UThingsboard::execgetMeasurementsArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UThingsboard_getMeasurementsArray_Statics
	{
		struct Thingsboard_eventgetMeasurementsArray_Parms
		{
			TArray<FMeasurementValues> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UThingsboard_getMeasurementsArray_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Thingsboard_eventgetMeasurementsArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UThingsboard_getMeasurementsArray_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMeasurementValues, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThingsboard_getMeasurementsArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThingsboard_getMeasurementsArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThingsboard_getMeasurementsArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThingsboard_getMeasurementsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Thingsboard" },
		{ "ModuleRelativePath", "Public/Thingsboard.h" },
		{ "ToolTip", "get measurement value from blueprint; the component automatically logs values every RequestFrequency seconds\nbut with this function you can read it any time from blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThingsboard_getMeasurementsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThingsboard, "getMeasurementsArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(Thingsboard_eventgetMeasurementsArray_Parms), Z_Construct_UFunction_UThingsboard_getMeasurementsArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UThingsboard_getMeasurementsArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThingsboard_getMeasurementsArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UThingsboard_getMeasurementsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThingsboard_getMeasurementsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThingsboard_getMeasurementsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UThingsboard_NoRegister()
	{
		return UThingsboard::StaticClass();
	}
	struct Z_Construct_UClass_UThingsboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_measurement_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_measurement;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_measurement_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApiBaseUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApiBaseUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequestFrequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThingsboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Thingsboard,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UThingsboard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UThingsboard_getMeasurementsArray, "getMeasurementsArray" }, // 28218343
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThingsboard_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Thingsboard.h" },
		{ "ModuleRelativePath", "Public/Thingsboard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThingsboard_Statics::NewProp_password_MetaData[] = {
		{ "Category", "Thingsboard" },
		{ "ModuleRelativePath", "Public/Thingsboard.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UThingsboard_Statics::NewProp_password = { UE4CodeGen_Private::EPropertyClass::Str, "password", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UThingsboard, password), METADATA_PARAMS(Z_Construct_UClass_UThingsboard_Statics::NewProp_password_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThingsboard_Statics::NewProp_password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThingsboard_Statics::NewProp_username_MetaData[] = {
		{ "Category", "Thingsboard" },
		{ "ModuleRelativePath", "Public/Thingsboard.h" },
		{ "ToolTip", "measuremet to get from the device. Currently it must be defined at compile time, hence read only, because converting resulting json, requires exact same\nUSTRUCT; I will write custom parser for thingsboard response jsons, so it can be defined at runtime\n Sets default values for this component's properties" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UThingsboard_Statics::NewProp_username = { UE4CodeGen_Private::EPropertyClass::Str, "username", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UThingsboard, username), METADATA_PARAMS(Z_Construct_UClass_UThingsboard_Statics::NewProp_username_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThingsboard_Statics::NewProp_username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThingsboard_Statics::NewProp_measurement_MetaData[] = {
		{ "Category", "Thingsboard" },
		{ "ModuleRelativePath", "Public/Thingsboard.h" },
		{ "ToolTip", "Device id to read measurements from" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UThingsboard_Statics::NewProp_measurement = { UE4CodeGen_Private::EPropertyClass::Array, "measurement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UThingsboard, measurement), METADATA_PARAMS(Z_Construct_UClass_UThingsboard_Statics::NewProp_measurement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThingsboard_Statics::NewProp_measurement_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UThingsboard_Statics::NewProp_measurement_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "measurement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThingsboard_Statics::NewProp_DeviceId_MetaData[] = {
		{ "Category", "Thingsboard" },
		{ "ModuleRelativePath", "Public/Thingsboard.h" },
		{ "ToolTip", "Thingsboard url. Configureable from Unreal Editor" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UThingsboard_Statics::NewProp_DeviceId = { UE4CodeGen_Private::EPropertyClass::Str, "DeviceId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UThingsboard, DeviceId), METADATA_PARAMS(Z_Construct_UClass_UThingsboard_Statics::NewProp_DeviceId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThingsboard_Statics::NewProp_DeviceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThingsboard_Statics::NewProp_ApiBaseUrl_MetaData[] = {
		{ "Category", "Thingsboard" },
		{ "ModuleRelativePath", "Public/Thingsboard.h" },
		{ "ToolTip", "How often to read data from thingsboard (in seconds). Configurable from Unreal Editor" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UThingsboard_Statics::NewProp_ApiBaseUrl = { UE4CodeGen_Private::EPropertyClass::Str, "ApiBaseUrl", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UThingsboard, ApiBaseUrl), METADATA_PARAMS(Z_Construct_UClass_UThingsboard_Statics::NewProp_ApiBaseUrl_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThingsboard_Statics::NewProp_ApiBaseUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThingsboard_Statics::NewProp_RequestFrequency_MetaData[] = {
		{ "Category", "Thingsboard" },
		{ "ModuleRelativePath", "Public/Thingsboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThingsboard_Statics::NewProp_RequestFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "RequestFrequency", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UThingsboard, RequestFrequency), METADATA_PARAMS(Z_Construct_UClass_UThingsboard_Statics::NewProp_RequestFrequency_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThingsboard_Statics::NewProp_RequestFrequency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThingsboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThingsboard_Statics::NewProp_password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThingsboard_Statics::NewProp_username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThingsboard_Statics::NewProp_measurement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThingsboard_Statics::NewProp_measurement_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThingsboard_Statics::NewProp_DeviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThingsboard_Statics::NewProp_ApiBaseUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThingsboard_Statics::NewProp_RequestFrequency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThingsboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThingsboard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UThingsboard_Statics::ClassParams = {
		&UThingsboard::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UThingsboard_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UThingsboard_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UThingsboard_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UThingsboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThingsboard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UThingsboard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UThingsboard, 1500959798);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UThingsboard(Z_Construct_UClass_UThingsboard, &UThingsboard::StaticClass, TEXT("/Script/Thingsboard"), TEXT("UThingsboard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThingsboard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
