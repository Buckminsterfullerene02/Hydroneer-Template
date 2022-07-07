#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnJoinLobbyAsyncDelegateDelegate.h"
#include "SteamID.h"
#include "JoinLobbyData.h"
#include "SteamCoreMatchmakingAsyncActionJoinLobby.generated.h"

class USteamCoreMatchmakingAsyncActionJoinLobby;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreMatchmakingAsyncActionJoinLobby : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinLobbyAsyncDelegate OnCallback;
    
    USteamCoreMatchmakingAsyncActionJoinLobby();
    UFUNCTION(BlueprintCallable)
    static USteamCoreMatchmakingAsyncActionJoinLobby* JoinLobbyAsync(UObject* WorldContextObject, FSteamID SteamIDLobby, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FJoinLobbyData& Data, bool bWasSuccessful);
    
};

