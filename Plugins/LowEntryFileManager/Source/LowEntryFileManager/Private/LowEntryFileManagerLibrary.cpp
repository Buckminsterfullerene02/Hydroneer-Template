#include "LowEntryFileManagerLibrary.h"

class ULowEntryFileManagerDirectory;

void ULowEntryFileManagerLibrary::SplitPath(const FString& Path, FString& PathPart, FString& NamePart) {
}

void ULowEntryFileManagerLibrary::SplitName(const FString& Name, FString& NamePart, FString& ExtensionPart) {
}

void ULowEntryFileManagerLibrary::SetFileTimestamp(const FString& File, const FDateTime& Timestamp) {
}

void ULowEntryFileManagerLibrary::SetFileReadOnly(const FString& File, const bool ReadOnly) {
}

void ULowEntryFileManagerLibrary::SetFileData(const FString& File, const TArray<uint8>& Data) {
}

FString ULowEntryFileManagerLibrary::ReplaceInvalidPathCharacters(const FString& String, const FString& ReplacementCharacter) {
    return TEXT("");
}

FString ULowEntryFileManagerLibrary::ReplaceInvalidFilenameCharacters(const FString& String, const FString& ReplacementCharacter) {
    return TEXT("");
}

FString ULowEntryFileManagerLibrary::ReplaceBackslashesBySlashes(const FString& String) {
    return TEXT("");
}

FString ULowEntryFileManagerLibrary::RemoveInvalidPathCharacters(const FString& String) {
    return TEXT("");
}

FString ULowEntryFileManagerLibrary::RemoveInvalidFilenameCharacters(const FString& String) {
    return TEXT("");
}

FString ULowEntryFileManagerLibrary::RelativeToAbsolutePath(const FString& RelativePath) {
    return TEXT("");
}

void ULowEntryFileManagerLibrary::MoveFile(const FString& File, const FString& to) {
}

void ULowEntryFileManagerLibrary::MoveDirectory(const FString& Directory, const FString& to, bool OverrideExistingFiles) {
}

bool ULowEntryFileManagerLibrary::IsFileReadOnlyBool(const FString& File) {
    return false;
}

void ULowEntryFileManagerLibrary::IsFileReadOnly(const FString& File, ELowEntryFileManagerYesNo& Branch) {
}

bool ULowEntryFileManagerLibrary::IsFileEmptyBool(const FString& File) {
    return false;
}

void ULowEntryFileManagerLibrary::IsFileEmpty(const FString& File, ELowEntryFileManagerYesNo& Branch) {
}

bool ULowEntryFileManagerLibrary::IsDirectoryEmptyBool(const FString& Directory) {
    return false;
}

void ULowEntryFileManagerLibrary::IsDirectoryEmpty(const FString& Directory, ELowEntryFileManagerYesNo& Branch) {
}

bool ULowEntryFileManagerLibrary::HasDiskPathsBool() {
    return false;
}

void ULowEntryFileManagerLibrary::HasDiskPaths(ELowEntryFileManagerYesNo& Branch) {
}

FString ULowEntryFileManagerLibrary::GetRootDirPath() {
    return TEXT("");
}

ULowEntryFileManagerDirectory* ULowEntryFileManagerLibrary::GetRoot() {
    return NULL;
}

FString ULowEntryFileManagerLibrary::GetProjectFilePath() {
    return TEXT("");
}

FString ULowEntryFileManagerLibrary::GetGameUserDirPath() {
    return TEXT("");
}

FString ULowEntryFileManagerLibrary::GetGameSavedDirPath() {
    return TEXT("");
}

FString ULowEntryFileManagerLibrary::GetGamePersistentDownloadDirPath() {
    return TEXT("");
}

FString ULowEntryFileManagerLibrary::GetGameDirPath() {
    return TEXT("");
}

FDateTime ULowEntryFileManagerLibrary::GetFileTimestamp(const FString& File) {
    return FDateTime{};
}

