/**
  UDP Port Handler header file
	
  Company:
    Microchip Technology Inc.

  File Name:
    udpv4_port_handler_table.h

  Summary:
    This is the header file udpv4.c

  Description:
    This file consists of the UDP call back table.

 */

/*

?  [2015] Microchip Technology Inc. and its subsidiaries.  You may use this software 
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


#ifndef UDPV4_PORT_HANDLER_TABLE_H
#define	UDPV4_PORT_HANDLER_TABLE_H

#include "tcpip_types.h"
#include "dhcp_client.h"
#include "../../udp_demo.h"



// - Prototype
/* 1. Declare the newly created UDP handler prototype */
/* 2. Make it as an extern function */



typedef struct
{
    uint16_t portNumber;
    ip_receive_function_ptr callBack;
} udp_handler_t;

const udp_handler_t UDP_CallBackTable[] = \
{    
    {65532, &DEMO_UDP_IdlePkt},
    {DEST_PORT, &DEMO_UDP_Recv},
    {68, &DHCP_Handler},     // a catcher to manage the DHCP process
};

#endif	/* UDPV4_PORT_HANDLER_TABLE_H */


