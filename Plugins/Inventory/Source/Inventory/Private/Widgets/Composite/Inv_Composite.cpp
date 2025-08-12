#include "Widgets/Composite/Inv_Composite.h"
#include "Blueprint/WidgetTree.h"

void UInv_Composite::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	WidgetTree->ForEachWidget([this](UWidget* Widget)
	{
		if (UInv_CompositeBase* Composite = Cast<UInv_CompositeBase>(Widget); IsValid(Composite))
		{
			Children.Add(Composite);
			Composite->Collapsed();
		}
	});
}

void UInv_Composite::ApplyFunction(FuncType Function)
{
	Super::ApplyFunction(Function);

	for (auto& Child : Children)
	{
		Child->ApplyFunction(Function);
	}
}

void UInv_Composite::Collapsed()
{
	for (auto& Child : Children)
	{
		Child->Collapsed();
	}
}
