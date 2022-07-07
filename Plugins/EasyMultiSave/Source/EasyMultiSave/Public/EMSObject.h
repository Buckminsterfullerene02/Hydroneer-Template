#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "EMSObject.generated.h"

class UEMSProfileSaveGame;
class AActor;
class UWorld;
class UEMSPersistentSaveGame;
class UEMSInfoSaveGame;
class UEMSCustomSaveGame;

UCLASS(Blueprintable, ConfigDoNotCheckDefaults, Config=Game)
class EASYMULTISAVE_API UEMSObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentSaveGameName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentSaveUserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEMSInfoSaveGame* CachedSlotInfoSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEMSPersistentSaveGame* CachedPersistentSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEMSProfileSaveGame* CachedProfileSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UEMSCustomSaveGame*> CachedCustomSaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorList;
    
    UEMSObject();
protected:
    UFUNCTION()
    void OuterActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

