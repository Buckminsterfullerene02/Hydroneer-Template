#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnGetAppDependenciesResultAsyncDelegateDelegate.h"
#include "GetAppDependenciesResult.h"
#include "PublishedFileID.h"
#include "SteamCoreUGCAsyncActionGetAppDependencies.generated.h"

class UObject;
class USteamCoreUGCAsyncActionGetAppDependencies;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionGetAppDependencies : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetAppDependenciesResultAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionGetAppDependencies();
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FGetAppDependenciesResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreUGCAsyncActionGetAppDependencies* GetAppDependenciesAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout);
    
};

