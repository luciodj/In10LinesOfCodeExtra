/**
    Hello Blue

    File Name:
        main.c

    Device            :  PIC16F18855
    Compiler          :  XC8 v1.37
    MPLAB             :  MPLAB X 3.35
*/

#include "mcc_generated_files/mcc.h"

void RN41_Initialize( void)
{
    __delay_ms( 500);
    puts( "$$$");   // enter cmd mode
    __delay_ms( 500);
    puts( "SO,%");  // enable connection notifications with escape "%"
    __delay_ms( 500);
    puts( "R,1");   // reboot to make changes effective
    __delay_ms( 500);
}


void main(void)
{
    bool connected = false;
    char c;

    // initialize the device
    SYSTEM_Initialize();
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();

    // configure the RN41 BL module
    RN41_Initialize();      // set escape and enable notifications

    while (1)
    {
        LED0_LAT = connected;               // report status

        if ( EUSART_DataReady)
        {
            c = getch();
            // detect a notification from the escape '%'
            if ('%' == c)
            {
                c = getch();                // %Connected - %Disconnected
                connected = (c == 'C');     // toggle status accordingly
            }
        }

        if ( connected)
        {
            if ( !SW1_GetValue())           // check if button pressed
                puts( "Hello Bluetooth!");
        }
    }
}
