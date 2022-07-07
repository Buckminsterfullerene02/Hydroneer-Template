#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMSFunctionLibrary.generated.h"

class UEMSProfileSaveGame;
class UObject;
class UTextureRenderTarget2D;
class UEMSCustomSaveGame;
class UTexture2D;
class UEMSPersistentSaveGame;
class UEMSInfoSaveGame;

UCLASS(Blueprintable)
class EASYMULTISAVE_API UEMSFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEMSFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetCurrentSaveUserName(UObject* WorldContextObject, const FString& UserName);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentSaveGameName(UObject* WorldContextObject, const FString& SaveGameName);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorSaveProperties(UObject* WorldContextObject, bool bSkipSave, bool bPersistent, bool bSkipTransform);
    
    UFUNCTION(BlueprintCallable)
    static bool SavePersistentObject(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveLocalProfile(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveCustom(UObject* WorldContextObject, UEMSCustomSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSavingOrLoading(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* ImportSaveThumbnail(UObject* WorldContextObject, const FString& SaveGameName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetSortedSaveSlots(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEMSInfoSaveGame* GetSlotInfoSaveGame(UObject* WorldContextObject, FString& SaveGameName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEMSPersistentSaveGame* GetPersistentSave(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEMSInfoSaveGame* GetNamedSlotInfo(UObject* WorldContextObject, const FString& SaveGameName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEMSProfileSaveGame* GetLocalProfileSaveGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEMSCustomSaveGame* GetCustomSave(UObject* WorldContextObject, TSubclassOf<UEMSCustomSaveGame> SaveGameClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetAllSaveUsers(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ExportSaveThumbnail(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, const FString& SaveGameName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesSaveSlotExist(UObject* WorldContextObject, const FString& SaveGameName);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteSaveUser(UObject* WorldContextObject, const FString& UserName);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteLocalProfile(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteCustomSave(UObject* WorldContextObject, UEMSCustomSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteAllSaveDataForSlot(UObject* WorldContextObject, const FString& SaveGameName);
    
};

