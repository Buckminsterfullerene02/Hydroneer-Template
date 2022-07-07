#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetBadges.generated.h"

class USteamCoreWebAsyncActionGetBadges;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetBadges : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetBadges();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetBadges* GetBadgesAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID);
    
};

