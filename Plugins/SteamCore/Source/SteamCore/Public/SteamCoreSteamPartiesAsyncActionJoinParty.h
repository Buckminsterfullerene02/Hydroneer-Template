#pragma once
#include "CoreMinimal.h"
#include "JoinPartyData.h"
#include "SteamCoreAsyncAction.h"
#include "OnJoinPartyCallbackDelegate.h"
#include "PartyBeaconID.h"
#include "SteamCoreSteamPartiesAsyncActionJoinParty.generated.h"

class USteamCoreSteamPartiesAsyncActionJoinParty;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreSteamPartiesAsyncActionJoinParty : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinPartyCallback OnCallback;
    
    USteamCoreSteamPartiesAsyncActionJoinParty();
    UFUNCTION(BlueprintCallable)
    static USteamCoreSteamPartiesAsyncActionJoinParty* JoinPartyAsync(UObject* WorldContextObject, FPartyBeaconID BeaconID, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FJoinPartyData& Data, bool bWasSuccessful);
    
};

