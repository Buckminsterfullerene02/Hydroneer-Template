#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetUserInfo.generated.h"

class USteamCoreWebAsyncActionGetUserInfo;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetUserInfo : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetUserInfo();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetUserInfo* GetUserInfoAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 Ipaddress);
    
};

