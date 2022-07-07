#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "EMSCustomSaveGame.generated.h"

UCLASS(Blueprintable)
class EASYMULTISAVE_API UEMSCustomSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveGameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSaveSlot;
    
    UEMSCustomSaveGame();
};

