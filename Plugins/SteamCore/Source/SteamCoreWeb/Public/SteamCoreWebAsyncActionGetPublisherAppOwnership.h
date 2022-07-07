#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetPublisherAppOwnership.generated.h"

class USteamCoreWebAsyncActionGetPublisherAppOwnership;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPublisherAppOwnership : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetPublisherAppOwnership();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetPublisherAppOwnership* GetPublisherAppOwnershipAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID);
    
};

