#pragma once
#include "CoreMinimal.h"
#include "OnServerRuleAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "GameServerRule.h"
#include "SteamCoreMatchmakingServersAsyncActionServerRules.generated.h"

class USteamCoreMatchmakingServersAsyncActionServerRules;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreMatchmakingServersAsyncActionServerRules : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnServerRuleAsyncDelegate OnCallback;
    
    USteamCoreMatchmakingServersAsyncActionServerRules();
    UFUNCTION(BlueprintCallable)
    static USteamCoreMatchmakingServersAsyncActionServerRules* ServerRulesAsync(UObject* WorldContextObject, const FString& IP, int32 QueryPort, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const TArray<FGameServerRule>& Data, bool bWasSuccessful);
    
};

