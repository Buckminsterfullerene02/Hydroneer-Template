#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnGetNumberOfCurrentPlayersAsyncDelegateDelegate.h"
#include "NumberOfCurrentPlayers.h"
#include "SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.generated.h"

class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetNumberOfCurrentPlayersAsyncDelegate OnCallback;
    
    USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers();
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FNumberOfCurrentPlayers& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(UObject* WorldContextObject, float Timeout);
    
};