int32 ULowEntryFileManagerLibrary::GetFileSize(const FString& File) {
    return 0;
}

TArray<FString> ULowEntryFileManagerLibrary::GetFiles(const FString& Directory) {
    return TArray<FString>();
}

TArray<FString> ULowEntryFileManagerLibrary::GetFileNames(const FString& Directory) {
    return TArray<FString>();
}

TArray<uint8> ULowEntryFileManagerLibrary::GetFileData(const FString& File) {
    return TArray<uint8>();
}

FDateTime ULowEntryFileManagerLibrary::GetFileAccessTimestamp(const FString& File) {
    return FDateTime{};
}

FString ULowEntryFileManagerLibrary::GetEngineSavedDirPath() {
    return TEXT("");
}

FString ULowEntryFileManagerLibrary::GetEngineDirPath() {
    return TEXT("");
}

TArray<ULowEntryFileManagerDirectory*> ULowEntryFileManagerLibrary::GetDisks() {
    return TArray<ULowEntryFileManagerDirectory*>();
}

TArray<FString> ULowEntryFileManagerLibrary::GetDiskPaths() {
    return TArray<FString>();
}

TArray<FString> ULowEntryFileManagerLibrary::GetDirectoryNames(const FString& Directory) {
    return TArray<FString>();
}

ULowEntryFileManagerDirectory* ULowEntryFileManagerLibrary::GetDirectory(const FString& Path) {
    return NULL;
}

TArray<FString> ULowEntryFileManagerLibrary::GetDirectories(const FString& Directory) {
    return TArray<FString>();
}

FString ULowEntryFileManagerLibrary::GetCloudDirPath() {
    return TEXT("");
}

ULowEntryFileManagerDirectory* ULowEntryFileManagerLibrary::GetAbsoluteRoot() {
    return NULL;
}

bool ULowEntryFileManagerLibrary::FileExistsBool(const FString& File) {
    return false;
}

void ULowEntryFileManagerLibrary::FileExists(const FString& File, ELowEntryFileManagerYesNo& Branch) {
}

void ULowEntryFileManagerLibrary::ExecuteFileAsync(const FString& File, const FString& Parameters, bool& Success, int32& ProcessID, const bool Hidden, const int32 Priority, const FString& OptionalWorkingDirectory) {
}

void ULowEntryFileManagerLibrary::ExecuteFile(const FString& File, const FString& Parameters, bool& Success, int32& ReturnCode, FString& StdOut, FString& StdErr) {
}

bool ULowEntryFileManagerLibrary::DirectoryExistsBool(const FString& Directory) {
    return false;
}

void ULowEntryFileManagerLibrary::DirectoryExists(const FString& Directory, ELowEntryFileManagerYesNo& Branch) {
}

void ULowEntryFileManagerLibrary::DeleteFile(const FString& File) {
}

void ULowEntryFileManagerLibrary::DeleteDirectory(const FString& Directory) {
}

void ULowEntryFileManagerLibrary::CreateParentDirectory(const FString& Path) {
}

void ULowEntryFileManagerLibrary::CreateNewFile(const FString& File) {
}

void ULowEntryFileManagerLibrary::CreateNewDirectory(const FString& Directory) {
}

void ULowEntryFileManagerLibrary::CopyFile(const FString& File, const FString& to) {
}

void ULowEntryFileManagerLibrary::CopyDirectory(const FString& Directory, const FString& to, bool OverrideExistingFiles) {
}

void ULowEntryFileManagerLibrary::ClearFile(const FString& File) {
}

void ULowEntryFileManagerLibrary::ClearDirectory(const FString& Directory) {
}

void ULowEntryFileManagerLibrary::AppendFileData(const FString& File, const TArray<uint8>& Data) {
}

ULowEntryFileManagerLibrary::ULowEntryFileManagerLibrary() {
}

