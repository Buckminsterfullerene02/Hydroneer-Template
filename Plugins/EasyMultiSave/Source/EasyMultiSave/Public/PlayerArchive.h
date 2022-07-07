#pragma once
#include "CoreMinimal.h"
#include "PlayerArchive.generated.h"

USTRUCT(BlueprintType)
struct FPlayerArchive {
    GENERATED_BODY()
public:
    EASYMULTISAVE_API FPlayerArchive();
};

