#include "LowEntryFileManagerDirectory.h"

class ULowEntryFileManagerDirectory;
class ULowEntryFileManagerFile;

void ULowEntryFileManagerDirectory::MoveTo(ULowEntryFileManagerDirectory* NewDirectory, const bool OverrideExistingFiles) {
}

bool ULowEntryFileManagerDirectory::IsRootBool() {
    return false;
}

void ULowEntryFileManagerDirectory::IsRoot(ELowEntryFileManagerYesNo& Branch) {
}

bool ULowEntryFileManagerDirectory::IsEmptyBool() {
    return false;
}

void ULowEntryFileManagerDirectory::IsEmpty(ELowEntryFileManagerYesNo& Branch) {
}

FString ULowEntryFileManagerDirectory::GetPath() const {
    return TEXT("");
}

ULowEntryFileManagerDirectory* ULowEntryFileManagerDirectory::GetParentDirectory() {
    return NULL;
}

FString ULowEntryFileManagerDirectory::GetName() const {
    return TEXT("");
}

TArray<ULowEntryFileManagerFile*> ULowEntryFileManagerDirectory::GetFiles() {
    return TArray<ULowEntryFileManagerFile*>();
}

ULowEntryFileManagerFile* ULowEntryFileManagerDirectory::GetFile(const FString& File) {
    return NULL;
}

ULowEntryFileManagerDirectory* ULowEntryFileManagerDirectory::GetDirectory(const FString& Directory_) {
    return NULL;
}

TArray<ULowEntryFileManagerDirectory*> ULowEntryFileManagerDirectory::GetDirectories() {
    return TArray<ULowEntryFileManagerDirectory*>();
}

FString ULowEntryFileManagerDirectory::GetAbsolutePath() const {
    return TEXT("");
}

bool ULowEntryFileManagerDirectory::ExistsBool() {
    return false;
}

void ULowEntryFileManagerDirectory::Exists(ELowEntryFileManagerYesNo& Branch) {
}

void ULowEntryFileManagerDirectory::Delete() {
}

void ULowEntryFileManagerDirectory::Create() {
}

void ULowEntryFileManagerDirectory::CopyTo(ULowEntryFileManagerDirectory* NewDirectory, const bool OverrideExistingFiles) {
}

void ULowEntryFileManagerDirectory::Clear() {
}

ULowEntryFileManagerDirectory::ULowEntryFileManagerDirectory() {
    this->bIsRoot = false;
}

