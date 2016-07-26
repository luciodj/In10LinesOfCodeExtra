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

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_DNS 2
#define MAX_NTP 2

struct ip_db_info {
    uint32_t ipv4_myAddress;
    uint32_t ipv4_dns[MAX_DNS]; // allow a primary & secondary DNS
    uint32_t ipv4_subnetMask;
    uint32_t ipv4_router;
    uint32_t ipv4_gateway;
    uint32_t ipv4_ntpAddress[MAX_NTP];
    uint32_t ipv4_tftpAddress;
} ip_database_info;

#define ARRAY_SIZE(a) (sizeof(a)/sizeof(*a))

void ipdb_init(void)
{
    ip_database_info.ipv4_myAddress = 0;
    ip_database_info.ipv4_subnetMask = 0;
    ip_database_info.ipv4_router = 0;
    for(uint8_t x=0; x < ARRAY_SIZE(ip_database_info.ipv4_dns); x ++)
        ip_database_info.ipv4_dns[x] = 0;
    for(uint8_t x=0; x < ARRAY_SIZE(ip_database_info.ipv4_ntpAddress); x++)
        ip_database_info.ipv4_ntpAddress[x] = 0;
    ip_database_info.ipv4_tftpAddress = 0;
}

inline uint32_t ipdb_getAddress(void) { return ip_database_info.ipv4_myAddress; }
inline uint32_t ipdb_getDNS(void) { return ip_database_info.ipv4_dns[0]; } // TODO decide how to get a primary or secondary DNS
inline uint32_t ipdb_getSubNetMASK(void) { return ip_database_info.ipv4_subnetMask; }
inline uint32_t ipdb_getRouter(void) { return ip_database_info.ipv4_router; }
inline uint32_t ipdb_getNTP(void) { return ip_database_info.ipv4_ntpAddress[0]; }
inline uint32_t ipdb_getTFTP(void) { return ip_database_info.ipv4_tftpAddress; }

inline void ipdb_setAddress(uint32_t a) { ip_database_info.ipv4_myAddress = a; }
inline void ipdb_setDNS(int x,uint32_t v) { if(x < MAX_DNS) ip_database_info.ipv4_dns[x] = v; }
inline void ipdb_setSubNetMASK(uint32_t m) { ip_database_info.ipv4_subnetMask = m; }
inline void ipdb_setRouter(uint32_t r) { ip_database_info.ipv4_router = r; }
inline void ipdb_setGateway(uint32_t g) { ip_database_info.ipv4_gateway = g; }
inline void ipdb_setNTP(int x, uint32_t n) { if(x < MAX_NTP) ip_database_info.ipv4_ntpAddress[x] = n; }
inline void ipdb_setTFTP(uint32_t a) { ip_database_info.ipv4_tftpAddress = a; }

uint32_t makeStrToIpv4Address(const char *str)
{
    uint32_t ip_addr;
    char *pch;    
    uint8_t x =3;
    pch = strtok(str,".");
    while((pch != NULL))
    {        
       ((uint8_t *)&ip_addr)[x]= atoi(pch);
        x--;     
        pch = strtok (NULL,".");
    }
    return ip_addr;
}

char *makeIpv4AddresstoStr(uint32_t addr)
{
    char ip_str[15];
    
    sprintf(ip_str,"%d.%d.%d.%d",((char*)&addr)[3],((char*)&addr)[2],((char*)&addr)[1],((char*)&addr)[0]);    
    
    return ip_str;
}
