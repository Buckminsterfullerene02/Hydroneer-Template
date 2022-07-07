#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionReportCheatData.generated.h"

class USteamCoreWebAsyncActionReportCheatData;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionReportCheatData : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionReportCheatData();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionReportCheatData* ReportCheatDataAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, const FString& PathAndFileName, const FString& WebCheatURL, const FString& TimeNow, const FString& TimeStarted, const FString& TimeStopped, const FString& CheatName, int32 GameProcessId, int32 CheatProcessId, const FString& CheatParam1, const FString& CheatParam2);
    
};

