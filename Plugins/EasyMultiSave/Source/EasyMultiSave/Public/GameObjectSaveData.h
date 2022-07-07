#pragma once
#include "CoreMinimal.h"
#include "GameObjectSaveData.generated.h"

USTRUCT(BlueprintType)
struct FGameObjectSaveData {
    GENERATED_BODY()
public:
    EASYMULTISAVE_API FGameObjectSaveData();
};

