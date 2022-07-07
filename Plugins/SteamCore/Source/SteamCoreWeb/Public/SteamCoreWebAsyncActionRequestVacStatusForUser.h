#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionRequestVacStatusForUser.generated.h"

class USteamCoreWebAsyncActionRequestVacStatusForUser;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionRequestVacStatusForUser : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionRequestVacStatusForUser();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionRequestVacStatusForUser* RequestVacStatusForUserAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, const FString& SessionID);
    
};

