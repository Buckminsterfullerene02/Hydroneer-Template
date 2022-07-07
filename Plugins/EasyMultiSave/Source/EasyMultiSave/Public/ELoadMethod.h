#pragma once
#include "CoreMinimal.h"
#include "ELoadMethod.generated.h"

UENUM(BlueprintType)
enum class ELoadMethod : uint8 {
    LM_Default,
    LM_Deferred,
    LM_Thread,
    LM_MAX UMETA(Hidden),
};

