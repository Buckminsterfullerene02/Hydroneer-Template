#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnUnsubscribeItemAsyncDelegateDelegate.h"
#include "RemoteStorageSubscribePublishedFileResult.h"
#include "PublishedFileID.h"
#include "SteamCoreUGCAsyncActionUnsubscribeItem.generated.h"

class USteamCoreUGCAsyncActionUnsubscribeItem;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionUnsubscribeItem : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnsubscribeItemAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionUnsubscribeItem();
    UFUNCTION(BlueprintCallable)
    static USteamCoreUGCAsyncActionUnsubscribeItem* UnsubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileIDs, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
    
};

