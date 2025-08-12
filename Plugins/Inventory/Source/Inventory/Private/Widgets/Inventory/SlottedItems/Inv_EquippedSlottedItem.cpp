#include "Widgets/Inventory/SlottedItems/Inv_EquippedSlottedItem.h"

FReply UInv_EquippedSlottedItem::NativeOnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	OnEquippedSlottedItemClicked.Broadcast(this);
	return FReply::Handled();
}
