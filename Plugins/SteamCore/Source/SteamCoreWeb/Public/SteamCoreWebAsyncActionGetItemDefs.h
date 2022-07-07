#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetItemDefs.generated.h"

class USteamCoreWebAsyncActionGetItemDefs;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetItemDefs : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetItemDefs();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetItemDefs* GetItemDefsAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& ModifiedSince, TArray<int32> ItemdefIDs, TArray<int32> WorkshopIDs, int32 CacheMaxAgeSeconds);
    
};

