#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionFinalizeTxn.generated.h"

class USteamCoreWebAsyncActionFinalizeTxn;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionFinalizeTxn : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionFinalizeTxn();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionFinalizeTxn* FinalizeTxnAsync(UObject* WorldContextObject, const FString& Key, const FString& OrderId, int32 AppID);
    
};

