#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnServerUpdatedAsyncDelegateDelegate.h"
#include "OnServerRefreshCompleteDelegateDelegate.h"
#include "GameServerItem.h"
#include "SteamCoreMatchmakingServersAsyncActionRequestServerList.generated.h"

class UServerFilter;
class USteamCoreMatchmakingServersAsyncActionRequestServerList;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreMatchmakingServersAsyncActionRequestServerList : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnServerUpdatedAsyncDelegate OnCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnServerRefreshCompleteDelegate OnRefreshCompleted;
    
    USteamCoreMatchmakingServersAsyncActionRequestServerList();
    UFUNCTION(BlueprintCallable)
    static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestSpectatorServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestLANServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestInternetServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestHistoryServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFriendsServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFavoritesServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleServerListFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FGameServerItem& Data);
    
};

