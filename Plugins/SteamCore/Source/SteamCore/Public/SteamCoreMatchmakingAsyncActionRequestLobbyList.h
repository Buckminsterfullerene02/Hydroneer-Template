#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnRequestLobbyListAsyncDelegateDelegate.h"
#include "LobbyMatchList.h"
#include "SteamCoreMatchmakingAsyncActionRequestLobbyList.generated.h"

class USteamCoreMatchmakingAsyncActionRequestLobbyList;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreMatchmakingAsyncActionRequestLobbyList : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestLobbyListAsyncDelegate OnCallback;
    
    USteamCoreMatchmakingAsyncActionRequestLobbyList();
    UFUNCTION(BlueprintCallable)
    static USteamCoreMatchmakingAsyncActionRequestLobbyList* RequestLobbyListAsync(UObject* WorldContextObject, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FLobbyMatchList& Data, bool bWasSuccessful);
    
};

