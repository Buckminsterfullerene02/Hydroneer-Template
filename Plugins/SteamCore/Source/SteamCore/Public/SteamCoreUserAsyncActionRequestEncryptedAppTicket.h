#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "RequestEncryptedAppTicketDelegateDelegate.h"
#include "EncryptedAppTicketResponse.h"
#include "SteamCoreUserAsyncActionRequestEncryptedAppTicket.generated.h"

class USteamCoreUserAsyncActionRequestEncryptedAppTicket;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserAsyncActionRequestEncryptedAppTicket : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestEncryptedAppTicketDelegate OnCallback;
    
    USteamCoreUserAsyncActionRequestEncryptedAppTicket();
    UFUNCTION(BlueprintCallable)
    static USteamCoreUserAsyncActionRequestEncryptedAppTicket* RequestEncryptedAppTicketAsync(UObject* WorldContextObject, TArray<uint8> DataToInclude, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FEncryptedAppTicketResponse& Data, bool bWasSuccessful);
    
};

