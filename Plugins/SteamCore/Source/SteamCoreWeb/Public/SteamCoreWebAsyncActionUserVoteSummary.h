#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionUserVoteSummary.generated.h"

class USteamCoreWebAsyncActionUserVoteSummary;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionUserVoteSummary : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionUserVoteSummary();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionUserVoteSummary* UserVoteSummaryAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, TArray<FString> PublishedFileIDs);
    
};

