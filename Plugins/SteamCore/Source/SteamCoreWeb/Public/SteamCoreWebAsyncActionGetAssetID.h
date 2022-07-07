#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetAssetID.generated.h"

class USteamCoreWebAsyncActionGetAssetID;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetAssetID : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetAssetID();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetAssetID* GetAssetIDAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& ListingId);
    
};

