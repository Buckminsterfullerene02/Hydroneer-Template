#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnDownloadLeaderboardEntriesForUsersAsyncDelegateDelegate.h"
#include "LeaderboardScoresDownloadedForUsers.h"
#include "SteamLeaderboard.h"
#include "SteamID.h"
#include "SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.generated.h"

class UObject;
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadLeaderboardEntriesForUsersAsyncDelegate OnCallback;
    
    USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers();
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* DownloadLeaderboardEntriesForUsersAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users, float Timeout);
    
};

