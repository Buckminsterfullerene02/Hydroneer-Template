#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELowEntryFileManagerYesNo.h"
#include "LowEntryFileManagerDirectory.generated.h"

class ULowEntryFileManagerDirectory;
class ULowEntryFileManagerFile;

UCLASS(Blueprintable)
class LOWENTRYFILEMANAGER_API ULowEntryFileManagerDirectory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Directory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRoot;
    
    ULowEntryFileManagerDirectory();
    UFUNCTION(BlueprintCallable)
    void MoveTo(ULowEntryFileManagerDirectory* NewDirectory, const bool OverrideExistingFiles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRootBool();
    
    UFUNCTION(BlueprintCallable)
    void IsRoot(ELowEntryFileManagerYesNo& Branch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmptyBool();
    
    UFUNCTION(BlueprintCallable)
    void IsEmpty(ELowEntryFileManagerYesNo& Branch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULowEntryFileManagerDirectory* GetParentDirectory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ULowEntryFileManagerFile*> GetFiles();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULowEntryFileManagerFile* GetFile(const FString& File);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULowEntryFileManagerDirectory* GetDirectory(const FString& Directory_);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ULowEntryFileManagerDirectory*> GetDirectories();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAbsolutePath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExistsBool();
    
    UFUNCTION(BlueprintCallable)
    void Exists(ELowEntryFileManagerYesNo& Branch);
    
    UFUNCTION(BlueprintCallable)
    void Delete();
    
    UFUNCTION(BlueprintCallable)
    void Create();
    
    UFUNCTION(BlueprintCallable)
    void CopyTo(ULowEntryFileManagerDirectory* NewDirectory, const bool OverrideExistingFiles);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

