#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Inv_SlottedItem.h"
#include "Inv_EquippedSlottedItem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEquippedSlottedItemClicked, UInv_EquippedSlottedItem*, SlottedItem);

UCLASS()
class INVENTORY_API UInv_EquippedSlottedItem : public UInv_SlottedItem
{
	GENERATED_BODY()


public:
	virtual FReply NativeOnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	
	void SetEquipmentTypeTag(const FGameplayTag& Tag) { EquippedTypeTag = Tag; }
	FGameplayTag GetEquippedTypeTag() const { return EquippedTypeTag; }

	FEquippedSlottedItemClicked OnEquippedSlottedItemClicked;
private:

	UPROPERTY()
	FGameplayTag EquippedTypeTag;
};
