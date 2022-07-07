#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetHistoryCommandDetails.generated.h"

class USteamCoreWebAsyncActionGetHistoryCommandDetails;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetHistoryCommandDetails : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetHistoryCommandDetails();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetHistoryCommandDetails* GetHistoryCommandDetailsAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID, const FString& Command, const FString& ContextId, const FString& Arguments);
    
};

