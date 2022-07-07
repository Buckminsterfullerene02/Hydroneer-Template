#pragma once
#include "CoreMinimal.h"
#include "OnGetFollowerCountAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "FriendsGetFollowerCount.h"
#include "SteamID.h"
#include "SteamCoreFriendsAsyncActionGetFollowerCount.generated.h"

class USteamCoreFriendsAsyncActionGetFollowerCount;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreFriendsAsyncActionGetFollowerCount : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetFollowerCountAsyncDelegate OnCallback;
    
    USteamCoreFriendsAsyncActionGetFollowerCount();
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FFriendsGetFollowerCount& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreFriendsAsyncActionGetFollowerCount* GetFollowerCountAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout);
    
};

