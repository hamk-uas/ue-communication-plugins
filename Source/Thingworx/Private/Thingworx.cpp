// Fill out your copyright notice in the Description page of Project Settings.


#include "Thingworx.h"

// Sets default values for this component's properties
UThingworx::UThingworx()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UThingworx::BeginPlay()
{
	Super::BeginPlay();
	Http = &FHttpModule::Get();
	// ...

}


// Called every frame
void UThingworx::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	elapsedTime += DeltaTime;
	if (elapsedTime > RequestFrequency)
	{
		FetchData();
		elapsedTime = 0;
	}
	// ...

}

// Request with route
TSharedRef<IHttpRequest> UThingworx::RequestWithRoute(FString subroute)
{
	TSharedRef<IHttpRequest> Request = Http->CreateRequest();
	Request->SetURL(ApiBaseUrl + subroute);
	SetRequestHeaders(Request);
	return Request;
}

void UThingworx::SetRequestHeaders(TSharedRef<IHttpRequest>& Request)
{
	Request->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	Request->SetHeader(TEXT("Accept"), TEXT("application/json"));
	Request->SetHeader(TEXT("AppKey"), *auth_token);
	Request->SetHeader(TEXT("x-thingworx-session"), TEXT("true"));
}

TSharedRef<IHttpRequest> UThingworx::GetRequest(FString subroute)
{
	TSharedRef<IHttpRequest> Request = RequestWithRoute(subroute);
	Request->SetVerb("GET");
	return Request;
}

TSharedRef<IHttpRequest> UThingworx::PostRequest(FString subroute, FString ContentJsonString)
{
	TSharedRef<IHttpRequest> Request = RequestWithRoute(subroute);
	Request->SetVerb("POST");
	Request->SetContentAsString(ContentJsonString);
	return Request;
}

bool UThingworx::ResponseIsValid(FHttpResponsePtr Response, bool bWasSuccessful)
{
	/*If response code is 200 then everything is fine and we just got new measurement value
	If we have invalid response then we just return false and abandon the whole response
	If we get 401 then auth token is either expired or was never recieved, so we ask for another one
	If it is something else, then log it
	*/
	if (!bWasSuccessful || !Response.IsValid()) return false;
	if (EHttpResponseCodes::IsOk(Response->GetResponseCode())) return true;
	
	else {
		UE_LOG(LogTemp, Warning, TEXT("Http Response returned code: %d"), Response->GetResponseCode());
		return false;
	}
}

void UThingworx::Send(TSharedRef<IHttpRequest>& Request) {
	Request->ProcessRequest();
}


template <typename StructType>
void UThingworx::GetJsonStringFromStruct(StructType FilledStruct, FString& StringOutput)
{
	FJsonObjectConverter::UStructToJsonObjectString(StructType::StaticStruct(), &FilledStruct, StringOutput, 0, 0);
}

template <typename StructType>
void UThingworx::GetStructFromJsonString(FHttpResponsePtr Response, StructType& StructOutput)
{
	StructType StructData;
	FString JsonString = Response->GetContentAsString();
	FJsonObjectConverter::JsonObjectStringToUStruct<StructType>(JsonString, &StructOutput, 0, 0);
}

//Function to test GET request
void UThingworx::FetchData()
{

	TSharedRef<IHttpRequest> Request = PostRequest("Things/" + StreamName + "/Services/QueryStreamData?source=" + SourceName + "&maxItems=1", "");
	Request->OnProcessRequestComplete().BindUObject(this, &UThingworx::FetchDataResponse); //That is the binding for a callback function
	//Async stuff is anoying

	Send(Request);
}



void UThingworx::FetchDataResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	FString JsonString = Response->GetContentAsString();
	UE_LOG(LogTemp, Warning, TEXT("Response: %s"), *JsonString);
	if (!ResponseIsValid(Response, bWasSuccessful)) return;
	
	FResponse serverResponse;
	GetStructFromJsonString<FResponse>(Response, serverResponse);
	
	params = serverResponse;
}

FResponse UThingworx::getMeasurement()
{
	if (params.rows.Num() == 0)
	{
		FMeasurementValue temp = { "NotAmeasurement", "NaN", "NaT" };
		params.rows.Add(temp);
	}
	return params;
}