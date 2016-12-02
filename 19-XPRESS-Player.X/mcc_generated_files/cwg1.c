/**
  CWG1 Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    cwg1.c

  @Summary
    This is the generated driver implementation file for the CWG1 driver using MPLAB(c) Code Configurator

  @Description
    This header file provides implementations for driver APIs for CWG1.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 3.15.0
        Device            :  PIC16F18855
        Driver Version    :  1.0
    The generated drivers are tested against the following:
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

/**
  Section: Included Files
*/

#include <xc.h>
#include "cwg1.h"

/**
  Section: CWG1 APIs
*/

void CWG1_Initialize(void)
{
    // Set the CWG1 to the options selected in MPLAB(c) Code Configurator

    // Writing to CWGxCON0, CWGxCON1, CWGxCON2, CWGxDBR & CWGxDBF registers
	// CWG1POLA non inverted; CWG1POLC non inverted; CWG1POLB non inverted; CWG1POLD non inverted; 
	CWG1CON1 = 0x00;
	// CWG1DBR 0; 
	CWG1DBR = 0x00;
	// CWG1DBF 0; 
	CWG1DBF = 0x00;
	// CWG1SHUTDOWN No Auto-shutdown; CWG1REN disabled; CWG1LSBD inactive; CWG1LSAC inactive; 
	CWG1AS0 = 0x00;
	// AS1E disabled; AS0E disabled; AS3E disabled; AS2E disabled; AS5E disabled; AS4E disabled; AS6E disabled; 
	CWG1AS1 = 0x00;
	// CWG1STRD disabled; CWG1STRB disabled; CWG1STRC disabled; CWG1STRA disabled; CWG1OVRD low; CWG1OVRA low; CWG1OVRB low; CWG1OVRC low; 
	CWG1STR = 0x00;
	// CWG1CS FOSC; 
	CWG1CLKCON = 0x00;
	// IS PWM7_OUT; 
	CWG1ISM = 0x07;
    
    // CWG1LD Buffer_not_loaded; CWG1EN enabled; CWG1MODE Half bridge mode; 
    CWG1CON0 = 0x84;
}

void CWG1_LoadRiseDeadbandCount(uint8_t dutyValue)
{
    // Writing 6 bits of rising dead band count into CWGxDBR register
    CWG1DBR = dutyValue;
}

void CWG1_LoadFallDeadbandCount(uint8_t dutyValue)
{
    // Writing 6 bits of rising dead band count into CWGxDBF register
    CWG1DBF = dutyValue;
}

void CWG1_LoadBufferEnable(void)
{
	//It sets the CWG1CON0<LD> bit
    CWG1CON0bits.CWG1LD = 1;
}

bool CWG1_IsModuleEnabled()
{
	//returns whether the module is enabled or not
    return (CWG1CON0bits.CWG1EN);
}

void CWG1_AutoShutdownEventSet()
{
    // Setting the SHUTDOWN bit of CWGxAS0 register
    CWG1AS0bits.CWG1SHUTDOWN = 1;
}

void CWG1_AutoShutdownEventClear()
{
    // Clearing the SHUTDOWN bit of CWGxAS0 register
    CWG1AS0bits.CWG1SHUTDOWN = 0;
}

/**
 End of File
*/
