#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreAppsAsyncActionGetServersAtAddress.generated.h"

class USteamCoreAppsAsyncActionGetServersAtAddress;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetServersAtAddress : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreAppsAsyncActionGetServersAtAddress();
    UFUNCTION(BlueprintCallable)
    static USteamCoreAppsAsyncActionGetServersAtAddress* GetServersAtAddressAsync(UObject* WorldContextObject, const FString& Addr);
    
};

