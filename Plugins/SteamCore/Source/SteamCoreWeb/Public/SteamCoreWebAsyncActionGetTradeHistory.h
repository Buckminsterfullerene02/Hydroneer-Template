#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetTradeHistory.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetTradeHistory;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetTradeHistory : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetTradeHistory();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetTradeHistory* GetTradeHistoryAsync(UObject* WorldContextObject, const FString& Key, int32 MaxTrades, int32 StartAfterTime, const FString& StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, const FString& Language, bool bIncludeFailed, bool bIncludeTotal);
    
};

