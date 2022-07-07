#pragma once
#include "CoreMinimal.h"
#include "ActorSaveData.generated.h"

USTRUCT(BlueprintType)
struct FActorSaveData {
    GENERATED_BODY()
public:
    EASYMULTISAVE_API FActorSaveData();
};

