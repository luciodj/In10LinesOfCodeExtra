/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 3.15.0
        Device            :  PIC16F18855
        Version           :  1.01
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


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define IO_RA0_TRIS               TRISA0
#define IO_RA0_LAT                LATA0
#define IO_RA0_PORT               RA0
#define IO_RA0_WPU                WPUA0
#define IO_RA0_ANS                ANSA0
#define IO_RA0_SetHigh()    do { LATA0 = 1; } while(0)
#define IO_RA0_SetLow()   do { LATA0 = 0; } while(0)
#define IO_RA0_Toggle()   do { LATA0 = ~LATA0; } while(0)
#define IO_RA0_GetValue()         PORTAbits.RA0
#define IO_RA0_SetDigitalInput()    do { TRISA0 = 1; } while(0)
#define IO_RA0_SetDigitalOutput()   do { TRISA0 = 0; } while(0)

#define IO_RA0_SetPullup()    do { WPUA0 = 1; } while(0)
#define IO_RA0_ResetPullup()   do { WPUA0 = 0; } while(0)
#define IO_RA0_SetAnalogMode()   do { ANSA0 = 1; } while(0)
#define IO_RA0_SetDigitalMode()   do { ANSA0 = 0; } while(0)


// get/set IO_RA1 aliases
#define IO_RA1_TRIS               TRISA1
#define IO_RA1_LAT                LATA1
#define IO_RA1_PORT               RA1
#define IO_RA1_WPU                WPUA1
#define IO_RA1_ANS                ANSA1
#define IO_RA1_SetHigh()    do { LATA1 = 1; } while(0)
#define IO_RA1_SetLow()   do { LATA1 = 0; } while(0)
#define IO_RA1_Toggle()   do { LATA1 = ~LATA1; } while(0)
#define IO_RA1_GetValue()         PORTAbits.RA1
#define IO_RA1_SetDigitalInput()    do { TRISA1 = 1; } while(0)
#define IO_RA1_SetDigitalOutput()   do { TRISA1 = 0; } while(0)

#define IO_RA1_SetPullup()    do { WPUA1 = 1; } while(0)
#define IO_RA1_ResetPullup()   do { WPUA1 = 0; } while(0)
#define IO_RA1_SetAnalogMode()   do { ANSA1 = 1; } while(0)
#define IO_RA1_SetDigitalMode()   do { ANSA1 = 0; } while(0)


// get/set IO_RA2 aliases
#define IO_RA2_TRIS               TRISA2
#define IO_RA2_LAT                LATA2
#define IO_RA2_PORT               RA2
#define IO_RA2_WPU                WPUA2
#define IO_RA2_ANS                ANSA2
#define IO_RA2_SetHigh()    do { LATA2 = 1; } while(0)
#define IO_RA2_SetLow()   do { LATA2 = 0; } while(0)
#define IO_RA2_Toggle()   do { LATA2 = ~LATA2; } while(0)
#define IO_RA2_GetValue()         PORTAbits.RA2
#define IO_RA2_SetDigitalInput()    do { TRISA2 = 1; } while(0)
#define IO_RA2_SetDigitalOutput()   do { TRISA2 = 0; } while(0)

#define IO_RA2_SetPullup()    do { WPUA2 = 1; } while(0)
#define IO_RA2_ResetPullup()   do { WPUA2 = 0; } while(0)
#define IO_RA2_SetAnalogMode()   do { ANSA2 = 1; } while(0)
#define IO_RA2_SetDigitalMode()   do { ANSA2 = 0; } while(0)


// get/set IO_RA3 aliases
#define IO_RA3_TRIS               TRISA3
#define IO_RA3_LAT                LATA3
#define IO_RA3_PORT               RA3
#define IO_RA3_WPU                WPUA3
#define IO_RA3_ANS                ANSA3
#define IO_RA3_SetHigh()    do { LATA3 = 1; } while(0)
#define IO_RA3_SetLow()   do { LATA3 = 0; } while(0)
#define IO_RA3_Toggle()   do { LATA3 = ~LATA3; } while(0)
#define IO_RA3_GetValue()         PORTAbits.RA3
#define IO_RA3_SetDigitalInput()    do { TRISA3 = 1; } while(0)
#define IO_RA3_SetDigitalOutput()   do { TRISA3 = 0; } while(0)

