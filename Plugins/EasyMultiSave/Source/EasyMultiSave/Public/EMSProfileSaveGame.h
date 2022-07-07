#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "EMSProfileSaveGame.generated.h"

UCLASS(Blueprintable)
class EASYMULTISAVE_API UEMSProfileSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UEMSProfileSaveGame();
};

