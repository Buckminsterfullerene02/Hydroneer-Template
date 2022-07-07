#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EFileSaveMethod.h"
#include "ELoadMethod.h"
#include "EMSPluginSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, config = Engine)
class EASYMULTISAVE_API UEMSPluginSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultSaveGameName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath SlotInfoSaveGameClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPersistentPlayer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPersistentGameMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdvancedSpawnCheck;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveActorAffiliation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSaveStructs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultiThreadSaving;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoadMethod LoadMethod;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFileSaveMethod FileNamingType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyPersistentSave;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath PersistentSaveGameClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath ProfileSaveGameClass;
    
    UEMSPluginSettings();
};

