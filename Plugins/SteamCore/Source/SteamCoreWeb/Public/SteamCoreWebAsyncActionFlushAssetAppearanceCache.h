#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionFlushAssetAppearanceCache.generated.h"

class USteamCoreWebAsyncActionFlushAssetAppearanceCache;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionFlushAssetAppearanceCache : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionFlushAssetAppearanceCache();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionFlushAssetAppearanceCache* FlushAssetAppearanceCacheAsync(UObject* WorldContextObject, const FString& Key, int32 AppID);
    
};

