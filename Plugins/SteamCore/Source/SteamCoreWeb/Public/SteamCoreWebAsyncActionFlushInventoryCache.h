#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionFlushInventoryCache.generated.h"

class USteamCoreWebAsyncActionFlushInventoryCache;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionFlushInventoryCache : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionFlushInventoryCache();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionFlushInventoryCache* FlushInventoryCacheAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, const FString& ContextId);
    
};

