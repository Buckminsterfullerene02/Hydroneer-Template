#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamSessionSetting.h"
#include "SteamCoreCreateSession.generated.h"

class USteamCoreCreateSession;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreCreateSession : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    USteamCoreCreateSession();
    UFUNCTION(BlueprintCallable)
    static USteamCoreCreateSession* CreateSteamCoreSession(UObject* WorldContextObject, TMap<FString, FSteamSessionSetting> SessionSettings, const FString& SessionName, int32 MaxPlayers, bool bUseLAN, bool bAllowInvites, bool bUsesPresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable, float Timeout);
    
};