#define IO_RA3_SetPullup()    do { WPUA3 = 1; } while(0)
#define IO_RA3_ResetPullup()   do { WPUA3 = 0; } while(0)
#define IO_RA3_SetAnalogMode()   do { ANSA3 = 1; } while(0)
#define IO_RA3_SetDigitalMode()   do { ANSA3 = 0; } while(0)


// get/set IO_RA3 aliases
#define IO_RA3_TRIS               TRISA3
#define IO_RA3_LAT                LATA3
#define IO_RA3_PORT               RA3
#define IO_RA3_WPU                WPUA3
#define IO_RA3_ANS                ANSA3
#define IO_RA3_SetHigh()    do { LATA3 = 1; } while(0)
#define IO_RA3_SetLow()   do { LATA3 = 0; } while(0)
#define IO_RA3_Toggle()   do { LATA3 = ~LATA3; } while(0)
#define IO_RA3_GetValue()         PORTAbits.RA3
#define IO_RA3_SetDigitalInput()    do { TRISA3 = 1; } while(0)
#define IO_RA3_SetDigitalOutput()   do { TRISA3 = 0; } while(0)

#define IO_RA3_SetPullup()    do { WPUA3 = 1; } while(0)
#define IO_RA3_ResetPullup()   do { WPUA3 = 0; } while(0)
#define IO_RA3_SetAnalogMode()   do { ANSA3 = 1; } while(0)
#define IO_RA3_SetDigitalMode()   do { ANSA3 = 0; } while(0)


// get/set BTN aliases
#define BTN_TRIS               TRISA5
#define BTN_LAT                LATA5
#define BTN_PORT               RA5
#define BTN_WPU                WPUA5
#define BTN_ANS                ANSA5
#define BTN_SetHigh()    do { LATA5 = 1; } while(0)
#define BTN_SetLow()   do { LATA5 = 0; } while(0)
#define BTN_Toggle()   do { LATA5 = ~LATA5; } while(0)
#define BTN_GetValue()         PORTAbits.RA5
#define BTN_SetDigitalInput()    do { TRISA5 = 1; } while(0)
#define BTN_SetDigitalOutput()   do { TRISA5 = 0; } while(0)

#define BTN_SetPullup()    do { WPUA5 = 1; } while(0)
#define BTN_ResetPullup()   do { WPUA5 = 0; } while(0)
#define BTN_SetAnalogMode()   do { ANSA5 = 1; } while(0)
#define BTN_SetDigitalMode()   do { ANSA5 = 0; } while(0)


// get/set BTN aliases
#define BTN_TRIS               TRISA5
#define BTN_LAT                LATA5
#define BTN_PORT               RA5
#define BTN_WPU                WPUA5
#define BTN_ANS                ANSA5
#define BTN_SetHigh()    do { LATA5 = 1; } while(0)
#define BTN_SetLow()   do { LATA5 = 0; } while(0)
#define BTN_Toggle()   do { LATA5 = ~LATA5; } while(0)
#define BTN_GetValue()         PORTAbits.RA5
#define BTN_SetDigitalInput()    do { TRISA5 = 1; } while(0)
#define BTN_SetDigitalOutput()   do { TRISA5 = 0; } while(0)

#define BTN_SetPullup()    do { WPUA5 = 1; } while(0)
#define BTN_ResetPullup()   do { WPUA5 = 0; } while(0)
#define BTN_SetAnalogMode()   do { ANSA5 = 1; } while(0)
#define BTN_SetDigitalMode()   do { ANSA5 = 0; } while(0)


// get/set RST aliases
#define RST_TRIS               TRISB1
#define RST_LAT                LATB1
#define RST_PORT               RB1
#define RST_WPU                WPUB1
#define RST_ANS                ANSB1
#define RST_SetHigh()    do { LATB1 = 1; } while(0)
#define RST_SetLow()   do { LATB1 = 0; } while(0)
#define RST_Toggle()   do { LATB1 = ~LATB1; } while(0)
#define RST_GetValue()         PORTBbits.RB1
#define RST_SetDigitalInput()    do { TRISB1 = 1; } while(0)
#define RST_SetDigitalOutput()   do { TRISB1 = 0; } while(0)

