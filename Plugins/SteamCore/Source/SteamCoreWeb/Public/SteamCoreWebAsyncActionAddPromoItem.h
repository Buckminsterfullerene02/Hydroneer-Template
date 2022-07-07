#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionAddPromoItem.generated.h"

class USteamCoreWebAsyncActionAddPromoItem;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionAddPromoItem : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionAddPromoItem();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionAddPromoItem* AddPromoItemAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, int32 ItemdefId, const FString& ItemPropsJson, const FString& SteamID, bool bNotify, const FString& RequestID);
    
};

