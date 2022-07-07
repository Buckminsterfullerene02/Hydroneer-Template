#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnAddUGCDependencyResultAsyncDelegateDelegate.h"
#include "AddUGCDependencyResult.h"
#include "PublishedFileID.h"
#include "SteamCoreUGCAsyncActionAddUGCDependency.generated.h"

class USteamCoreUGCAsyncActionAddUGCDependency;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionAddUGCDependency : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddUGCDependencyResultAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionAddUGCDependency();
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FAddUGCDependencyResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreUGCAsyncActionAddUGCDependency* AddDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId, float Timeout);
    
};

