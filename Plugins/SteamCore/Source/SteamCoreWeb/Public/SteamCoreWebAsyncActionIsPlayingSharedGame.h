#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionIsPlayingSharedGame.generated.h"

class USteamCoreWebAsyncActionIsPlayingSharedGame;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionIsPlayingSharedGame : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionIsPlayingSharedGame();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionIsPlayingSharedGame* IsPlayingSharedGameAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppIdPlaying);
    
};

