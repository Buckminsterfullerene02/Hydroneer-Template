#pragma once
#include "CoreMinimal.h"
#include "SteamGameID.h"
#include "ESteamResult.h"
#include "UserStatsStored.generated.h"

USTRUCT(BlueprintType)
struct FUserStatsStored {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamGameID GameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    STEAMCORE_API FUserStatsStored();
};

