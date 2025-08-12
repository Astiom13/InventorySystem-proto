#include "Widgets/Composite/Inv_CompositeBase.h"

void UInv_CompositeBase::Collapsed()
{
	SetVisibility(ESlateVisibility::Collapsed);
}

void UInv_CompositeBase::Expand()
{
	SetVisibility(ESlateVisibility::Visible);
}
