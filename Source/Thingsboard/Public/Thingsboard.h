// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Json.h"
#include "JsonUtilities/Public/JsonUtilities.h"
#include "Thingsboard.generated.h"


//struct to hold access data to thingsboard
USTRUCT()
struct FLoginRequest 
{
	GENERATED_BODY()
	UPROPERTY() FString username;
	UPROPERTY() FString password;

	FLoginRequest() {};
};


//struct to hold tokens for thingsboard's rest api
USTRUCT()
struct FRenewResponse 
{
	GENERATED_BODY()
	UPROPERTY() FString token;
	UPROPERTY() FString refreshToken;

	FRenewResponse() {};
};

USTRUCT(BlueprintType, Category = "Thingsboard")
struct FMeasurementValues
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(BlueprintReadOnly, Category = "Thingsboard") FString measurement;
	UPROPERTY(BlueprintReadOnly, Category = "Thingsboard") FString value;

	FMeasurementValues() {};
	FMeasurementValues(FString name, FString val) : measurement(name), value(val) {};
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THINGSBOARD_API UThingsboard : public UActorComponent
{
	GENERATED_BODY()

private: 
	TArray<FMeasurementValues> params; //We are always keeping the copy of the last response for reading
	FHttpModule* Http; //Http module instance for generating requests
	float elapsedTime = 0; //Shows how much time elapsed since last FetchData request
	FString auth_token = "0"; //Variable to store auth token for thingsboard, it is 0 initially and then it is requested from the server periodically using username and password
	FLoginRequest userdata; //variable to keep username and password
	TSharedRef<IHttpRequest> RequestWithRoute(FString subroute); //helper function for creating new request, setting url and essential headers

	TSharedRef<IHttpRequest> GetRequest(FString subroute); //Creates new get request
	TSharedRef<IHttpRequest> PostRequest(FString subroute, FString ContentJsonString); //Creates new post request
	void Send(TSharedRef<IHttpRequest>& Request); //Sends request
	void SetRequestHeaders(TSharedRef<IHttpRequest>& Request); //Sets essential headers for the request
	bool ResponseIsValid(FHttpResponsePtr Response, bool bWasSuccessful); //Checks if the return code is OK and if response is valid
	void FetchData(); //Request measurements from thingsboard
	void FetchDataResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful); //Handle new data from thingsboard, executes then request is handled by the servert
	//and unreal recieves response

	void RenewToken(); //Request new token from thingsboard
	void RenewTokenResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful); //handle new token

	TArray<FString> parseResponse(FHttpResponsePtr Response);

	template <typename StructType>
	void GetJsonStringFromStruct(StructType FilledStruct, FString& StringOutput); //templated function to convert ustruct to json string

	template <typename StructType>
	void GetStructFromJsonString(FHttpResponsePtr Response, StructType& StructOutput);
	//IMPORTANT
	//JSON and corresponding USTRUCT must have same structure and same names for variables. That is how unreal knows how to convert json to ustract or vise versa

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UPROPERTY(EditAnywhere, Category = "Thingsboard")
	float RequestFrequency = 10; //How often to read data from thingsboard (in seconds). Configurable from Unreal Editor
	UPROPERTY(EditAnywhere, Category = "Thingsboard")
	FString ApiBaseUrl = "http://52.178.138.16:8080"; //Thingsboard url. Configureable from Unreal Editor
	UPROPERTY(EditAnywhere, Category = "Thingsboard")
	FString DeviceId = "d84fbd70-42d2-11e8-a5d9-cb746776d0c2"; //Device id to read measurements from
	UPROPERTY(EditAnywhere, Category = "Thingsboard")
	TArray<FString> measurement = { "temperature", "humidity" }; //measuremet to get from the device. Currently it must be defined at compile time, hence read only, because converting resulting json, requires exact same 
		//USTRUCT; I will write custom parser for thingsboard response jsons, so it can be defined at runtime
		// Sets default values for this component's properties
	UPROPERTY(EditAnywhere, Category = "Thingsboard")
	FString username = "tenant@thingsboard.org";
	UPROPERTY(EditAnywhere, Category = "Thingsboard")
	FString password = "tenant";
	
	UThingsboard();

	UFUNCTION(BlueprintPure, Category = "Thingsboard") //get measurement value from blueprint; the component automatically logs values every RequestFrequency seconds
	//but with this function you can read it any time from blueprints
	TArray<FMeasurementValues> getMeasurementsArray();
	
};
