#pragma once
#include "CoreMinimal.h"
#include "BoolCVarChangedSignatureDelegate.h"
#include "FloatCVarChangedSignatureDelegate.h"
#include "AutoSettingData.h"
#include "Subsystems/EngineSubsystem.h"
#include "OnSettingSavedDelegate.h"
#include "StringCVarChangedSignatureDelegate.h"
#include "IntCVarChangedSignatureDelegate.h"
#include "SettingsManager.generated.h"

UCLASS(Blueprintable)
class AUTOSETTINGS_API USettingsManager : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingSaved OnSettingSaved;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IniFilename;
    
public:
    USettingsManager();
    UFUNCTION(BlueprintCallable)
    static void SaveSettingStatic(FAutoSettingData SettingData);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterStringCVarSettingWithCallback(FName Name, const FString& DefaultValue, const FString& Help, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterStringCVarSetting(FName Name, const FString& DefaultValue, const FString& Help);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterIntCVarSettingWithCallback(FName Name, int32 DefaultValue, const FString& Help, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterIntCVarSetting(FName Name, int32 DefaultValue, const FString& Help);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterFloatCVarSettingWithCallback(FName Name, float DefaultValue, const FString& Help, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterFloatCVarSetting(FName Name, float DefaultValue, const FString& Help);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterBoolCVarSettingWithCallback(FName Name, bool DefaultValue, const FString& Help, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterBoolCVarSetting(FName Name, bool DefaultValue, const FString& Help);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetValue(FName Key, bool bPreferConfigValue);
    
    UFUNCTION(BlueprintCallable)
    static void AutoDetectSettingsStatic(int32 WorkScale, float CPUMultiplier, float GPUMultiplier);
    
    UFUNCTION(BlueprintCallable)
    static void ApplySettingStatic(FAutoSettingData SettingData);
    
};

