#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionRankedByPublicationOrder.generated.h"

class USteamCoreWebAsyncActionRankedByPublicationOrder;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionRankedByPublicationOrder : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionRankedByPublicationOrder();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionRankedByPublicationOrder* RankedByPublicationOrderAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
    
};

