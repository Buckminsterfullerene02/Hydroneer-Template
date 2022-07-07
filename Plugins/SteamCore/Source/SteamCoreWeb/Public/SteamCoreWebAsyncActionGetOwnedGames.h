#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetOwnedGames.generated.h"

class USteamCoreWebAsyncActionGetOwnedGames;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetOwnedGames : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetOwnedGames();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetOwnedGames* GetOwnedGamesAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> Filter);
    
};

