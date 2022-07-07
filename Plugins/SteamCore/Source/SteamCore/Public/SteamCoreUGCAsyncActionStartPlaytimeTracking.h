#pragma once
#include "CoreMinimal.h"
#include "StartPlaytimeTrackingResult.h"
#include "SteamCoreAsyncAction.h"
#include "PublishedFileID.h"
#include "OnStartPlaytimeTrackingAsyncDelegateDelegate.h"
#include "SteamCoreUGCAsyncActionStartPlaytimeTracking.generated.h"

class USteamCoreUGCAsyncActionStartPlaytimeTracking;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionStartPlaytimeTracking : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartPlaytimeTrackingAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionStartPlaytimeTracking();
    UFUNCTION(BlueprintCallable)
    static USteamCoreUGCAsyncActionStartPlaytimeTracking* StartPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> PublishedFileIDs, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FStartPlaytimeTrackingResult& Data, bool bWasSuccessful);
    
};

