#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnPingServerAsyncDelegateDelegate.h"
#include "GameServerItem.h"
#include "SteamCoreMatchmakingServersAsyncActionPingServer.generated.h"

class USteamCoreMatchmakingServersAsyncActionPingServer;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreMatchmakingServersAsyncActionPingServer : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPingServerAsyncDelegate OnCallback;
    
    USteamCoreMatchmakingServersAsyncActionPingServer();
    UFUNCTION(BlueprintCallable)
    static USteamCoreMatchmakingServersAsyncActionPingServer* PingServerAsync(UObject* WorldContextObject, const FString& IP, int32 Port, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FGameServerItem& Data, bool bWasSuccessful);
    
};

