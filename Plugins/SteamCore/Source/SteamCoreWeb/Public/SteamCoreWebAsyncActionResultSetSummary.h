#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionResultSetSummary.generated.h"

class USteamCoreWebAsyncActionResultSetSummary;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionResultSetSummary : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionResultSetSummary();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionResultSetSummary* ResultSetSummaryAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, int32 StartId, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
    
};

