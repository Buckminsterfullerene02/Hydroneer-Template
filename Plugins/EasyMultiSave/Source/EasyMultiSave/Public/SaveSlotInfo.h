#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SaveSlotInfo.generated.h"

USTRUCT(BlueprintType)
struct FSaveSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Players;
    
    EASYMULTISAVE_API FSaveSlotInfo();
};

