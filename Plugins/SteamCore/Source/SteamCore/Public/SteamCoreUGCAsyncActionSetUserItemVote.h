#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnSetUserItemVoteAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SetUserItemVoteResult.h"
#include "SteamCoreUGCAsyncActionSetUserItemVote.generated.h"

class USteamCoreUGCAsyncActionSetUserItemVote;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionSetUserItemVote : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetUserItemVoteAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionSetUserItemVote();
    UFUNCTION(BlueprintCallable)
    static USteamCoreUGCAsyncActionSetUserItemVote* SetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, bool bVoteUp, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FSetUserItemVoteResult& Data, bool bWasSuccessful);
    
};

