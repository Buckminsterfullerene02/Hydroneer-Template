#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionResetLeaderboard.generated.h"

class USteamCoreWebAsyncActionResetLeaderboard;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionResetLeaderboard : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionResetLeaderboard();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionResetLeaderboard* ResetLeaderboardAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, int32 LeaderboardId);
    
};

