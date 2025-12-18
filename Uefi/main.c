#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/UefiBootServicesTableLib.h>

EFI_STATUS
EFIAPI
UefiMain(
	IN EFI_HANDLE ImageHandle,
	IN EFI_SYSTEM_TABLE *SystemTable
)
{
	Print(L"Hello UEFI!\r\n");
	
	gBS->Stall(4 * 1000 * 1000);
	return EFI_SUCCESS;
}
