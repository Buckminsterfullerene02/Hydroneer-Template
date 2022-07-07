#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionSetUGCUsedByGC.generated.h"

class USteamCoreWebAsyncActionSetUGCUsedByGC;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionSetUGCUsedByGC : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionSetUGCUsedByGC();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionSetUGCUsedByGC* SetUGCUsedByGCAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, const FString& UGCID, int32 AppID, bool bUsed);
    
};

