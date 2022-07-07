#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionAuthenticateUser.generated.h"

class USteamCoreWebAsyncActionAuthenticateUser;
class UObject;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionAuthenticateUser : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionAuthenticateUser();
    UFUNCTION(BlueprintCallable)
    static USteamCoreWebAsyncActionAuthenticateUser* AuthenticateUserAsync(UObject* WorldContextObject, const FString& SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey);
    
};

