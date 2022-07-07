#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "PublishedFileID.h"
#include "OnSubscribeItemAsyncDelegateDelegate.h"
#include "RemoteStorageSubscribePublishedFileResult.h"
#include "SteamCoreUGCAsyncActionSubscribeItem.generated.h"

class UObject;
class USteamCoreUGCAsyncActionSubscribeItem;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionSubscribeItem : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubscribeItemAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionSubscribeItem();
    UFUNCTION(BlueprintCallable)
    static USteamCoreUGCAsyncActionSubscribeItem* SubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileIDs, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
    
};

