#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionHistoryExecuteCommand.generated.h"

class USteamCoreWebAsyncActionHistoryExecuteCommand;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionHistoryExecuteCommand : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionHistoryExecuteCommand();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionHistoryExecuteCommand* HistoryExecuteCommandAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID, const FString& ContextId, int32 ActorId);
    
};

