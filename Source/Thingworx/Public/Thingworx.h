// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Json.h"
#include "JsonUtilities/Public/JsonUtilities.h"
#include "Thingworx.generated.h"

USTRUCT(BlueprintType)
struct FAspects
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(BlueprintReadOnly, Category = "Thingworx")	FString isPrimaryKey;

	FAspects() {};
};



USTRUCT(BlueprintType)
struct FFieldDefinitionField
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Category = "Thingworx") FString name;
	UPROPERTY(BlueprintReadOnly, Category = "Thingworx") FString description;
	UPROPERTY(BlueprintReadOnly, Category = "Thingworx") FString baseType;
	UPROPERTY(BlueprintReadOnly, Category = "Thingworx") int32 ordinal;
	UPROPERTY(BlueprintReadOnly, Category = "Thingworx") FAspects aspects;

	FFieldDefinitionField() {};
};

USTRUCT(BlueprintType)
struct FFieldDefinitions
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Category = "Thingworx") FFieldDefinitionField Name;
	UPROPERTY(BlueprintReadOnly, Category = "Thingworx") FFieldDefinitionField Value;
	UPROPERTY(BlueprintReadOnly, Category = "Thingworx") FFieldDefinitionField timestamp;

	FFieldDefinitions() {};
};

USTRUCT(BlueprintType)
struct FDataShape
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(BlueprintReadOnly, Category = "Thingworx") FFieldDefinitions fieldDefinitions;

	FDataShape() {};
};

USTRUCT(BlueprintType)
struct FMeasurementValue
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(BlueprintReadOnly, Category = "Thingworx") FString Name;
	UPROPERTY(BlueprintReadOnly, Category = "Thingworx") FString Value;
	UPROPERTY(BlueprintReadOnly, Category = "Thingworx") FString timestamp;

	FMeasurementValue() {};
	FMeasurementValue(FString n, FString v, FString t) : Name(n), Value(v), timestamp(t) {};
};


USTRUCT(BlueprintType)
struct FResponse
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(BlueprintReadOnly, Category = "Thingworx") FDataShape dataShape;
	UPROPERTY(BlueprintReadOnly, Category = "Thingworx") TArray<FMeasurementValue> rows;

	FResponse() {};
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THINGWORX_API UThingworx : public UActorComponent
{
	GENERATED_BODY()
private:
	FResponse params;
	FHttpModule* Http; //Http module instance for generating requests
	float elapsedTime = 0; //Shows how much time elapsed since last FetchData request
	TSharedRef<IHttpRequest> RequestWithRoute(FString subroute); //helper function for creating new request, setting url and essential headers

	TSharedRef<IHttpRequest> GetRequest(FString subroute); //Creates new get request
	TSharedRef<IHttpRequest> PostRequest(FString subroute, FString ContentJsonString); //Creates new post request
	void Send(TSharedRef<IHttpRequest>& Request); //Sends request
	void SetRequestHeaders(TSharedRef<IHttpRequest>& Request); //Sets essential headers for the request
	bool ResponseIsValid(FHttpResponsePtr Response, bool bWasSuccessful); //Checks if the return code is OK and if response is valid
	void FetchData(); //Request measurements from thingsboard
	void FetchDataResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful); //Handle new data from thingsboard, executes then request is handled by the servert
	//and unreal recieves response

	template <typename StructType>
	void GetJsonStringFromStruct(StructType FilledStruct, FString& StringOutput); //templated function to convert ustruct to json string

	template <typename StructType>
	void GetStructFromJsonString(FHttpResponsePtr Response, StructType& StructOutput);
	//IMPORTANT
	//JSON and corresponding USTRUCT must have same structure and same names for variables. That is how unreal knows how to convert json to ustract or vise versa
public:	
	// Sets default values for this component's properties
	UThingworx();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UPROPERTY(EditAnywhere, Category = "Thingworx") FString auth_token = "043a1952-7b0f-464d-855d-3b969a78ddde";
	UPROPERTY(EditAnywhere, Category = "Thingworx") float RequestFrequency = 10;
	UPROPERTY(EditAnywhere, Category = "Thingworx") FString ApiBaseUrl = "https://tekme.elisaiot.com/Thingworx/";
	UPROPERTY(EditAnywhere, Category = "Thingworx") TArray<FString> MeasurementList;
	UPROPERTY(EditAnywhere, Category = "Thingworx") FString SourceName;
	UPROPERTY(EditAnywhere, Category = "Thingworx") FString StreamName = "Tekme.OPC.Stream";

	UFUNCTION(BlueprintPure, Category = "Thingworx")
	FResponse getMeasurement();
		
};
