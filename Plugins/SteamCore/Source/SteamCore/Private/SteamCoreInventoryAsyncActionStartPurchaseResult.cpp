#include "SteamCoreInventoryAsyncActionStartPurchaseResult.h"

class UObject;
class USteamCoreInventoryAsyncActionStartPurchaseResult;

USteamCoreInventoryAsyncActionStartPurchaseResult* USteamCoreInventoryAsyncActionStartPurchaseResult::StartPurchaseAsync(UObject* WorldContextObject, const TArray<FSteamItemDef> ItemDefs, const TArray<int32> Quantity, float Timeout) {
    return NULL;
}

void USteamCoreInventoryAsyncActionStartPurchaseResult::HandleCallback(const FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful) {
}

USteamCoreInventoryAsyncActionStartPurchaseResult::USteamCoreInventoryAsyncActionStartPurchaseResult() {
}

