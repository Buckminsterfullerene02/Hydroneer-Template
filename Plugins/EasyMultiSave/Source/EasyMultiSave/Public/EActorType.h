#pragma once
#include "CoreMinimal.h"
#include "EActorType.generated.h"

UENUM(BlueprintType)
enum class EActorType : uint8 {
    AT_Runtime,
    AT_Placed,
    AT_LevelScript,
    AT_Player,
    AT_GameObject,
    AT_Persistent,
    AT_MAX UMETA(Hidden),
};

