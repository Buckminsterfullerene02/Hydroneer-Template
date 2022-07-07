#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetPlayerSummaries.generated.h"

class USteamCoreWebAsyncActionGetPlayerSummaries;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPlayerSummaries : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetPlayerSummaries();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetPlayerSummaries* GetPlayerSummariesAsync(UObject* WorldContextObject, const FString& Key, TArray<FString> SteamIDs);
    
};

