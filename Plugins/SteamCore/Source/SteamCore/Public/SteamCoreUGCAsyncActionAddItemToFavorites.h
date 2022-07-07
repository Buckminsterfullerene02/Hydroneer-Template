#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnAddItemToFavoritesAsyncDelegateDelegate.h"
#include "UserFavoriteItemsListChanged.h"
#include "PublishedFileID.h"
#include "SteamCoreUGCAsyncActionAddItemToFavorites.generated.h"

class UObject;
class USteamCoreUGCAsyncActionAddItemToFavorites;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionAddItemToFavorites : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddItemToFavoritesAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionAddItemToFavorites();
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreUGCAsyncActionAddItemToFavorites* AddItemToFavoritesAsync(UObject* WorldContextObject, int32 AppID, FPublishedFileID PublishedFileID, float Timeout);
    
};

