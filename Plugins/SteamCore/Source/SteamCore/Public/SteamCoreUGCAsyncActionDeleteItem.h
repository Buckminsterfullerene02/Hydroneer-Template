#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnDeleteItemResultAsyncDelegateDelegate.h"
#include "UGCDeleteItemResult.h"
#include "PublishedFileID.h"
#include "SteamCoreUGCAsyncActionDeleteItem.generated.h"

class USteamCoreUGCAsyncActionDeleteItem;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionDeleteItem : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeleteItemResultAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionDeleteItem();
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FUGCDeleteItemResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreUGCAsyncActionDeleteItem* DeleteItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout);
    
};

