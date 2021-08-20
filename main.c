
#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    
    SYSTEM_Initialize();

    INTERRUPT_GlobalInterruptEnable();

    
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1)
    {
        // Add your application code
    }
}
/**
 End of File
*/