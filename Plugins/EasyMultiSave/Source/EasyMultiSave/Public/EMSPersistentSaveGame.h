#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveSlotInfo.h"
#include "EMSPersistentSaveGame.generated.h"

UCLASS(Blueprintable)
class EASYMULTISAVE_API UEMSPersistentSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSaveSlotInfo SlotInfo;
    
    UEMSPersistentSaveGame();
};

