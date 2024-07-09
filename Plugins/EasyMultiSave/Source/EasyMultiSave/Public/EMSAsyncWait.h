#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncWaitOutputPinDelegate.h"
#include "EMSAsyncWait.generated.h"

class UEMSAsyncWait;
class UObject;

UCLASS(Blueprintable)
class EASYMULTISAVE_API UEMSAsyncWait : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncWaitOutputPin OnCompleted;
    
    UEMSAsyncWait();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UEMSAsyncWait* AsyncWaitForOperation(UObject* WorldContextObject);
    
};

