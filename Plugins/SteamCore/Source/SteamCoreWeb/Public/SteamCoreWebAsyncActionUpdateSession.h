#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionUpdateSession.generated.h"

class USteamCoreWebAsyncActionUpdateSession;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionUpdateSession : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionUpdateSession();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionUpdateSession* UpdateSessionAsync(UObject* WorldContextObject, const FString& Key, const FString& SessionID, int32 AppID, const FString& Title, const FString& Users, const FString& SteamID);
    
};

