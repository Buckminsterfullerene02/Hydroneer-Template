#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreAppsAsyncActionGetAppBuilds.generated.h"

class USteamCoreAppsAsyncActionGetAppBuilds;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetAppBuilds : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreAppsAsyncActionGetAppBuilds();
    UFUNCTION(BlueprintCallable)
    static USteamCoreAppsAsyncActionGetAppBuilds* GetAppBuildsAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, int32 Count);
    
};

