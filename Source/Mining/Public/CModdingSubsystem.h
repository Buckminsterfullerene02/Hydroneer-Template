#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "PublishedFileID.h"
#include "CModdingSubsystem.generated.h"

class UCModdingSubsystem;

UCLASS(Blueprintable)
class MINING_API UCModdingSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UCModdingSubsystem();
    UFUNCTION(BlueprintCallable)
    static void UnloadMod(const FString& ModName);
    
    UFUNCTION(BlueprintCallable)
    static void UninstallUnsubscribedMods();
    
    UFUNCTION(BlueprintCallable)
    static void LoadMod(const FString& ModName);
    
    UFUNCTION(BlueprintCallable)
    static void InstallAllPending();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCModdingSubsystem* GetModdingSubsystem();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetLoadedMods();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetInstalledMods();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FPublishedFileID> GetAllSubscribedMods();
    
};

