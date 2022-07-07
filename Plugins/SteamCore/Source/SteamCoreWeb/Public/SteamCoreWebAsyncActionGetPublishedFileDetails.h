#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetPublishedFileDetails.generated.h"

class USteamCoreWebAsyncActionGetPublishedFileDetails;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPublishedFileDetails : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetPublishedFileDetails();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetPublishedFileDetails* GetPublishedFileDetailsAsync(UObject* WorldContextObject, const FString& PublishedFileIDs);
    
};

