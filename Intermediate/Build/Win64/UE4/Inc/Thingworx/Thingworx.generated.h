// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FResponse;
#ifdef THINGWORX_Thingworx_generated_h
#error "Thingworx.generated.h already included, missing '#pragma once' in Thingworx.h"
#endif
#define THINGWORX_Thingworx_generated_h

#define TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResponse_Statics; \
	THINGWORX_API static class UScriptStruct* StaticStruct();


#define TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeasurementValue_Statics; \
	THINGWORX_API static class UScriptStruct* StaticStruct();


#define TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataShape_Statics; \
	THINGWORX_API static class UScriptStruct* StaticStruct();


#define TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFieldDefinitions_Statics; \
	THINGWORX_API static class UScriptStruct* StaticStruct();


#define TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFieldDefinitionField_Statics; \
	THINGWORX_API static class UScriptStruct* StaticStruct();


#define TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAspects_Statics; \
	THINGWORX_API static class UScriptStruct* StaticStruct();


#define TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_82_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetMeasurement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FResponse*)Z_Param__Result=P_THIS->getMeasurement(); \
		P_NATIVE_END; \
	}


#define TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetMeasurement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FResponse*)Z_Param__Result=P_THIS->getMeasurement(); \
		P_NATIVE_END; \
	}


#define TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUThingworx(); \
	friend struct Z_Construct_UClass_UThingworx_Statics; \
public: \
	DECLARE_CLASS(UThingworx, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Thingworx"), NO_API) \
	DECLARE_SERIALIZER(UThingworx)


#define TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUThingworx(); \
	friend struct Z_Construct_UClass_UThingworx_Statics; \
public: \
	DECLARE_CLASS(UThingworx, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Thingworx"), NO_API) \
	DECLARE_SERIALIZER(UThingworx)


#define TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UThingworx(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThingworx) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThingworx); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThingworx); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UThingworx(UThingworx&&); \
	NO_API UThingworx(const UThingworx&); \
public:


#define TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_82_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UThingworx(UThingworx&&); \
	NO_API UThingworx(const UThingworx&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThingworx); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThingworx); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UThingworx)


#define TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_82_PRIVATE_PROPERTY_OFFSET
#define TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_79_PROLOG
#define TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_82_PRIVATE_PROPERTY_OFFSET \
	TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_82_RPC_WRAPPERS \
	TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_82_INCLASS \
	TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_82_PRIVATE_PROPERTY_OFFSET \
	TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_82_INCLASS_NO_PURE_DECLS \
	TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestPackager_Plugins_Thingworx_Source_Thingworx_Public_Thingworx_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
