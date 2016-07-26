/**
  DHCPv4 Client Protocol header file

  Company:
    Microchip Technology Inc.

  File Name:
    dhcp_client.h

  Summary:
    This is the header file for dhcp_client.c

  Description:
    This header file provides the API for the DHCP client protocol

 */

/*

©  [2015] Microchip Technology Inc. and its subsidiaries.  You may use this software
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


#ifndef DHCP_CLIENT_H
#define	DHCP_CLIENT_H

/**
  Section: Included Files
*/
#include "tcpip_types.h"
#include "tcpip_config.h"

/**
  Section: DHCP Client Functions
 */

void DHCP_init(void);

/**This function receives and process the DHCP packet.
 * The length of the packet is passed as parameter.
 *
 * @param length
 *      Length of the received DHCP packet.
 */
void DHCP_Handler(int);


/**This function updates the DHCP status at least for every one second.
 *
 */
void DHCP_Manage(void);


/**This function writes zeroes for the number of bytes passed.
 *
 * @param length
 *      Number of bytes.
 */
void DHCP_WriteZeros(uint16_t length);



#endif	/* DHCP_CLIENT_H */

