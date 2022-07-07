#pragma once
#include "CoreMinimal.h"
#include "PublishedFileID.h"
#include "ESteamResult.h"
#include "SubmitItemUpdateResult.generated.h"

USTRUCT(BlueprintType)
struct FSubmitItemUpdateResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUserNeedsToAcceptWorkshopLegalAgreement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPublishedFileID PublishedFileID;
    
    STEAMCORE_API FSubmitItemUpdateResult();
};

