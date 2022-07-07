#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetPriceSheet.generated.h"

class USteamCoreWebAsyncActionGetPriceSheet;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPriceSheet : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetPriceSheet();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionGetPriceSheet* GetPriceSheetAsync(UObject* WorldContextObject, const FString& Key, int32 Currency);
    
};

