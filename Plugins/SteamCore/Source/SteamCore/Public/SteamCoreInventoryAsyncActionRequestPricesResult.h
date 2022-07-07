#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnSteamInventoryRequestPricesResultAsyncDelegateDelegate.h"
#include "SteamInventoryRequestPricesResult.h"
#include "SteamCoreInventoryAsyncActionRequestPricesResult.generated.h"

class USteamCoreInventoryAsyncActionRequestPricesResult;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreInventoryAsyncActionRequestPricesResult : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamInventoryRequestPricesResultAsyncDelegate OnCallback;
    
    USteamCoreInventoryAsyncActionRequestPricesResult();
    UFUNCTION(BlueprintCallable)
    static USteamCoreInventoryAsyncActionRequestPricesResult* RequestPricesAsync(UObject* WorldContextObject, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FSteamInventoryRequestPricesResult& Data, bool bWasSuccessful);
    
};

