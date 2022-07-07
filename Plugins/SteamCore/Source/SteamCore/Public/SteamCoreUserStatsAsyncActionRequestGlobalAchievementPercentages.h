#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnRequestGlobalAchievementPercentagesAsyncDelegateDelegate.h"
#include "GlobalAchievementPercentagesReady.h"
#include "SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.generated.h"

class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestGlobalAchievementPercentagesAsyncDelegate OnCallback;
    
    USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages();
    UFUNCTION(BlueprintCallable)
    static USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* RequestGlobalAchievementPercentagesAsync(UObject* WorldContextObject, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FGlobalAchievementPercentagesReady& Data, bool bWasSuccessful);
    
};

