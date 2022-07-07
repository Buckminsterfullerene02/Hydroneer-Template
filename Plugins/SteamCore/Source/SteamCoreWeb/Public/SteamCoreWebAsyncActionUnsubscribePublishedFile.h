#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionUnsubscribePublishedFile.generated.h"

class USteamCoreWebAsyncActionUnsubscribePublishedFile;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionUnsubscribePublishedFile : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionUnsubscribePublishedFile();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionUnsubscribePublishedFile* UnsubscribePublishedFileAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, const FString& PublishedFileIDs);
    
};

