#include "Inventory.h"

#define LOCTEXT_NAMESPACE "FInventoryModule"

DEFINE_LOG_CATEGORY(LogInventory);

void FInventoryModule::StartupModule()
{
	
}

void FInventoryModule::ShutdownModule()
{
	
}

#undef LOCTEXT_NAMESPACE

#if PLATFORM_MAC
IMPLEMENT_MODULE(FInventoryModule, Inventory)
#endif
