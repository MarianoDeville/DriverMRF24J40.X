/**
  ******************************************************************************
  * @file    DriverMRF24J40.X/hardware_config.h
  * @author  Lcdo. Mariano Ariel Deville
  * @brief   Cabecera para modulo hardware_config.c
  ******************************************************************************
  * @attention
  *
  ******************************************************************************
  */ 

/* Definido para evitar la inclusión recursiva -------------------------------*/  
#ifndef HEADER_HARDWARE_CONFIG_H
#define	HEADER_HARDWARE_CONFIG_H

/* Includes ------------------------------------------------------------------*/
#include <xc.h>

/* Macros --------------------------------------------------------------------*/
#define	_XTAL_FREQ      16000000	// Velocidad del clcok del sistema.
#define	ENTRADA         1   		// 
#define	SALIDA          0       	// 
/* Defino los nombres de los pines de E/S */
#define	PGC_IO          TRISBbits.TRISB6
#define	PGD_IO          TRISBbits.TRISB7
#define SPI_SCK_IO      TRISCbits.TRISC3
#define SPI_SDO_IO      TRISCbits.TRISC5
#define SPI_SDI_IO      TRISCbits.TRISC4
#define	PULSADOR_IO		TRISCbits.TRISC2
#define	LED_VERDE_IO	TRISEbits.TRISE0
#define	LED_ROJO_IO		TRISEbits.TRISE2
#define	LED_AMARILLO_IO	TRISEbits.TRISE1
#define	PULSADOR		PORTCbits.RC2
#define	LED_VERDE		LATEbits.LATE0
#define	LED_ROJO		LATEbits.LATE2
#define	LED_AMARILLO	LATEbits.LATE1
#define MRF24_INT_IO	TRISBbits.TRISB0
#define	MRF24_CS_IO 	TRISCbits.TRISC6
#define	MRF24_WAKE_IO 	TRISCbits.TRISC7
#define	MRF24_RESET_IO	TRISDbits.TRISD4
#define MRF24_INT   	PORTBbits.RB0
#define	MRF24_CS        LATCbits.LATC6
#define	MRF24_WAKE  	LATCbits.LATC7
#define	MRF24_RESET 	LATDbits.LATD4

/* Palabras de configuración -------------------------------------------------*/
#pragma config FOSC = INTIO67   // Internal oscillator block
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enabled bit
#pragma config IESO = OFF       // Internal External Switchover bit
//#pragma config PWRTEN = OFF     // Power-up Timer Enable bit
#pragma config BOREN = OFF      // Brown Out Reset Selection bits
#pragma config BORV = 22        // Brown-out Reset Selection bit
#pragma config WDTEN = OFF      // Watchdog Timer
#pragma config WDTPS = 8192     // 1:2048
#pragma config CCP2MX = PORTC   // CCP2 input/output is multiplexed with RC1
#pragma config PBADEN = OFF     // PORTB<4:0> pins are configured as digital I/O
#pragma config LPT1OSC = OFF    // Low Voltage Programming Enable bit
#pragma config HFOFST = OFF     // System clock is held off until the HFINTOSC is stable.
#pragma config MCLRE = OFF      // MCLR pin enabled; RE3 input pin disabled
#pragma config STVREN = OFF     // Stack full/underflow will cause Reset
#pragma config LVP = OFF        // Single-Supply ICSP enabled
#pragma config XINST = OFF      // Instruction set extension (Legacy mode)
#pragma config DEBUG = OFF      // In-Circuit Debugger Mode bit
#pragma config CP0 = OFF        // Code Protection bit
#pragma config CP1 = OFF        // Code Protection bit
#pragma config CP2 = OFF        // Code Protection bit
#pragma config CP3 = OFF        // Code Protection bit
#pragma config CPB = OFF        // Boot Block Code Protection bit
#pragma config CPD = OFF        // Data Code Protection bit
#pragma config WRT0 = OFF       // Flash Program Memory Self Write Enable bits
#pragma config WRT1 = OFF       // Flash Program Memory Self Write Enable bits
#pragma config WRT2 = OFF       // Flash Program Memory Self Write Enable bits
#pragma config WRT3 = OFF       // Flash Program Memory Self Write Enable bits
#pragma config WRTC = OFF       // Flash Program Memory Self Write Enable bits
#pragma config WRTB = OFF       // Flash Program Memory Self Write Enable bits
#pragma config WRTD = OFF       // Flash Program Memory Self Write Enable bits
#pragma config EBTRB = OFF      // Boot Block Table Read Protection bit

/* Prototipo de funciones públicas -------------------------------------------*/
void BoardInit(void);

#endif

