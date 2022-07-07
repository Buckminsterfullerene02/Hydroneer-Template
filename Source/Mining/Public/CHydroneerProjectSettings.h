#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "CHydroneerProjectSettings.generated.h"

class UCHydroneerProjectSettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class MINING_API UCHydroneerProjectSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugMainMenu;
    
    UCHydroneerProjectSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCHydroneerProjectSettings* Get();
    
};

