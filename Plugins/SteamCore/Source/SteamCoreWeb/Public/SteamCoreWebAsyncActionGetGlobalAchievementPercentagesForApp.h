#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.generated.h"

class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* GetGlobalAchievementPercentagesForAppAsync(UObject* WorldContextObject, const FString& GameID);
    
};

