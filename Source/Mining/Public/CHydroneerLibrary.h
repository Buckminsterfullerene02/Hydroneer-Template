#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "CHydroneerLibrary.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class MINING_API UCHydroneerLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCHydroneerLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StringToClassRef(const FString& ClassStringName, UClass*& OutClass);
    
    UFUNCTION(BlueprintCallable)
    static void SetHiddenShadow(bool bNewCastHiddenShadow, UPrimitiveComponent* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetCanAffectNavigation(bool bCanAffectNavigation, UPrimitiveComponent* Target);
    
    UFUNCTION(BlueprintCallable)
    static FString SanitizeString(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static bool RenameSave(const FString& OriginalSaveName, const FString& NewSaveName);
    
    UFUNCTION(BlueprintCallable)
    static void ReloadInput(bool bReload);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSaveDirectory();
    
    UFUNCTION(BlueprintCallable)
    static void GetSaveBackupNames(const FString& SaveName, TArray<FString>& OutBackups);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetHighestCurrentSaveIndex(const FString& SaveName);
    
    UFUNCTION(BlueprintCallable)
    static UClass* GetBlueprintAssetClass(const FAssetData& Asset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAppdataLocalDir();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> FindFolders(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static void CopyOverDirectory(const FString& OldDirectory, const FString& NewDirectory);
    
    UFUNCTION(BlueprintCallable)
    static void BackupSave(const FString& SaveName, bool bIncrementSave, int32 MaxIncrements);
    
};

