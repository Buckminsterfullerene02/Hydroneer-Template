#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncWaitOutputPinDelegate.h"
#include "EMSAsyncWait.generated.h"

class UObject;
class UEMSAsyncWait;

UCLASS(Blueprintable)
class EASYMULTISAVE_API UEMSAsyncWait : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncWaitOutputPin OnCompleted;
    
    UEMSAsyncWait();
    UFUNCTION(BlueprintCallable)
    static UEMSAsyncWait* AsyncWaitForOperation(UObject* WorldContextObject);
    
};

