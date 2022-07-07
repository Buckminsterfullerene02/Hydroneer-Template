#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetPopular.generated.h"

class USteamCoreWebAsyncActionGetPopular;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPopular : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetPopular();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetPopular* GetPopularAsync(UObject* WorldContextObject, const FString& Key, const FString& Language, int32 Rows, int32 Start, int32 FilterAppId, int32 ECurrency);
    
};

