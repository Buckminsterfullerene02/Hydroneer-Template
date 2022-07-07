#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "FindSteamSessionsResultDelegateDelegate.h"
#include "ESteamSessionFindType.h"
#include "SteamSessionSearchSetting.h"
#include "SteamCoreFindSession.generated.h"

class USteamCoreFindSession;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreFindSession : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindSteamSessionsResultDelegate OnCallback;
    
    USteamCoreFindSession();
    UFUNCTION(BlueprintCallable)
    void OnCompleted(bool bSuccessful);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreFindSession* FindSteamCoreSessions(UObject* WorldContextObject, TMap<FString, FSteamSessionSearchSetting> SearchSettings, int32 MaxResults, bool bUseLAN, ESteamSessionFindType ServerType, bool bEmptyServersOnly, bool bSecureServersOnly, float Timeout);
    
};

