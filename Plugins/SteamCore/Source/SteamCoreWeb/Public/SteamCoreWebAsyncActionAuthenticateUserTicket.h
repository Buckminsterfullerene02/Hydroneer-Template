#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionAuthenticateUserTicket.generated.h"

class USteamCoreWebAsyncActionAuthenticateUserTicket;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionAuthenticateUserTicket : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionAuthenticateUserTicket();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionAuthenticateUserTicket* AuthenticateUserTicketAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& Ticket);
    
};

