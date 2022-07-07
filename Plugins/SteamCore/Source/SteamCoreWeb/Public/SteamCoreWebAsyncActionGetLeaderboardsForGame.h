#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetLeaderboardsForGame.generated.h"

class USteamCoreWebAsyncActionGetLeaderboardsForGame;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetLeaderboardsForGame : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetLeaderboardsForGame();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetLeaderboardsForGame* GetLeaderboardsForGameAsync(UObject* WorldContextObject, const FString& Key, int32 AppID);
    
};

