#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionPostGameDataFrame.generated.h"

class USteamCoreWebAsyncActionPostGameDataFrame;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionPostGameDataFrame : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionPostGameDataFrame();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionPostGameDataFrame* PostGameDataFrameAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID, const FString& BroadcastId, const FString& FrameData);
    
};

