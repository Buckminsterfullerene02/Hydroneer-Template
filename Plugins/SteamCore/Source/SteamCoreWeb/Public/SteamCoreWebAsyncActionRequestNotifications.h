#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionRequestNotifications.generated.h"

class USteamCoreWebAsyncActionRequestNotifications;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionRequestNotifications : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionRequestNotifications();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionRequestNotifications* RequestNotificationsAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID);
    
};

