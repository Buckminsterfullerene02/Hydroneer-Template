#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionCancelAgreement.generated.h"

class USteamCoreWebAsyncActionCancelAgreement;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionCancelAgreement : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionCancelAgreement();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionCancelAgreement* CancelAgreementAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, const FString& AgreementId, int32 AppID);
    
};

