#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetTradeOffersSummary.generated.h"

class USteamCoreWebAsyncActionGetTradeOffersSummary;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetTradeOffersSummary : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetTradeOffersSummary();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetTradeOffersSummary* GetTradeOffersSummaryAsync(UObject* WorldContextObject, const FString& Key, int32 TimeLastVisit);
    
};

