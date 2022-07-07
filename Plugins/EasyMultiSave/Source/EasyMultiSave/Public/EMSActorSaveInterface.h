#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EMSActorSaveInterface.generated.h"

class UActorComponent;

UINTERFACE(Blueprintable)
class UEMSActorSaveInterface : public UInterface {
    GENERATED_BODY()
};

class IEMSActorSaveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ComponentsToSave(TArray<UActorComponent*>& Components);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorSaved();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorPreSave();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorLoaded();
    
};

