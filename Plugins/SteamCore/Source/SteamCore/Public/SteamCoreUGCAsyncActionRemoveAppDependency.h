#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnRemoveAppDependencyResultAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "RemoveAppDependencyResult.h"
#include "SteamCoreUGCAsyncActionRemoveAppDependency.generated.h"

class USteamCoreUGCAsyncActionRemoveAppDependency;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionRemoveAppDependency : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoveAppDependencyResultAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionRemoveAppDependency();
    UFUNCTION(BlueprintCallable)
    static USteamCoreUGCAsyncActionRemoveAppDependency* RemoveAppDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, int32 AppID, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FRemoveAppDependencyResult& Data, bool bWasSuccessful);
    
};

