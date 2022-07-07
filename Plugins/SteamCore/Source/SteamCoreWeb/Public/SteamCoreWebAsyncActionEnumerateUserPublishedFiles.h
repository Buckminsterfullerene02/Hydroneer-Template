#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionEnumerateUserPublishedFiles.generated.h"

class USteamCoreWebAsyncActionEnumerateUserPublishedFiles;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionEnumerateUserPublishedFiles : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionEnumerateUserPublishedFiles();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionEnumerateUserPublishedFiles* EnumerateUserPublishedFilesAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID);
    
};

