/*
 * File:   main.c
 *
 */

#include "mcc_generated_files/mcc.h"
#include "oled.h"

extern const uint8_t font[];
extern const uint8_t xpress[];

void main(void) {
    bool inv = true;
    SYSTEM_Initialize(); 
    OLED_Initialize();

    OLED_PutPicture(xpress);

    char c = getch();
    putch(c);
    
    while (1) {
        OLED_Clear();  
        OLED_SetScale(1, 1); OLED_Putchar(c); 
        OLED_SetScale(2, 2); OLED_Putchar(c);
        OLED_SetScale(3, 3); OLED_Putchar(c);
        OLED_SetScale(3, 4); OLED_Putchar(c);
        OLED_SetScale(4, 4); OLED_Putchar(c);
        
        if (inv) OLED_Command(SSD1306_INVERTDISPLAY);
        else     OLED_Command(SSD1306_NORMALDISPLAY);
        inv = !inv;
        
        LATA = c & 0xf;
        c = getch();
        putch(c);
    }
}
