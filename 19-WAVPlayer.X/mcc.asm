; PIC16F18855 Configuration Bit Settings

#include "p16F18855.inc"

; CONFIG1
; __config 0xFF8F
 __CONFIG _CONFIG1, _FEXTOSC_ECH & _RSTOSC_HFINT32 & _CLKOUTEN_OFF & _CSWEN_ON & _FCMEN_ON
; CONFIG2
; __config 0xF7FF
 __CONFIG _CONFIG2, _MCLRE_ON & _PWRTE_OFF & _LPBOREN_OFF & _BOREN_ON & _BORV_LO & _ZCD_OFF & _PPS1WAY_OFF & _STVREN_ON
; CONFIG3
; __config 0xFF9F
 __CONFIG _CONFIG3, _WDTCPS_WDTCPS_31 & _WDTE_OFF & _WDTCWS_WDTCWS_7 & _WDTCCS_SC
; CONFIG4
; __config 0xFFFF
 __CONFIG _CONFIG4, _WRT_OFF & _SCANE_available & _LVP_ON
; CONFIG5
; __config 0xFFFF
 __CONFIG _CONFIG5, _CP_OFF & _CPD_OFF

 
EUSART_init
    banksel BAUD1CON
    movlw   0x08
    movwf   BAUD1CON
    
    movlw   0x90
    movwf   RC1STA
    
    movlw   0x24
    movwf   TX1STA
    
    movlw   0x40
    movwf   SP1BRGL
    
    movlw   0x03
    movwf   SP1BRGH
    return
    
while_not MACRO reg,bit
    btfss reg,bit
    goto  $-1
    END
    
EUSART_read
    banksel PIR3
EUSART_readL
    btfss   PIR3,RCIF
    goto    EUSART_readL

    movf    RC1REG,W
    return
    
    



