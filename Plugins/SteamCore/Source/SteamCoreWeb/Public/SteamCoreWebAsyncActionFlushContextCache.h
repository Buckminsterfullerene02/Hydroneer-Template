#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionFlushContextCache.generated.h"

class USteamCoreWebAsyncActionFlushContextCache;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionFlushContextCache : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionFlushContextCache();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionFlushContextCache* FlushContextCacheAsync(UObject* WorldContextObject, const FString& Key, int32 AppID);
    
};

