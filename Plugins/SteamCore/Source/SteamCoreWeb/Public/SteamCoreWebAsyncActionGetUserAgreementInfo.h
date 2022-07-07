#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetUserAgreementInfo.generated.h"

class USteamCoreWebAsyncActionGetUserAgreementInfo;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetUserAgreementInfo : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetUserAgreementInfo();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetUserAgreementInfo* GetUserAgreementInfoAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID);
    
};

