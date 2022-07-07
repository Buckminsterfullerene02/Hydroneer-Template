#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetFriendList.generated.h"

class USteamCoreWebAsyncActionGetFriendList;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetFriendList : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetFriendList();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetFriendList* GetFriendListAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, const FString& Relationship);
    
};

