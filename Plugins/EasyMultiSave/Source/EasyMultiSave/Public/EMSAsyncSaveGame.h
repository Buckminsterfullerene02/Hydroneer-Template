#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncSaveOutputPinDelegate.h"
#include "EMSAsyncSaveGame.generated.h"

class UEMSAsyncSaveGame;
class UObject;

UCLASS(Blueprintable)
class EASYMULTISAVE_API UEMSAsyncSaveGame : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncSaveOutputPin OnCompleted;
    
    UEMSAsyncSaveGame();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UEMSAsyncSaveGame* AsyncSaveActors(UObject* WorldContextObject, int32 Data);
    
};

