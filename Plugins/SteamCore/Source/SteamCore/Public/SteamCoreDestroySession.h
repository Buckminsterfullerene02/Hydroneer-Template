#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamCoreDestroySession.generated.h"

class USteamCoreDestroySession;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreDestroySession : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    USteamCoreDestroySession();
    UFUNCTION(BlueprintCallable)
    void OnCompleted(FName SessionName, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreDestroySession* DestroySteamCoreSession(UObject* WorldContextObject, float Timeout);
    
};

