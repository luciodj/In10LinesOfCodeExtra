/**
  UDP Demo header file

  Company:
    Microchip Technology Inc.

  File Name:
    udp_demo.h

  Summary:
    Header file for the UDP Demo implementation

  Description:
    This header file provides APIs for the UDP Demo implementation.

 */

/*

�  [2015] Microchip Technology Inc. and its subsidiaries.  You may use this software
and any derivatives exclusively with Microchip products.

THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER EXPRESS,
IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF
NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE, OR ITS
INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION WITH ANY OTHER PRODUCTS, OR USE
IN ANY APPLICATION.

IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL
OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED
TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY
OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S
TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED
THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE TERMS.

*/

#ifndef UDP_DEMO_H
#define	UDP_DEMO_H

#ifdef __cplusplus  // Provide C++ Compatibility
    extern "C" {
#endif

void DEMO_UDP_Send();
void DEMO_UDP_Recv(int len);
void DEMO_UDP_IdlePkt(int length);

uint16_t DEMO_UDP_MeasureTemp(void);

void DEMO_UDP_IPLockTimer(void);
void DEMO_UDP_SetClaimIP(uint8_t claim_ip);
bit DEMO_UDP_ClaimIPCheck();
void DEMO_UDP_IdlePktUdp(int length);

#define DEST_PORT 65531

#ifdef __cplusplus  // Provide C++ Compatibility
    }
#endif

#endif	/* UDP_DEMO_H */

