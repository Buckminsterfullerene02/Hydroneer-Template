#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetAssetClassInfo.generated.h"

class USteamCoreWebAsyncActionGetAssetClassInfo;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetAssetClassInfo : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetAssetClassInfo();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetAssetClassInfo* GetAssetClassInfoAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& Language, int32 ClassCount, const FString& ClassId, const FString& InstanceID);
    
};

