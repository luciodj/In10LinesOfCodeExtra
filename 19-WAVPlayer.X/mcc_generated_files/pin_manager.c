/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pin_manager.c

  Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 3.15.0
        Device            :  PIC16F18855
        Driver Version    :  1.02
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.20

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

 */

#include <xc.h>
#include "pin_manager.h"
#include <stdbool.h>

void PIN_MANAGER_Initialize(void) {
    LATB = 0x4;
    WPUE = 0x0;
    LATA = 0x0;
    LATC = 0x1;
    WPUA = 0x0;
    WPUB = 0x0;
    WPUC = 0x0;
    ANSELA = 0;
    ANSELB = 0;
    ANSELC = 0;
    TRISB = 0xD3;
    TRISC = 0x5E;
    TRISA = 0xF0;

    bool state = GIE;
    GIE = 0;
    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x00; // unlock PPS

    T2AINPPSbits.T2AINPPS = 0x13; //RC3->TMR2:T2IN;
    RC0PPS = 0x10; //RC0->EUSART:TX;
    SSP1DATPPSbits.SSP1DATPPS = 0x0C; //RB4->MSSP1:SDI1;
    SSP1CLKPPSbits.SSP1CLKPPS = 0x0b; //RB3->MSSP1:SCK1;
    RXPPSbits.RXPPS = 0x11; //RC1->EUSART:RX;
    RB5PPS = 0x15; //RB5->MSSP1:SDO1;
    RB3PPS = 0x14; //RB3->MSSP1:SCK1;
    RC5PPS = 0x06; //RC5->CWG1:CWG1B;
    RC7PPS = 0x0F; //RC7->PWM7:PWM7OUT;
    CWG1PPSbits.CWG1PPS = 0x08; //RB0->CWG1:CWG1IN;

    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x01; // lock PPS

    GIE = state;

}

void PIN_MANAGER_IOC(void) {
}

/**
 End of File
 */
