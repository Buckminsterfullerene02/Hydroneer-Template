#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "SteamID.h"
#include "OnIsFollowingAsyncDelegateDelegate.h"
#include "FriendsIsFollowing.h"
#include "SteamCoreFriendsAsyncActionIsFollowing.generated.h"

class USteamCoreFriendsAsyncActionIsFollowing;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreFriendsAsyncActionIsFollowing : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsFollowingAsyncDelegate OnCallback;
    
    USteamCoreFriendsAsyncActionIsFollowing();
    UFUNCTION(BlueprintCallable)
    static USteamCoreFriendsAsyncActionIsFollowing* IsFollowingAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FFriendsIsFollowing& Data, bool bWasSuccessful);
    
};

