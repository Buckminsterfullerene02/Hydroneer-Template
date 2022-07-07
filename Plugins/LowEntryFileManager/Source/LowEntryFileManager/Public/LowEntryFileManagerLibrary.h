#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "ELowEntryFileManagerYesNo.h"
#include "LowEntryFileManagerLibrary.generated.h"

class ULowEntryFileManagerDirectory;

UCLASS(Blueprintable)
class LOWENTRYFILEMANAGER_API ULowEntryFileManagerLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULowEntryFileManagerLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void SplitPath(const FString& Path, FString& PathPart, FString& NamePart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void SplitName(const FString& Name, FString& NamePart, FString& ExtensionPart);
    
    UFUNCTION(BlueprintCallable)
    static void SetFileTimestamp(const FString& File, const FDateTime& Timestamp);
    
    UFUNCTION(BlueprintCallable)
    static void SetFileReadOnly(const FString& File, const bool ReadOnly);
    
    UFUNCTION(BlueprintCallable)
    static void SetFileData(const FString& File, const TArray<uint8>& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReplaceInvalidPathCharacters(const FString& String, const FString& ReplacementCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReplaceInvalidFilenameCharacters(const FString& String, const FString& ReplacementCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReplaceBackslashesBySlashes(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString RemoveInvalidPathCharacters(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString RemoveInvalidFilenameCharacters(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString RelativeToAbsolutePath(const FString& RelativePath);
    
    UFUNCTION(BlueprintCallable)
    static void MoveFile(const FString& File, const FString& to);
    
    UFUNCTION(BlueprintCallable)
    static void MoveDirectory(const FString& Directory, const FString& to, bool OverrideExistingFiles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFileReadOnlyBool(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    static void IsFileReadOnly(const FString& File, ELowEntryFileManagerYesNo& Branch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFileEmptyBool(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    static void IsFileEmpty(const FString& File, ELowEntryFileManagerYesNo& Branch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDirectoryEmptyBool(const FString& Directory);
    
    UFUNCTION(BlueprintCallable)
    static void IsDirectoryEmpty(const FString& Directory, ELowEntryFileManagerYesNo& Branch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasDiskPathsBool();
    
    UFUNCTION(BlueprintCallable)
    static void HasDiskPaths(ELowEntryFileManagerYesNo& Branch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRootDirPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULowEntryFileManagerDirectory* GetRoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectFilePath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameUserDirPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameSavedDirPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGamePersistentDownloadDirPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameDirPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetFileTimestamp(const FString& File);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFileSize(const FString& File);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetFiles(const FString& Directory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetFileNames(const FString& Directory);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> GetFileData(const FString& File);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetFileAccessTimestamp(const FString& File);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetEngineSavedDirPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetEngineDirPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ULowEntryFileManagerDirectory*> GetDisks();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetDiskPaths();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetDirectoryNames(const FString& Directory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULowEntryFileManagerDirectory* GetDirectory(const FString& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetDirectories(const FString& Directory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCloudDirPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULowEntryFileManagerDirectory* GetAbsoluteRoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FileExistsBool(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    static void FileExists(const FString& File, ELowEntryFileManagerYesNo& Branch);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteFileAsync(const FString& File, const FString& Parameters, bool& Success, int32& ProcessID, const bool Hidden, const int32 Priority, const FString& OptionalWorkingDirectory);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteFile(const FString& File, const FString& Parameters, bool& Success, int32& ReturnCode, FString& StdOut, FString& StdErr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DirectoryExistsBool(const FString& Directory);
    
    UFUNCTION(BlueprintCallable)
    static void DirectoryExists(const FString& Directory, ELowEntryFileManagerYesNo& Branch);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteFile(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteDirectory(const FString& Directory);
    
    UFUNCTION(BlueprintCallable)
    static void CreateParentDirectory(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static void CreateNewFile(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    static void CreateNewDirectory(const FString& Directory);
    
    UFUNCTION(BlueprintCallable)
    static void CopyFile(const FString& File, const FString& to);
    
    UFUNCTION(BlueprintCallable)
    static void CopyDirectory(const FString& Directory, const FString& to, bool OverrideExistingFiles);
    
    UFUNCTION(BlueprintCallable)
    static void ClearFile(const FString& File);
    
    UFUNCTION(BlueprintCallable)
    static void ClearDirectory(const FString& Directory);
    
    UFUNCTION(BlueprintCallable)
    static void AppendFileData(const FString& File, const TArray<uint8>& Data);
    
};

