#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "SelectSetting.h"
#include "ComboBoxSetting.generated.h"

class UComboBoxString;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGS_API UComboBoxSetting : public USelectSetting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UComboBoxString* ComboBox;
    
public:
    UComboBoxSetting();
private:
    UFUNCTION()
    void ComboBoxSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
};

