#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreAppsAsyncActionUpToDateCheck.generated.h"

class USteamCoreAppsAsyncActionUpToDateCheck;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreAppsAsyncActionUpToDateCheck : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreAppsAsyncActionUpToDateCheck();
    UFUNCTION(BlueprintCallable)
    static USteamCoreAppsAsyncActionUpToDateCheck* UpToDateCheckAsync(UObject* WorldContextObject, int32 AppID, int32 Version);
    
};

