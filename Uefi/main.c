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
    Print(L"Text before clearing the screen\r\n");
    gBS->Stall(3000000);
    
    EFI_STATUS Status;
    Status = SystemTable->ConOut->ClearScreen(SystemTable->ConOut);
    if(EFI_ERROR(Status))
    {
        return Status;
    }
    Print(L"After cleaning screen!\r\n");
    gBS->Stall(3000000);
    return EFI_SUCCESS;

    
}