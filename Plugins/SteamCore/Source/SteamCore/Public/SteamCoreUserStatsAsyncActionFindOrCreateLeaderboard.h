#pragma once
#include "CoreMinimal.h"
#include "ESteamLeaderboardSortMethod.h"
#include "FindOrCreateLeaderboardData.h"
#include "OnFindOrCreateLeaderboardAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "ESteamLeaderboardDisplayType.h"
#include "SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.generated.h"

class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFindOrCreateLeaderboardAsyncDelegate OnCallback;
    
    USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard();
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FFindOrCreateLeaderboardData& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(UObject* WorldContextObject, const FString& LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType, float Timeout);
    
};

