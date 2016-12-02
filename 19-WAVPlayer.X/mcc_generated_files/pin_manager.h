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
        Product Revision  :  MPLAB(c) Code Configurator - 4.0
        Device            :  PIC16F18855
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

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

// get/set LED0 aliases
#define LED0_TRIS               TRISAbits.TRISA0
#define LED0_LAT                LATAbits.LATA0
#define LED0_PORT               PORTAbits.RA0
#define LED0_WPU                WPUAbits.WPUA0
#define LED0_OD                ODCONAbits.ODCA0
#define LED0_ANS                ANSELAbits.ANSA0
#define LED0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LED0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LED0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LED0_GetValue()           PORTAbits.RA0
#define LED0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LED0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LED0_SetPullup()      do { WPUAbits.WPUA0 = 1; } while(0)
#define LED0_ResetPullup()    do { WPUAbits.WPUA0 = 0; } while(0)
#define LED0_SetPushPull()    do { ODCONAbits.ODCA0 = 1; } while(0)
#define LED0_SetOpenDrain()   do { ODCONAbits.ODCA0 = 0; } while(0)
#define LED0_SetAnalogMode()  do { ANSELAbits.ANSA0 = 1; } while(0)
#define LED0_SetDigitalMode() do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS               TRISAbits.TRISA1
#define LED1_LAT                LATAbits.LATA1
#define LED1_PORT               PORTAbits.RA1
#define LED1_WPU                WPUAbits.WPUA1
#define LED1_OD                ODCONAbits.ODCA1
#define LED1_ANS                ANSELAbits.ANSA1
#define LED1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED1_GetValue()           PORTAbits.RA1
#define LED1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED1_SetPullup()      do { WPUAbits.WPUA1 = 1; } while(0)
#define LED1_ResetPullup()    do { WPUAbits.WPUA1 = 0; } while(0)
#define LED1_SetPushPull()    do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED1_SetOpenDrain()   do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED1_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED1_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS               TRISAbits.TRISA2
#define LED2_LAT                LATAbits.LATA2
#define LED2_PORT               PORTAbits.RA2
#define LED2_WPU                WPUAbits.WPUA2
#define LED2_OD                ODCONAbits.ODCA2
#define LED2_ANS                ANSELAbits.ANSA2
#define LED2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED2_GetValue()           PORTAbits.RA2
#define LED2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED2_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define LED2_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define LED2_SetPushPull()    do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED2_SetOpenDrain()   do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED2_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED2_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED3 aliases
#define LED3_TRIS               TRISAbits.TRISA3
#define LED3_LAT                LATAbits.LATA3
#define LED3_PORT               PORTAbits.RA3
#define LED3_WPU                WPUAbits.WPUA3
#define LED3_OD                ODCONAbits.ODCA3
#define LED3_ANS                ANSELAbits.ANSA3
#define LED3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LED3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LED3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LED3_GetValue()           PORTAbits.RA3
#define LED3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LED3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LED3_SetPullup()      do { WPUAbits.WPUA3 = 1; } while(0)
#define LED3_ResetPullup()    do { WPUAbits.WPUA3 = 0; } while(0)
#define LED3_SetPushPull()    do { ODCONAbits.ODCA3 = 1; } while(0)
#define LED3_SetOpenDrain()   do { ODCONAbits.ODCA3 = 0; } while(0)
#define LED3_SetAnalogMode()  do { ANSELAbits.ANSA3 = 1; } while(0)
#define LED3_SetDigitalMode() do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set SW1 aliases
#define SW1_TRIS               TRISAbits.TRISA5
#define SW1_LAT                LATAbits.LATA5
#define SW1_PORT               PORTAbits.RA5
#define SW1_WPU                WPUAbits.WPUA5
#define SW1_OD                ODCONAbits.ODCA5
#define SW1_ANS                ANSELAbits.ANSA5
#define SW1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define SW1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define SW1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define SW1_GetValue()           PORTAbits.RA5
#define SW1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define SW1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define SW1_SetPullup()      do { WPUAbits.WPUA5 = 1; } while(0)
#define SW1_ResetPullup()    do { WPUAbits.WPUA5 = 0; } while(0)
#define SW1_SetPushPull()    do { ODCONAbits.ODCA5 = 1; } while(0)
#define SW1_SetOpenDrain()   do { ODCONAbits.ODCA5 = 0; } while(0)
#define SW1_SetAnalogMode()  do { ANSELAbits.ANSA5 = 1; } while(0)
#define SW1_SetDigitalMode() do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set CS aliases
#define CS_TRIS               TRISBbits.TRISB2
#define CS_LAT                LATBbits.LATB2
#define CS_PORT               PORTBbits.RB2
#define CS_WPU                WPUBbits.WPUB2
#define CS_OD                ODCONBbits.ODCB2
#define CS_ANS                ANSELBbits.ANSB2
#define CS_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define CS_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define CS_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define CS_GetValue()           PORTBbits.RB2
#define CS_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define CS_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define CS_SetPullup()      do { WPUBbits.WPUB2 = 1; } while(0)
#define CS_ResetPullup()    do { WPUBbits.WPUB2 = 0; } while(0)
#define CS_SetPushPull()    do { ODCONBbits.ODCB2 = 1; } while(0)
#define CS_SetOpenDrain()   do { ODCONBbits.ODCB2 = 0; } while(0)
#define CS_SetAnalogMode()  do { ANSELBbits.ANSB2 = 1; } while(0)
#define CS_SetDigitalMode() do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()    do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()   do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()   do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()         PORTBbits.RB3
#define RB3_SetDigitalInput()   do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()  do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()     do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()   do { WPUBbits.WPUB3 = 0; } while(0)
#define RB3_SetAnalogMode() do { ANSELBbits.ANSB3 = 1; } while(0)
#define RB3_SetDigitalMode()do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()    do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()   do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()   do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()         PORTBbits.RB4
#define RB4_SetDigitalInput()   do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()  do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()     do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()   do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode() do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()    do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()   do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()   do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()         PORTBbits.RB5
#define RB5_SetDigitalInput()   do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()  do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()     do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()   do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode() do { ANSELBbits.ANSB5 = 1; } while(0)
#define RB5_SetDigitalMode()do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()    do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()   do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()   do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()         PORTCbits.RC0
#define RC0_SetDigitalInput()   do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()  do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()     do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()   do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode() do { ANSELCbits.ANSC0 = 1; } while(0)
#define RC0_SetDigitalMode()do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()    do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()   do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()   do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()         PORTCbits.RC1
#define RC1_SetDigitalInput()   do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()  do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()     do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()   do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode() do { ANSELCbits.ANSC1 = 1; } while(0)
#define RC1_SetDigitalMode()do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()    do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()   do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()   do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()         PORTCbits.RC3
#define RC3_SetDigitalInput()   do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()  do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()     do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()   do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode() do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set IO_RC7 aliases
#define IO_RC7_TRIS               TRISCbits.TRISC7
#define IO_RC7_LAT                LATCbits.LATC7
#define IO_RC7_PORT               PORTCbits.RC7
#define IO_RC7_WPU                WPUCbits.WPUC7
#define IO_RC7_OD                ODCONCbits.ODCC7
#define IO_RC7_ANS                ANSELCbits.ANSC7
#define IO_RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define IO_RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define IO_RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define IO_RC7_GetValue()           PORTCbits.RC7
#define IO_RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define IO_RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define IO_RC7_SetPullup()      do { WPUCbits.WPUC7 = 1; } while(0)
#define IO_RC7_ResetPullup()    do { WPUCbits.WPUC7 = 0; } while(0)
#define IO_RC7_SetPushPull()    do { ODCONCbits.ODCC7 = 1; } while(0)
#define IO_RC7_SetOpenDrain()   do { ODCONCbits.ODCC7 = 0; } while(0)
#define IO_RC7_SetAnalogMode()  do { ANSELCbits.ANSC7 = 1; } while(0)
#define IO_RC7_SetDigitalMode() do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize(void);

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