#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionProcessAgreement.generated.h"

class USteamCoreWebAsyncActionProcessAgreement;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionProcessAgreement : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionProcessAgreement();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionProcessAgreement* ProcessAgreementAsync(UObject* WorldContextObject, const FString& Key, const FString& OrderId, const FString& SteamID, const FString& AgreementId, int32 AppID, int32 Amount, const FString& Currency);
    
};