#define RST_SetPullup()    do { WPUB1 = 1; } while(0)
#define RST_ResetPullup()   do { WPUB1 = 0; } while(0)
#define RST_SetAnalogMode()   do { ANSB1 = 1; } while(0)
#define RST_SetDigitalMode()   do { ANSB1 = 0; } while(0)


// get/set CS aliases
#define CS_TRIS               TRISB2
#define CS_LAT                LATB2
#define CS_PORT               RB2
#define CS_WPU                WPUB2
#define CS_ANS                ANSB2
#define CS_SetHigh()    do { LATB2 = 1; } while(0)
#define CS_SetLow()   do { LATB2 = 0; } while(0)
#define CS_Toggle()   do { LATB2 = ~LATB2; } while(0)
#define CS_GetValue()         PORTBbits.RB2
#define CS_SetDigitalInput()    do { TRISB2 = 1; } while(0)
#define CS_SetDigitalOutput()   do { TRISB2 = 0; } while(0)

#define CS_SetPullup()    do { WPUB2 = 1; } while(0)
#define CS_ResetPullup()   do { WPUB2 = 0; } while(0)
#define CS_SetAnalogMode()   do { ANSB2 = 1; } while(0)
#define CS_SetDigitalMode()   do { ANSB2 = 0; } while(0)


// get/set CS aliases
#define CS_TRIS               TRISB2
#define CS_LAT                LATB2
#define CS_PORT               RB2
#define CS_WPU                WPUB2
#define CS_ANS                ANSB2
#define CS_SetHigh()    do { LATB2 = 1; } while(0)
#define CS_SetLow()   do { LATB2 = 0; } while(0)
#define CS_Toggle()   do { LATB2 = ~LATB2; } while(0)
#define CS_GetValue()         PORTBbits.RB2
#define CS_SetDigitalInput()    do { TRISB2 = 1; } while(0)
#define CS_SetDigitalOutput()   do { TRISB2 = 0; } while(0)

#define CS_SetPullup()    do { WPUB2 = 1; } while(0)
#define CS_ResetPullup()   do { WPUB2 = 0; } while(0)
#define CS_SetAnalogMode()   do { ANSB2 = 1; } while(0)
#define CS_SetDigitalMode()   do { ANSB2 = 0; } while(0)


// get/set CS aliases
#define CS_TRIS               TRISB2
#define CS_LAT                LATB2
#define CS_PORT               RB2
#define CS_WPU                WPUB2
#define CS_ANS                ANSB2
#define CS_SetHigh()    do { LATB2 = 1; } while(0)
#define CS_SetLow()   do { LATB2 = 0; } while(0)
#define CS_Toggle()   do { LATB2 = ~LATB2; } while(0)
#define CS_GetValue()         PORTBbits.RB2
#define CS_SetDigitalInput()    do { TRISB2 = 1; } while(0)
#define CS_SetDigitalOutput()   do { TRISB2 = 0; } while(0)

#define CS_SetPullup()    do { WPUB2 = 1; } while(0)
#define CS_ResetPullup()   do { WPUB2 = 0; } while(0)
#define CS_SetAnalogMode()   do { ANSB2 = 1; } while(0)
#define CS_SetDigitalMode()   do { ANSB2 = 0; } while(0)


// get/set CS aliases
#define CS_TRIS               TRISB2
#define CS_LAT                LATB2
#define CS_PORT               RB2
#define CS_WPU                WPUB2
#define CS_ANS                ANSB2
#define CS_SetHigh()    do { LATB2 = 1; } while(0)
#define CS_SetLow()   do { LATB2 = 0; } while(0)
#define CS_Toggle()   do { LATB2 = ~LATB2; } while(0)
#define CS_GetValue()         PORTBbits.RB2
#define CS_SetDigitalInput()    do { TRISB2 = 1; } while(0)
#define CS_SetDigitalOutput()   do { TRISB2 = 0; } while(0)

