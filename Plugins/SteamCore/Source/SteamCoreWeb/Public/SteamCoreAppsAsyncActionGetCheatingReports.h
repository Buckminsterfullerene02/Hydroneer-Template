#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreAppsAsyncActionGetCheatingReports.generated.h"

class USteamCoreAppsAsyncActionGetCheatingReports;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreAppsAsyncActionGetCheatingReports();
    UFUNCTION(BlueprintCallable)
    static USteamCoreAppsAsyncActionGetCheatingReports* GetCheatingReportsAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, int32 ReportidMin);
    
};

