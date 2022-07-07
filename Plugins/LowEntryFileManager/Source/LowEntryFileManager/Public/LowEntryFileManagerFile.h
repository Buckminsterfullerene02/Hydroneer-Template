#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ELowEntryFileManagerYesNo.h"
#include "LowEntryFileManagerFile.generated.h"

class ULowEntryFileManagerFile;
class ULowEntryFileManagerDirectory;

UCLASS(Blueprintable)
class LOWENTRYFILEMANAGER_API ULowEntryFileManagerFile : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Directory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    ULowEntryFileManagerFile();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Size();
    
    UFUNCTION(BlueprintCallable)
    void SetTimestamp(const FDateTime& Timestamp);
    
    UFUNCTION(BlueprintCallable)
    void SetReadOnly(const bool ReadOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetData(const TArray<uint8>& Data);
    
    UFUNCTION(BlueprintCallable)
    void MoveTo(ULowEntryFileManagerFile* NewFile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadOnlyBool();
    
    UFUNCTION(BlueprintCallable)
    void IsReadOnly(ELowEntryFileManagerYesNo& Branch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmptyBool();
    
    UFUNCTION(BlueprintCallable)
    void IsEmpty(ELowEntryFileManagerYesNo& Branch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetTimestamp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULowEntryFileManagerDirectory* GetParentDirectory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetNameWithoutExtension() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetExtension() const;
    
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetAccessTimestamp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAbsolutePath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExistsBool();
    
    UFUNCTION(BlueprintCallable)
    void Exists(ELowEntryFileManagerYesNo& Branch);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteAsync(const FString& Parameters, bool& Success, int32& ProcessID, const bool Hidden, const int32 Priority, ULowEntryFileManagerDirectory* OptionalWorkingDirectory);
    
    UFUNCTION(BlueprintCallable)
    void Execute(const FString& Parameters, bool& Success, int32& ReturnCode, FString& StdOut, FString& StdErr);
    
    UFUNCTION(BlueprintCallable)
    void Delete();
    
    UFUNCTION(BlueprintCallable)
    void Create();
    
    UFUNCTION(BlueprintCallable)
    void CopyTo(ULowEntryFileManagerFile* NewFile);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UFUNCTION(BlueprintCallable)
    void AppendData(const TArray<uint8>& Data);
    
};

