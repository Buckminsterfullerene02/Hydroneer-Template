#pragma once
#include "CoreMinimal.h"
#include "CreateItemResult.h"
#include "SteamCoreAsyncAction.h"
#include "OnCreateItemAsyncDelegateDelegate.h"
#include "ESteamWorkshopFileType.h"
#include "SteamCoreUGCAsyncActionCreateItem.generated.h"

class USteamCoreUGCAsyncActionCreateItem;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionCreateItem : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreateItemAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionCreateItem();
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FCreateItemResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreUGCAsyncActionCreateItem* CreateItemAsync(UObject* WorldContextObject, int32 ConsumerAppID, ESteamWorkshopFileType FileType, float Timeout);
    
};

