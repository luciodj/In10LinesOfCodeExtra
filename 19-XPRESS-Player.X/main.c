/**
 XPRESS Player

  File Name:
    main.c

 Author:
    Lucio Di Jasio

  Summary:
    Playback of Audio files from SD Card (microSD Click© board)
    Support 44.100 Hz mono (uncompressed) WAV files
    Board: XPRESS Evaluation Board (DM164140)

 *   Description:
        Compiler          :  XC8 1.38
        MPLAB             :  MPLAB X 3.45
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
#include "Wave.h"
#include "fileio.h"

void main(void) {
    unsigned long lc; // file length
    MFILE* fp; // file pointer
    unsigned int entry; // current piece

    SYSTEM_Initialize();

    LED0_LAT = 0;
    LED1_LAT = 0;

    puts("Xpress WAV Player");

    while (1) // main loop
    {
        if (mount() != 0) {
            LED0_LAT = 1; // turn on LED0 if mount successful
            puts("SD card found");
            entry = 0;

            // look for a  WAV file
            while ((fp = ffindM("WAV", &entry)) != NULL) {
                puts("WAV file(s) found, ready to play");
                LED0_LAT = 0; // turn off lED0 to save power
                LED1_LAT = 1; // turn on LED1 if mount successful
                // wait for button press
                while (SW1_GetValue());
                // wait for button release
                while (!SW1_GetValue());
                LED1_LAT = 0; // turn off LED1 to save power

                lc = InitWAV(fp);
                Play(fp, lc);
            } // while
        } else {
            LED0_LAT = 0; // mounting error
            printf("mount failed with code: %02x\n", FError);
            __delay_ms(250);
        }
    }
}
