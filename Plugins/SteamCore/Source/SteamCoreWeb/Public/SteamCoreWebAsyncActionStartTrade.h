#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionStartTrade.generated.h"

class USteamCoreWebAsyncActionStartTrade;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionStartTrade : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionStartTrade();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionStartTrade* StartTradeAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamId1, const FString& SteamId2);
    
};

