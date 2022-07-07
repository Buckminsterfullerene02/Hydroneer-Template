#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "RequestStoreAuthURLDelegateDelegate.h"
#include "StoreAuthURLResponse.h"
#include "SteamCoreUserAsyncActionRequestStoreAuthURL.generated.h"

class USteamCoreUserAsyncActionRequestStoreAuthURL;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUserAsyncActionRequestStoreAuthURL : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestStoreAuthURLDelegate OnCallback;
    
    USteamCoreUserAsyncActionRequestStoreAuthURL();
    UFUNCTION(BlueprintCallable)
    static USteamCoreUserAsyncActionRequestStoreAuthURL* RequestStoreAuthURLAsync(UObject* WorldContextObject, const FString& RedirectURL, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FStoreAuthURLResponse& Data, bool bWasSuccessful);
    
};

