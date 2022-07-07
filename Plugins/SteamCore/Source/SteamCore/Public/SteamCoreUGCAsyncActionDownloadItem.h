#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnDownloadItemResultDelegateDelegate.h"
#include "DownloadItemResult.h"
#include "PublishedFileID.h"
#include "SteamCoreUGCAsyncActionDownloadItem.generated.h"

class USteamCoreUGCAsyncActionDownloadItem;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionDownloadItem : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadItemResultDelegate OnCallback;
    
    USteamCoreUGCAsyncActionDownloadItem();
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FDownloadItemResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreUGCAsyncActionDownloadItem* DownloadItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, bool bHighPriority, float Timeout);
    
};

