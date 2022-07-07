#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class MINING_API UCGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UCGameInstance();
};

