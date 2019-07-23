// Fill out your copyright notice in the Description page of Project Settings.


#include "Thingsboard.h"

// Sets default values for this component's properties
UThingsboard::UThingsboard()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UThingsboard::BeginPlay()
{
	Super::BeginPlay();
	Http = &FHttpModule::Get();
	userdata.username = username;
	userdata.password = password;
	// ...

}


// Called every frame
void UThingsboard::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
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
TSharedRef<IHttpRequest> UThingsboard::RequestWithRoute(FString subroute)
{
	TSharedRef<IHttpRequest> Request = Http->CreateRequest();
	Request->SetURL(ApiBaseUrl + subroute);
	SetRequestHeaders(Request);
	return Request;
}

void UThingsboard::SetRequestHeaders(TSharedRef<IHttpRequest>& Request)
{
	Request->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	Request->SetHeader(TEXT("Accepts"), TEXT("application/json"));
}

TSharedRef<IHttpRequest> UThingsboard::GetRequest(FString subroute)
{
	TSharedRef<IHttpRequest> Request = RequestWithRoute(subroute);
	Request->SetVerb("GET");
	return Request;
}

TSharedRef<IHttpRequest> UThingsboard::PostRequest(FString subroute, FString ContentJsonString)
{
	TSharedRef<IHttpRequest> Request = RequestWithRoute(subroute);
	Request->SetVerb("POST");
	Request->SetContentAsString(ContentJsonString);
	return Request;
}

bool UThingsboard::ResponseIsValid(FHttpResponsePtr Response, bool bWasSuccessful)
{
	/*If response code is 200 then everything is fine and we just got new measurement value
	If we have invalid response then we just return false and abandon the whole response
	If we get 401 then auth token is either expired or was never recieved, so we ask for another one
	If it is something else, then log it
	*/
	if (!bWasSuccessful || !Response.IsValid()) return false;
	if (EHttpResponseCodes::IsOk(Response->GetResponseCode())) return true;
	else if (Response->GetResponseCode() == 401)
	{
		UE_LOG(LogTemp, Warning, TEXT("Getting new token"));
		RenewToken();
		return true;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Http Response returned code: %d"), Response->GetResponseCode());
		return false;
	}
}

void UThingsboard::Send(TSharedRef<IHttpRequest>& Request) {
	Request->ProcessRequest();
}

TArray<FMeasurementValues> UThingsboard::getMeasurementsArray()
{
	//Check if we have read and saved anything, if not return some placeholder string
	if (params.Num() > 0)
	{
		return params;
	}
	else
	{
		return TArray<FMeasurementValues> {FMeasurementValues {"Not ready", "Not ready"}};
	}
}


template <typename StructType>
void UThingsboard::GetJsonStringFromStruct(StructType FilledStruct, FString& StringOutput)
{
	FJsonObjectConverter::UStructToJsonObjectString(StructType::StaticStruct(), &FilledStruct, StringOutput, 0, 0);
}

template <typename StructType>
void UThingsboard::GetStructFromJsonString(FHttpResponsePtr Response, StructType& StructOutput)
{
	StructType StructData;
	FString JsonString = Response->GetContentAsString();
	FJsonObjectConverter::JsonObjectStringToUStruct<StructType>(JsonString, &StructOutput, 0, 0);
}

//Function to test GET request
void UThingsboard::FetchData()
{
	FString keys;
	for (auto & m : measurement)
	{
		keys.Append(m);
		keys.AppendChar(TCHAR(','));
	}
	keys = keys.LeftChop(1);

	TSharedRef<IHttpRequest> Request = GetRequest("/api/plugins/telemetry/DEVICE/" + DeviceId + "/values/timeseries?keys=" + keys);
	Request->SetHeader(TEXT("X-Authorization"), TEXT("Bearer " + auth_token));
	Request->OnProcessRequestComplete().BindUObject(this, &UThingsboard::FetchDataResponse); //That is the binding for a callback function
	//Async stuff is anoying

	Send(Request);
}

TArray<FString> UThingsboard::parseResponse(FHttpResponsePtr Response)
{
	FString unparsed_string = Response->GetContentAsString();
	TArray<FString> parsed_results;
	for (auto& m : measurement)
	{
		int32 index_start = 0;
		int32 index_end = 0;
		index_start = unparsed_string.Find(m);

		if (unparsed_string.Contains(m))
		{
			for (int i = index_start; i < unparsed_string.Len(); ++i)
			{
				if (unparsed_string[i] == ']')
				{
					index_end = i;
					break;
				}
			}
			index_start = unparsed_string.Find("value", ESearchCase::IgnoreCase, ESearchDir::FromStart, index_start) + 8;
			parsed_results.Add(unparsed_string.Mid(index_start, index_end - index_start - 2));
		}
	}

	return parsed_results;
}


void UThingsboard::FetchDataResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	TArray<FMeasurementValues> tempArr;
	FMeasurementValues tempStruct;
	if (!ResponseIsValid(Response, bWasSuccessful)) return;
	TArray<FString> res = parseResponse(Response);
	for (int i = 0; i < res.Num(); ++i)
	{
		tempStruct.measurement = measurement[i];
		tempStruct.value = res[i];
		tempArr.Add(tempStruct);
	}

	params = tempArr;
}

void UThingsboard::RenewToken()
{
	FString ContentJsonString;
	GetJsonStringFromStruct<FLoginRequest>(userdata, ContentJsonString);
	TSharedRef<IHttpRequest> Request = PostRequest("/api/auth/login", ContentJsonString);
	Request->OnProcessRequestComplete().BindUObject(this, &UThingsboard::RenewTokenResponse);
	Send(Request);
}

void UThingsboard::RenewTokenResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (!ResponseIsValid(Response, bWasSuccessful)) {
		return;
	}

	FRenewResponse serverResponse;
	GetStructFromJsonString<FRenewResponse>(Response, serverResponse);
	auth_token = serverResponse.token;
	FString JsonString = Response->GetContentAsString();


}

