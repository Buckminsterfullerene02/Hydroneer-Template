#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreAppsAsyncActionGetAppList.generated.h"

class USteamCoreAppsAsyncActionGetAppList;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetAppList : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreAppsAsyncActionGetAppList();
    UFUNCTION(BlueprintCallable)
    static USteamCoreAppsAsyncActionGetAppList* GetAppListAsync(UObject* WorldContextObject, const FString& Key);
    
};

