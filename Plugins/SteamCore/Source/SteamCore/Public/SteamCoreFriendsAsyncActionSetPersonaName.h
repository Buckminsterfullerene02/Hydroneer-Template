#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAsyncAction.h"
#include "OnSetPersonaNameAsyncDelegateDelegate.h"
#include "SetPersonaNameResponse.h"
#include "SteamCoreFriendsAsyncActionSetPersonaName.generated.h"

class USteamCoreFriendsAsyncActionSetPersonaName;
class UObject;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreFriendsAsyncActionSetPersonaName : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetPersonaNameAsyncDelegate OnCallback;
    
    USteamCoreFriendsAsyncActionSetPersonaName();
    UFUNCTION(BlueprintCallable)
    static USteamCoreFriendsAsyncActionSetPersonaName* SetPersonaNameAsync(UObject* WorldContextObject, const FString& Name, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FSetPersonaNameResponse& Data, bool bWasSuccessful);
    
};

