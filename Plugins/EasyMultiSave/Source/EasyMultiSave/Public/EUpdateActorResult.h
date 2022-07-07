#pragma once
#include "CoreMinimal.h"
#include "EUpdateActorResult.generated.h"

UENUM(BlueprintType)
enum class EUpdateActorResult : uint8 {
    RES_Success,
    RES_Skip,
    RES_ShouldSpawnNewActor,
    RES_MAX UMETA(Hidden),
};

