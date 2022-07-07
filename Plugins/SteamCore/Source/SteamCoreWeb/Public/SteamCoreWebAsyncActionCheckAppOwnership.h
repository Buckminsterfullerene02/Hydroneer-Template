#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionCheckAppOwnership.generated.h"

class USteamCoreWebAsyncActionCheckAppOwnership;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionCheckAppOwnership : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionCheckAppOwnership();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionCheckAppOwnership* CheckAppOwnershipAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID);
    
};

