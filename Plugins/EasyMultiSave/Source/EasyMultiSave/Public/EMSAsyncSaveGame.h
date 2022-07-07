#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncSaveOutputPinDelegate.h"
#include "EMSAsyncSaveGame.generated.h"

class UObject;
class UEMSAsyncSaveGame;

UCLASS(Blueprintable)
class EASYMULTISAVE_API UEMSAsyncSaveGame : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncSaveOutputPin OnCompleted;
    
    UEMSAsyncSaveGame();
    UFUNCTION(BlueprintCallable)
    static UEMSAsyncSaveGame* AsyncSaveActors(UObject* WorldContextObject, int32 Data);
    
};

