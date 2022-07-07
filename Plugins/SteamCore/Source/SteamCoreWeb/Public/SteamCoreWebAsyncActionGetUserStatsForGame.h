#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetUserStatsForGame.generated.h"

class USteamCoreWebAsyncActionGetUserStatsForGame;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetUserStatsForGame : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetUserStatsForGame();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetUserStatsForGame* GetUserStatsForGameAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID);
    
};

