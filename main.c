/**
  Generated main.c file from MPLAB Code Configurator

  @Company
    Microchip Technology Inc.

  @File Name
    main.c

  @Summary
    This is the generated main.c using PIC24 / dsPIC33 / PIC32MM MCUs.

  @Description
    This source file provides main entry point for system initialization and application code development.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.171.4
        Device            :  dsPIC33CK256MP508
    The generated drivers are tested against the following:
        Compiler          :  XC16 v2.10
        MPLAB 	          :  MPLAB X v6.05
*/

/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
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
#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/uart1.h"
/*
                         Main application
 */

#ifndef FCY
#define FCY (_XTAL_FREQ / 2)
#endif
#include <libpic30.h>
#include "SST25xx.h"
#include <string.h>
#include <stdint.h>
#include <stdio.h>
int main()
{
    SYSTEM_Initialize();
    SST_Init();
    while(1)
    {
       
//        SST_Write_Byte(0x100,100);
//        uint8_t value=SST_Read_Byte(0x100);
//        uint8_t value1=SST_Read_Byte(0x100);
//        printf("%02X ", value);
//        printf("\n");
//        __delay_ms(1000);
//        printf("%dX ", value1);
//        printf("\n");
//        __delay_ms(1000);
       
//        SST_Sector_Erase(0x100);
//        const char dataWrite1[]= "rpcvn.shop";
//        uint8_t readBufer[10];
//        SST_Sector_Erase(0x100);
//        SST_Write_nByte(0x100,strlen(dataWrite1)+1,dataWrite1);
//        SST_Read_nByte(0x100,strlen(dataWrite1)+1,readBufer);
//        printf("Read Data %s",readBufer);
//        printf("\n");
//        __delay_ms(1000);
          uint16_t  address=0x100;
          uint8_t   dataWrite[]={0xAA,0xAC,0xAD,0xCB};
          uint8_t   dataLength=sizeof(dataWrite)/sizeof(dataWrite[0]);
          uint8_t   readBuffer[8];
          SST_Sector_Erase(address);
          SST_Write_nByte(address,dataLength,dataWrite);
          SST_Read_nByte(address,dataLength,readBuffer);
          SST_Read_Byte(address);
          for(int i = 0; i < dataLength;i++)
        {
               printf("Read Data[%d]: %02X\n", i, readBuffer[i]);
        }
        __delay_ms(1000);
          
        
        /*length of array*/
//        uint32_t address = 0x100; 
//        uint8_t  dataWrite[] = {0xAA, 0xBB, 0xCC, 0xDD}; 
//        uint8_t  dataLength = sizeof(dataWrite) / sizeof(dataWrite[0]); 
//        uint8_t  readBuffer[4];
//        SST_Sector_Erase(address);
//        SST_Write_nByte(address, dataLength+1, dataWrite);
//        SST_Read_nByte(address,  dataLength+1, readBuffer);
//        for(int i = 0; i < dataLength; i++)
//        {
//            printf("Read Data[%d]: %02X\n", i, readBuffer[i]);
//        }
//        __delay_ms(1000);
    }
    return 1;
}