#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionSetUserStatsForGame.generated.h"

class USteamCoreWebAsyncActionSetUserStatsForGame;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionSetUserStatsForGame : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionSetUserStatsForGame();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionSetUserStatsForGame* SetUserStatsForGameAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, TArray<FString> Names, TArray<int32> Values);
    
};

