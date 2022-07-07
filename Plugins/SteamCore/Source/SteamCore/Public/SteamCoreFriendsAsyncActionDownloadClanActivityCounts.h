#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnDownloadClanActivityCountsAsyncDelegateDelegate.h"
#include "DownloadClanActivityCountsResult.h"
#include "SteamID.h"
#include "SteamCoreFriendsAsyncActionDownloadClanActivityCounts.generated.h"

class USteamCoreFriendsAsyncActionDownloadClanActivityCounts;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreFriendsAsyncActionDownloadClanActivityCounts : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadClanActivityCountsAsyncDelegate OnCallback;
    
    USteamCoreFriendsAsyncActionDownloadClanActivityCounts();
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FDownloadClanActivityCountsResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreFriendsAsyncActionDownloadClanActivityCounts* DownloadClanActivityCountsAsync(UObject* WorldContextObject, TArray<FSteamID> SteamIDClans, float Timeout);
    
};

