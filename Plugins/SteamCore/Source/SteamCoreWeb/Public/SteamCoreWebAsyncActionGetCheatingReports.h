#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetCheatingReports.generated.h"

class USteamCoreWebAsyncActionGetCheatingReports;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetCheatingReports();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetCheatingReports* GetCheatingReportsAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, const FString& ReportidMin, bool bIncludeReports, bool bIncludeBans, const FString& SteamID);
    
};

