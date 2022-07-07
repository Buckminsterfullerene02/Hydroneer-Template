#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "StopPlaytimeTrackingResult.h"
#include "OnStopPlaytimeTrackingAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreUGCAsyncActionStopPlaytimeTracking.generated.h"

class USteamCoreUGCAsyncActionStopPlaytimeTracking;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionStopPlaytimeTracking : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStopPlaytimeTrackingAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionStopPlaytimeTracking();
    UFUNCTION(BlueprintCallable)
    static USteamCoreUGCAsyncActionStopPlaytimeTracking* StopPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> PublishedFileIDs, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);
    
};

