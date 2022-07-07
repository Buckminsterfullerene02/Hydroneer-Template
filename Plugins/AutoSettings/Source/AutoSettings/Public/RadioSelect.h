#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SettingOption.h"
#include "Blueprint/UserWidget.h"
#include "RadioSelectedSignatureDelegate.h"
#include "RadioSelect.generated.h"

class URadioButton;
class UPanelWidget;
class UPanelSlot;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGS_API URadioSelect : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSettingOption> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<URadioButton> RadioButtonClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadioSelectedSignature SelectionChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPanelWidget* ButtonContainer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<URadioButton*> RadioButtons;
    
public:
    URadioSelect();
    UFUNCTION(BlueprintCallable)
    void SetOptions(TArray<FSettingOption> InOptions);
    
    UFUNCTION(BlueprintCallable)
    void Select(const FString& Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnButtonCreated(URadioButton* Button, UPanelSlot* NewSlot);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URadioButton*> GetRadioButtonWidgets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSettingOption> GetOptions() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ButtonSelected(const FString& Value);
    
};

