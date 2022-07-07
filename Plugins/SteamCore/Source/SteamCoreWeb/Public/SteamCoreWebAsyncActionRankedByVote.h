#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionRankedByVote.generated.h"

class USteamCoreWebAsyncActionRankedByVote;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionRankedByVote : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionRankedByVote();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionRankedByVote* RankedByVoteAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
    
};

