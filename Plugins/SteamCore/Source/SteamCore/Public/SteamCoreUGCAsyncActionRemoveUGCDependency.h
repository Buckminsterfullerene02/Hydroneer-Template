#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnRemoveUGCDependencyResultAsyncDelegateDelegate.h"
#include "RemoveUGCDependencyResult.h"
#include "PublishedFileID.h"
#include "SteamCoreUGCAsyncActionRemoveUGCDependency.generated.h"

class USteamCoreUGCAsyncActionRemoveUGCDependency;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionRemoveUGCDependency : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoveUGCDependencyResultAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionRemoveUGCDependency();
    UFUNCTION(BlueprintCallable)
    static USteamCoreUGCAsyncActionRemoveUGCDependency* RemoveDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FRemoveUGCDependencyResult& Data, bool bWasSuccessful);
    
};

