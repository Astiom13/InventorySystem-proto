#include "Widgets/HUD/Inv_InfoMessage.h"

#include "Components/TextBlock.h"

void UInv_InfoMessage::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	Text_Message->SetText(FText::GetEmpty());
	HideMessage();
}

void UInv_InfoMessage::SetMessage(const FText& Message)
{
	Text_Message->SetText(Message);

	if (!bMessageActive)
	{
		ShowMessage();
	}
	bMessageActive = true;

	GetWorld()->GetTimerManager().SetTimer(MessageTimer, [this]()
	{
		HideMessage();
		bMessageActive = false;
	}, MessageLifeTime, false);
}
