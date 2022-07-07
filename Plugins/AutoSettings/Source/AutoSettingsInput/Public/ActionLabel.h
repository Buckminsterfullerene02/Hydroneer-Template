#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InputLabel.h"
#include "ActionLabel.generated.h"

class UKeyLabel;
class UWidget;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUTOSETTINGSINPUT_API UActionLabel : public UInputLabel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKeyLabel> KeyLabelWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidget> KeySeparatorWidgetClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPanelWidget* KeyContainer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UKeyLabel* PrimaryKeyLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UKeyLabel* ShiftLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UKeyLabel* CtrlLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UKeyLabel* AltLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UKeyLabel* CmdLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidget* ShiftSeparator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidget* CtrlSeparator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidget* AltSeparator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidget* CmdSeparator;
    
public:
    UActionLabel();
};

