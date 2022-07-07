#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreAppsAsyncActionGetServerList.generated.h"

class USteamCoreAppsAsyncActionGetServerList;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetServerList : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreAppsAsyncActionGetServerList();
    UFUNCTION(BlueprintCallable)
    static USteamCoreAppsAsyncActionGetServerList* GetServerListAsync(UObject* WorldContextObject, const FString& Key, const FString& Filter, int32 Limit);
    
};

