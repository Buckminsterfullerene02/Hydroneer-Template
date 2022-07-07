#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionSupportGetAssetHistory.generated.h"

class USteamCoreWebAsyncActionSupportGetAssetHistory;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionSupportGetAssetHistory : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionSupportGetAssetHistory();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionSupportGetAssetHistory* SupportGetAssetHistoryAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& AssetId, const FString& ContextId);
    
};

