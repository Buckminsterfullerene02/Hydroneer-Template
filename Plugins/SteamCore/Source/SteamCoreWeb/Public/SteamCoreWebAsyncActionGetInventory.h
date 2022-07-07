#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetInventory.generated.h"

class USteamCoreWebAsyncActionGetInventory;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetInventory : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetInventory();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetInventory* GetInventoryAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID);
    
};