#define CS_SetPullup()    do { WPUB2 = 1; } while(0)
#define CS_ResetPullup()   do { WPUB2 = 0; } while(0)
#define CS_SetAnalogMode()   do { ANSB2 = 1; } while(0)
#define CS_SetDigitalMode()   do { ANSB2 = 0; } while(0)


// get/set CS aliases
#define CS_TRIS               TRISB2
#define CS_LAT                LATB2
#define CS_PORT               RB2
#define CS_WPU                WPUB2
#define CS_ANS                ANSB2
#define CS_SetHigh()    do { LATB2 = 1; } while(0)
#define CS_SetLow()   do { LATB2 = 0; } while(0)
#define CS_Toggle()   do { LATB2 = ~LATB2; } while(0)
#define CS_GetValue()         PORTBbits.RB2
#define CS_SetDigitalInput()    do { TRISB2 = 1; } while(0)
#define CS_SetDigitalOutput()   do { TRISB2 = 0; } while(0)

#define CS_SetPullup()    do { WPUB2 = 1; } while(0)
#define CS_ResetPullup()   do { WPUB2 = 0; } while(0)
#define CS_SetAnalogMode()   do { ANSB2 = 1; } while(0)
#define CS_SetDigitalMode()   do { ANSB2 = 0; } while(0)


// get/set CS aliases
#define CS_TRIS               TRISB2
#define CS_LAT                LATB2
#define CS_PORT               RB2
#define CS_WPU                WPUB2
#define CS_ANS                ANSB2
#define CS_SetHigh()    do { LATB2 = 1; } while(0)
#define CS_SetLow()   do { LATB2 = 0; } while(0)
#define CS_Toggle()   do { LATB2 = ~LATB2; } while(0)
#define CS_GetValue()         PORTBbits.RB2
#define CS_SetDigitalInput()    do { TRISB2 = 1; } while(0)
#define CS_SetDigitalOutput()   do { TRISB2 = 0; } while(0)

#define CS_SetPullup()    do { WPUB2 = 1; } while(0)
#define CS_ResetPullup()   do { WPUB2 = 0; } while(0)
#define CS_SetAnalogMode()   do { ANSB2 = 1; } while(0)
#define CS_SetDigitalMode()   do { ANSB2 = 0; } while(0)


// get/set INT aliases
#define INT_TRIS               TRISC2
#define INT_LAT                LATC2
#define INT_PORT               RC2
#define INT_WPU                WPUC2
#define INT_ANS                ANSC2
#define INT_SetHigh()    do { LATC2 = 1; } while(0)
#define INT_SetLow()   do { LATC2 = 0; } while(0)
#define INT_Toggle()   do { LATC2 = ~LATC2; } while(0)
#define INT_GetValue()         PORTCbits.RC2
#define INT_SetDigitalInput()    do { TRISC2 = 1; } while(0)
#define INT_SetDigitalOutput()   do { TRISC2 = 0; } while(0)

#define INT_SetPullup()    do { WPUC2 = 1; } while(0)
#define INT_ResetPullup()   do { WPUC2 = 0; } while(0)
#define INT_SetAnalogMode()   do { ANSC2 = 1; } while(0)
#define INT_SetDigitalMode()   do { ANSC2 = 0; } while(0)


// get/set PWM aliases
#define PWM_TRIS               TRISC7
#define PWM_LAT                LATC7
#define PWM_PORT               RC7
#define PWM_WPU                WPUC7
#define PWM_ANS                ANSC7
#define PWM_SetHigh()    do { LATC7 = 1; } while(0)
#define PWM_SetLow()   do { LATC7 = 0; } while(0)
#define PWM_Toggle()   do { LATC7 = ~LATC7; } while(0)
#define PWM_GetValue()         PORTCbits.RC7
#define PWM_SetDigitalInput()    do { TRISC7 = 1; } while(0)
#define PWM_SetDigitalOutput()   do { TRISC7 = 0; } while(0)

#define PWM_SetPullup()    do { WPUC7 = 1; } while(0)
#define PWM_ResetPullup()   do { WPUC7 = 0; } while(0)
#define PWM_SetAnalogMode()   do { ANSC7 = 1; } while(0)
#define PWM_SetDigitalMode()   do { ANSC7 = 0; } while(0)



/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
*/