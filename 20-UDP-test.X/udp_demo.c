
#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/TCPIPLibrary/udpv4.h"
#include "mcc_generated_files/TCPIPLibrary/ipv4.h"
#include "udp_demo.h"
#include "mcc_generated_files/TCPIPLibrary/udpv4_port_handler_table.h"
#include "mcc_generated_files/TCPIPLibrary/syslog.h"
#include <string.h>
#include <stdio.h>

/******************************************************************************************************/
                                          /* UDP Demo */
/******************************************************************************************************/

static uint32_t claim_dest_ip = 0;
static uint8_t claim = 0;
static uint8_t idle_pkt_received = 0;
static uint8_t  pot_init = 0;
static uint16_t pot_initial_adcResult = 0;

#define COMMAND 'C'
#define POTENTIOMETER 'P'
#define TEMPERATURE 'T'
#define LISTEN 'L'

#define DEST_PORT 65531

typedef struct {   
   char command;
   char action;
}type_cmd;

type_cmd data;
type_cmd idle_packet;

/* Check whether IP is connected or not */
bit DEMO_UDP_ClaimIPCheck()
{
    if(claim == 1)
        return true;
    return false;
}

/* Set claim if IP is connected or disconnected */
void DEMO_UDP_SetClaimIP(uint8_t claim_ip)
{
    claim = claim_ip;
}

/* Check every 1sec if IP is connected or disconnected */
void DEMO_UDP_IPLockTimer(void)
{
    if(!idle_pkt_received)     {
        DEMO_UDP_SetClaimIP(0);
    } else {
        DEMO_UDP_SetClaimIP(1);
        idle_pkt_received = 0;
    }
}

// Read the Temperature reading from ADC
uint16_t DEMO_UDP_MeasureTemp(void)
{
    adc_result_t adcResult;
    adcResult = ADCC_GetSingleConversion(channel_Temp);
    return  adcResult;
}

void DEMO_UDP_IdlePkt(int length)
{
    //this function gets called by the UDP Port handler for port 65531
    UDP_ReadBlock((uint8_t*)&idle_packet,sizeof(idle_packet));
    if(idle_packet.command== COMMAND)
    {
        switch(idle_packet.action){
            case 'I':       //Receive Idle packets
                idle_pkt_received =1;
                break;
        }
    }
}

void DEMO_UDP_Recv(int length)
{
    uint8_t message;
    uint16_t destPort;
    uint32_t dest_ip;
    uint32_t local_ip;
    char str[32], str1[16], str2[16];
    uint8_t str_len;
    uint16_t temperature;
    bool started = false;

    UDP_ReadBlock((uint8_t*)&data,sizeof(data));
    if(data.command== COMMAND)
    {
        switch(data.action){               

        case 'C':           // Connect 
            if(!DEMO_UDP_ClaimIPCheck())
            {
                DEMO_UDP_SetClaimIP(1);
                destPort = UDP_GetDestPort();
                dest_ip = UDP_GetDestIP();
                claim_dest_ip = dest_ip;
                message = 1;
                started = UDP_Start(claim_dest_ip,65533,destPort);
                if(started==SUCCESS)
                {
                    UDP_Write8(message);
                    UDP_Send();
                }
                else
                {
                    DEMO_UDP_SetClaimIP(0);
                }
                pot_init = 1;
            }
            break;

        case 'R':           // Release IP
            destPort=UDP_GetDestPort();
            dest_ip = UDP_GetDestIP();
            local_ip = IPV4_GetMyIP();
            if(DEMO_UDP_ClaimIPCheck())
            {
                DEMO_UDP_SetClaimIP(0);
            }
           started = UDP_Start(claim_dest_ip,65533,destPort);
           if(started==SUCCESS)
           {
               UDP_WriteBlock((uint8_t*)&local_ip, sizeof(local_ip));
               UDP_Send();
           }
           PORTA = 0;
           pot_init = 0;
           puts("");
           break;

        case '1':           // Toggle LEDs   
        case '2':
        case '3':
        case '4':
            if(DEMO_UDP_ClaimIPCheck()) {
                dest_ip = UDP_GetDestIP();
                if(claim_dest_ip == dest_ip) {
                    uint8_t led_mask = 1 << (data.action - '1') ;
                    LATA ^= led_mask;   // toggle LED#
                }
            }
           break;

         case 'D':  // display message
            if(DEMO_UDP_ClaimIPCheck())
            {
                memset(str,0,sizeof(str));
                memset(str1,0,sizeof(str1));
                memset(str2,0,sizeof(str2));
                dest_ip = UDP_GetDestIP();
                if(claim_dest_ip == dest_ip)
                {
                    str_len = UDP_Read8();
                    UDP_ReadBlock(&str,str_len);
                    puts(str);
                }
            }
            break;

        case 'T':               // Send Temperature Reading
            if(DEMO_UDP_ClaimIPCheck())
            {
                dest_ip = UDP_GetDestIP();
                 if(claim_dest_ip == dest_ip)
                 {
                     destPort=UDP_GetDestPort();
                     temperature = DEMO_UDP_MeasureTemp();
                     started = UDP_Start(claim_dest_ip, 65533, destPort);
                     if(started == SUCCESS)
                     {                                 
                         UDP_Write16(temperature-300);
                         UDP_Send();
                     }
                 }
            }
            break;
        } // switch
    } // if
}


void DEMO_UDP_Send()
{
    bool started = false;
    adc_result_t pot_adcResult;

     if(!DEMO_UDP_ClaimIPCheck())
     {         
         started = UDP_Start(0xFFFFFFFF, 65533, 65531);
         if(started == SUCCESS)
         {
             UDP_Write8(LISTEN);            
             UDP_Send();
         }
     }

    if(pot_init)
    {
        pot_adcResult = ADCC_GetSingleConversion(POT); // Read Potentiometer value from ADC

        if(((pot_adcResult > (pot_initial_adcResult + 100)) || (pot_adcResult <(pot_initial_adcResult - 100))) && pot_adcResult > 100) // Start UDP only when there is a difference in previous UDP packet
        {
            started = UDP_Start(claim_dest_ip, 65533, DEST_PORT);
            if(started == SUCCESS)
            {
                UDP_Write8(POTENTIOMETER);
                UDP_Write32(pot_adcResult);
                UDP_Send();
            }
            pot_initial_adcResult = pot_adcResult;
        }
    }
}

