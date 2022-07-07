#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnFileDetailsResultAsyncDelegateDelegate.h"
#include "FileDetailsResult.h"
#include "SteamCoreAppsAsyncActionGetFileDetails.generated.h"

class USteamCoreAppsAsyncActionGetFileDetails;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreAppsAsyncActionGetFileDetails : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFileDetailsResultAsyncDelegate OnCallback;
    
    USteamCoreAppsAsyncActionGetFileDetails();
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FFileDetailsResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreAppsAsyncActionGetFileDetails* GetFileDetailsAsync(UObject* WorldContextObject, const FString& Filename, float Timeout);
    
};

