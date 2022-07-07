#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetUserHistory.generated.h"

class USteamCoreWebAsyncActionGetUserHistory;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetUserHistory : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetUserHistory();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetUserHistory* GetUserHistoryAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID, const FString& ContextId, int32 StartTime, int32 EndTime);
    
};

