/*
 * File:   HardwareProfile.h
 *
 * Hardware platform: PIC16F18855 Xpress evaluation board + SD Click
 */

#ifndef _HARDWARE_PROFILE_H
#define _HARDWARE_PROFILE_H

#include "mcc_generated_files/mcc.h"

/*********************************************************************
 * PIC16 clock
 ********************************************************************/
#define GetSystemClock()            (_XTAL_FREQ)
#define	GetPeripheralClock()        (GetSystemClock()/4)
#define GetInstructionClock()       (GetSystemClock()/4)


/*********************************************************************
 * IOs for the micro SD card interface
 *********************************************************************/

#define USE_SD_INTERFACE_WITH_SPI

    // Registers for the SPI module 
    #define MDD_USE_SPI_1

    // MDD SPI Configuration

    // Description: SD-SPI Chip Select Output bit
    #define SD_CS               LATBbits.LATB2
    // Description: SD-SPI Chip Select TRIS bit
    #define SD_CS_TRIS          TRISBbits.TRISB2

    // Description: SD-SPI Card Detect Input bit
    #define SD_CD               0
    // Description: SD-SPI Card Detect TRIS bit
    #define SD_CD_TRIS          W

    // Description: SD-SPI Write Protect Check Input bit
    #define SD_WE               0
    // Description: SD-SPI Write Protect Check TRIS bit
    #define SD_WE_TRIS          W               // assigned to other input pin!


    
#define OpenSPISlow()     SPI1_InitializeSlow()
#define OpenSPIFast()     SPI1_Initialize()
#define WriteSPI( b)      SPI1_Exchange8bit( b)

#endif // HARDWARE_PROFILE_H
