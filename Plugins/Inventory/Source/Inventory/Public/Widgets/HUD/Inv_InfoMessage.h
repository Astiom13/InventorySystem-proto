#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Inv_InfoMessage.generated.h"

class UTextBlock;
/**
 * 
 */
UCLASS()
class INVENTORY_API UInv_InfoMessage : public UUserWidget
{
	GENERATED_BODY()


public:
	virtual void NativeOnInitialized() override;
	

	UFUNCTION(blueprintImplementableEvent, Category = "Inventory")
	void ShowMessage();

	UFUNCTION(BlueprintImplementableEvent, Category = "Inventory")
	void HideMessage();

	void SetMessage(const FText& Message);

private:
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Text_Message;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	float MessageLifeTime{3.f};

	FTimerHandle MessageTimer;
	bool bMessageActive{false};
};
