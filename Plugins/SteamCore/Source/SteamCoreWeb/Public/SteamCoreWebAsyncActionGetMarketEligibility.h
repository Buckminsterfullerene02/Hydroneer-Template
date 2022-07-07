#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetMarketEligibility.generated.h"

class USteamCoreWebAsyncActionGetMarketEligibility;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetMarketEligibility : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetMarketEligibility();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetMarketEligibility* GetMarketEligibilityAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID);
    
};

