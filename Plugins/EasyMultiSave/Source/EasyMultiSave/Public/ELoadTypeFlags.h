#pragma once
#include "CoreMinimal.h"
#include "ELoadTypeFlags.generated.h"

UENUM(BlueprintType)
enum class ELoadTypeFlags : uint8 {
    LF_Player,
    LF_Level,
    LF_MAX UMETA(Hidden),
};

