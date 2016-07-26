/**
  Project: 
    BLE-Battery indicator

  File Name:
    main.c

  Description:
    Device            :  PIC16F18855
    Compiler          :  XC8 1.35
    MPLAB             :  MPLAB X 3.20
 */

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
 */

#include "mcc_generated_files/mcc.h"

#define cmdDELAY        2       // 1 x TMR2 (+1 synchronization period) 64ms
#define cmdLONGDELAY    640     // 640ms

char rxBuffer[32];

void mygets( void)
{
    char c, i=0;
    char *p = rxBuffer;
    while ( (i++ < sizeof(rxBuffer)) && (( c = getch()) != '\n')) {
        *p++ = c;
    }
    *p = '\0';
}

void sendCMD( const char * cmd)
{
    puts( cmd); mygets(); 
}

void main(void) 
{
    SYSTEM_Initialize();
    INTERRUPT_PeripheralInterruptEnable();
    INTERRUPT_GlobalInterruptEnable();
            
    // initialize BLE module
    SWAKE_SetHigh();            // enter command mode
    mygets();
    sendCMD( "SF,1");           // factory reset
    sendCMD( "SS,C0000000");    // enable DeviceInformation and battery services
    sendCMD( "SR,00000000");    // act as a peripheral
    sendCMD( "S-,Xpress");      // change name
    sendCMD( "R,1");            // reboot with new settings
    mygets();
    __delay_ms( cmdLONGDELAY);  // wait for CMD prompt
    sendCMD( "A");              // start advertising
    while( !CONN_GetValue());   // wait for a connection

    // main loop
    while (1) {
        uint8_t time;
        if ( TMR2_HasOverflowOccured()) { // time is measured in multiples of TMR2 period (4ms)
            time++;
        }
    
        if ( time >= 50)   // 200ms
        {  
            uint8_t battery =  ADCC_GetSingleConversion(POT)>>9;
            time = 0;
            printf( "SHW,0018,%02x\n", (battery>100)? 100: battery); // update the battery level property
            mygets();          
        }
    }
}

/**
 End of File
 */