#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionRequestPlayerGameBan.generated.h"

class USteamCoreWebAsyncActionRequestPlayerGameBan;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionRequestPlayerGameBan : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionRequestPlayerGameBan();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionRequestPlayerGameBan* RequestPlayerGameBanAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, const FString& ReportID, const FString& CheatDescription, int32 Duration, bool bDelayBan);
    
};

