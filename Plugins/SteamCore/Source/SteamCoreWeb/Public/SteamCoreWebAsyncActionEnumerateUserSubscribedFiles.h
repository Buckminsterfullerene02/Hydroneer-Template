#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionEnumerateUserSubscribedFiles.generated.h"

class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionEnumerateUserSubscribedFiles : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionEnumerateUserSubscribedFiles();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* EnumerateUserSubscribedFilesAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, int32 ListType);
    
};

