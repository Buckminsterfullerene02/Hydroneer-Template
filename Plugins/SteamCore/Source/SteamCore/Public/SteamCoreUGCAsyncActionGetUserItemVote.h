#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnGetUserItemVoteAsyncDelegateDelegate.h"
#include "GetUserItemVoteResult.h"
#include "PublishedFileID.h"
#include "SteamCoreUGCAsyncActionGetUserItemVote.generated.h"

class USteamCoreUGCAsyncActionGetUserItemVote;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionGetUserItemVote : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetUserItemVoteAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionGetUserItemVote();
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FGetUserItemVoteResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreUGCAsyncActionGetUserItemVote* GetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout);
    
};

