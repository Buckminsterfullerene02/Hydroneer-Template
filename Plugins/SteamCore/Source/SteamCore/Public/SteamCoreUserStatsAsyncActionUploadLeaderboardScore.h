#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnUploadLeaderboardScoreAsyncDelegateDelegate.h"
#include "ESteamLeaderboardUploadScoreMethod.h"
#include "SteamLeaderboard.h"
#include "LeaderboardScoreUploaded.h"
#include "SteamCoreUserStatsAsyncActionUploadLeaderboardScore.generated.h"

class USteamCoreUserStatsAsyncActionUploadLeaderboardScore;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserStatsAsyncActionUploadLeaderboardScore : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUploadLeaderboardScoreAsyncDelegate OnCallback;
    
    USteamCoreUserStatsAsyncActionUploadLeaderboardScore();
    UFUNCTION(BlueprintCallable)
    static USteamCoreUserStatsAsyncActionUploadLeaderboardScore* UploadLeaderboardScoreAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32 Score, TArray<int32> ScoreDetails, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FLeaderboardScoreUploaded& Data, bool bWasSuccessful);
    
};

