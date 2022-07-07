#pragma once
#include "CoreMinimal.h"
#include "ENextStepType.generated.h"

UENUM(BlueprintType)
enum class ENextStepType : uint8 {
    SaveLevel,
    FinishSave,
};

