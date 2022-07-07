#pragma once
#include "CoreMinimal.h"
#include "CableComponent.h"
#include "LocalCableComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MINING_API ULocalCableComponent : public UCableComponent {
    GENERATED_BODY()
public:
    ULocalCableComponent();
};

