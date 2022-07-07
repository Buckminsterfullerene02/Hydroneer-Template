#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionDeclineTradeOffer.generated.h"

class UObject;
class USteamCoreWebAsyncActionDeclineTradeOffer;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionDeclineTradeOffer : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionDeclineTradeOffer();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionDeclineTradeOffer* DeclineTradeOfferAsync(UObject* WorldContextObject, const FString& Key, const FString& TradeOfferId);
    
};

