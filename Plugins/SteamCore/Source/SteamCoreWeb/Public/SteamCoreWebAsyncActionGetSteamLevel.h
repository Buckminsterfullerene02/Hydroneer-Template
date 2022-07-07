#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetSteamLevel.generated.h"

class USteamCoreWebAsyncActionGetSteamLevel;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetSteamLevel : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetSteamLevel();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetSteamLevel* GetSteamLevelAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID);
    
};

