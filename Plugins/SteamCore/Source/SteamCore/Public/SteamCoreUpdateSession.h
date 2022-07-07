#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamSessionSearchSetting.h"
#include "SteamCoreUpdateSession.generated.h"

class USteamCoreUpdateSession;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUpdateSession : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnCallback;
    
    USteamCoreUpdateSession();
    UFUNCTION(BlueprintCallable)
    static USteamCoreUpdateSession* UpdateSteamCoreSession(UObject* WorldContextObject, TMap<FString, FSteamSessionSearchSetting> Settings, const FString& SessionName, int32 MaxPlayers);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleted(FName SessionName, bool bWasSuccessful);
    
};

