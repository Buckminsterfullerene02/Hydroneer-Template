#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreAppsAsyncActionGetAppBetas.generated.h"

class USteamCoreAppsAsyncActionGetAppBetas;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetAppBetas : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreAppsAsyncActionGetAppBetas();
    UFUNCTION(BlueprintCallable)
    static USteamCoreAppsAsyncActionGetAppBetas* GetAppBetasAsync(UObject* WorldContextObject, const FString& Key, int32 AppID);
    
};

