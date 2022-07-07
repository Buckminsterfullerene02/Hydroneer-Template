#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionItemVoteSummary.generated.h"

class USteamCoreWebAsyncActionItemVoteSummary;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionItemVoteSummary : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionItemVoteSummary();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionItemVoteSummary* ItemVoteSummaryAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, TArray<FString> PublishedFileIDs);
    
};

