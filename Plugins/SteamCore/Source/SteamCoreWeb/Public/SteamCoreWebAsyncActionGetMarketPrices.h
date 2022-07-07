#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetMarketPrices.generated.h"

class USteamCoreWebAsyncActionGetMarketPrices;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetMarketPrices : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetMarketPrices();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetMarketPrices* GetMarketPricesAsync(UObject* WorldContextObject, const FString& Key, int32 AppID);
    
};

