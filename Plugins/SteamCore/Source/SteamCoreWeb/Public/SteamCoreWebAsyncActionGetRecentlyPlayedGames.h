#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetRecentlyPlayedGames.generated.h"

class USteamCoreWebAsyncActionGetRecentlyPlayedGames;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetRecentlyPlayedGames : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetRecentlyPlayedGames();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetRecentlyPlayedGames* GetRecentlyPlayedGamesAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 Count);
    
};

