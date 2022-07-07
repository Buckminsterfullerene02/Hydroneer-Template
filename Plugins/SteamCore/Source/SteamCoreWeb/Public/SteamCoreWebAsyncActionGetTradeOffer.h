#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetTradeOffer.generated.h"

class USteamCoreWebAsyncActionGetTradeOffer;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetTradeOffer : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetTradeOffer();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetTradeOffer* GetTradeOfferAsync(UObject* WorldContextObject, const FString& Key, const FString& TradeOfferId, const FString& Language);
    
};

