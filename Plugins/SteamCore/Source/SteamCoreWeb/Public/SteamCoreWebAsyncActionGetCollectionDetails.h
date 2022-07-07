#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetCollectionDetails.generated.h"

class USteamCoreWebAsyncActionGetCollectionDetails;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetCollectionDetails : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetCollectionDetails();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetCollectionDetails* GetCollectionDetailsAsync(UObject* WorldContextObject, TArray<FString> PublishedFileIDs);
    
};

