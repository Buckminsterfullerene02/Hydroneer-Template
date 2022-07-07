#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionEndSecureMultiplayerSession.generated.h"

class USteamCoreWebAsyncActionEndSecureMultiplayerSession;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionEndSecureMultiplayerSession : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionEndSecureMultiplayerSession();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionEndSecureMultiplayerSession* EndSecureMultiplayerSessionAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, const FString& SessionID);
    
};

