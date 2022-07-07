#include "LowEntryFileManagerFile.h"

class ULowEntryFileManagerFile;
class ULowEntryFileManagerDirectory;

int32 ULowEntryFileManagerFile::Size() {
    return 0;
}

void ULowEntryFileManagerFile::SetTimestamp(const FDateTime& Timestamp) {
}

void ULowEntryFileManagerFile::SetReadOnly(const bool ReadOnly) {
}

void ULowEntryFileManagerFile::SetData(const TArray<uint8>& Data) {
}

void ULowEntryFileManagerFile::MoveTo(ULowEntryFileManagerFile* NewFile) {
}

bool ULowEntryFileManagerFile::IsReadOnlyBool() {
    return false;
}

void ULowEntryFileManagerFile::IsReadOnly(ELowEntryFileManagerYesNo& Branch) {
}

bool ULowEntryFileManagerFile::IsEmptyBool() {
    return false;
}

void ULowEntryFileManagerFile::IsEmpty(ELowEntryFileManagerYesNo& Branch) {
}

FDateTime ULowEntryFileManagerFile::GetTimestamp() {
    return FDateTime{};
}

FString ULowEntryFileManagerFile::GetPath() const {
    return TEXT("");
}

ULowEntryFileManagerDirectory* ULowEntryFileManagerFile::GetParentDirectory() {
    return NULL;
}

FString ULowEntryFileManagerFile::GetNameWithoutExtension() const {
    return TEXT("");
}

FString ULowEntryFileManagerFile::GetName() const {
    return TEXT("");
}

FString ULowEntryFileManagerFile::GetExtension() const {
    return TEXT("");
}

TArray<uint8> ULowEntryFileManagerFile::GetData() {
    return TArray<uint8>();
}

FDateTime ULowEntryFileManagerFile::GetAccessTimestamp() {
    return FDateTime{};
}

FString ULowEntryFileManagerFile::GetAbsolutePath() const {
    return TEXT("");
}

bool ULowEntryFileManagerFile::ExistsBool() {
    return false;
}

void ULowEntryFileManagerFile::Exists(ELowEntryFileManagerYesNo& Branch) {
}

void ULowEntryFileManagerFile::ExecuteAsync(const FString& Parameters, bool& Success, int32& ProcessID, const bool Hidden, const int32 Priority, ULowEntryFileManagerDirectory* OptionalWorkingDirectory) {
}

void ULowEntryFileManagerFile::Execute(const FString& Parameters, bool& Success, int32& ReturnCode, FString& StdOut, FString& StdErr) {
}

void ULowEntryFileManagerFile::Delete() {
}

void ULowEntryFileManagerFile::Create() {
}

void ULowEntryFileManagerFile::CopyTo(ULowEntryFileManagerFile* NewFile) {
}

void ULowEntryFileManagerFile::Clear() {
}

void ULowEntryFileManagerFile::AppendData(const TArray<uint8>& Data) {
}

ULowEntryFileManagerFile::ULowEntryFileManagerFile() {
}

