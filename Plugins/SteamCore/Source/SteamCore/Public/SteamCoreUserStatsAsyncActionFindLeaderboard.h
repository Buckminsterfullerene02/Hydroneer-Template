#pragma once
#include "CoreMinimal.h"
#include "LeaderboardFindResult.h"
#include "SteamCoreAsyncAction.h"
#include "OnFindLeaderboardAsyncDelegateDelegate.h"
#include "SteamCoreUserStatsAsyncActionFindLeaderboard.generated.h"

class USteamCoreUserStatsAsyncActionFindLeaderboard;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserStatsAsyncActionFindLeaderboard : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFindLeaderboardAsyncDelegate OnCallback;
    
    USteamCoreUserStatsAsyncActionFindLeaderboard();
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FLeaderboardFindResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreUserStatsAsyncActionFindLeaderboard* FindLeaderboardAsync(UObject* WorldContextObject, const FString& LeaderboardName, float Timeout);
    
};

