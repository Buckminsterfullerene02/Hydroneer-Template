#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncLoadOutputPinDelegate.h"
#include "EMSAsyncLoadGame.generated.h"

class UEMSAsyncLoadGame;
class UObject;

UCLASS(Blueprintable)
class EASYMULTISAVE_API UEMSAsyncLoadGame : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncLoadOutputPin OnCompleted;
    
    UEMSAsyncLoadGame();
    UFUNCTION(BlueprintCallable)
    static UEMSAsyncLoadGame* AsyncLoadActors(UObject* WorldContextObject, int32 Data, bool bFullReload);
    
};

