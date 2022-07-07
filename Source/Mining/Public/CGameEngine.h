#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "CGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class MINING_API UCGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UCGameEngine();
};

