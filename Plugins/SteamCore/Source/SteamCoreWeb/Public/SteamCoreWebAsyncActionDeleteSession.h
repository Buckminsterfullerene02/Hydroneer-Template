#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionDeleteSession.generated.h"

class USteamCoreWebAsyncActionDeleteSession;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionDeleteSession : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionDeleteSession();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionDeleteSession* DeleteSessionAsync(UObject* WorldContextObject, const FString& Key, const FString& SessionID, int32 AppID, const FString& SteamID);
    
};

