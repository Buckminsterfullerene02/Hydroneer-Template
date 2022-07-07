#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetUserGroupList.generated.h"

class USteamCoreWebAsyncActionGetUserGroupList;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetUserGroupList : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetUserGroupList();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetUserGroupList* GetUserGroupListAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID);
    
};

