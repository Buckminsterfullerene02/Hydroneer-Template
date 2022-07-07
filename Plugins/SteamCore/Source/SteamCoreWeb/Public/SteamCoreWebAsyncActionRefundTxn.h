#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionRefundTxn.generated.h"

class USteamCoreWebAsyncActionRefundTxn;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionRefundTxn : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionRefundTxn();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionRefundTxn* RefundTxnAsync(UObject* WorldContextObject, const FString& Key, const FString& OrderId, int32 AppID);
    
};

