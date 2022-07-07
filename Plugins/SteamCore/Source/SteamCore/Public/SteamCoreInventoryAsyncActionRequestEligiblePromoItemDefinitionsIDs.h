#pragma once
#include "CoreMinimal.h"
#include "SteamInventoryEligiblePromoItemDefIDs.h"
#include "SteamCoreAsyncAction.h"
#include "SteamID.h"
#include "OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegateDelegate.h"
#include "SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.generated.h"

class UObject;
class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate OnCallback;
    
    USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs();
    UFUNCTION(BlueprintCallable)
    static USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* RequestEligiblePromoItemDefinitionsIDsAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FSteamInventoryEligiblePromoItemDefIDs& Data, bool bWasSuccessful);
    
};

