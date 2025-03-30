/**
 *******************************************************************************
 * @file    DriverMRF24J40.X/drivers/src/drv_mspi_port.c
 * @author  Lcdo. Mariano Ariel Deville
 * @brief   Implementación comunicación SPI para PIC 18F46K20
 *******************************************************************************
 * @attention
 *
 *******************************************************************************
 */

/* Includes ------------------------------------------------------------------*/
#include "../../hardware_config.h"
#include "../inc/drv_mspi_port.h"

/**
 * @brief  Inicialización del periférico de comunicación SPI
 * @param  None
 * @retval None
  ******************************************************************************
 * @attention
 * SSPM3	SSPM2	SSPM1   SSPM0	Synchronous Serial Port Mode Select
 *   0		 1		 0       1		SPI Slave, SS pin control disabled.
 *	 0		 1		 0		 0  	SPI Slave, SS pin control enabled
 *	 0		 0		 1		 1  	SPI Master mode, clock = TMR2 output/2
 *	 0		 0		 1		 0  	SPI Master mode, clock = FOSC/64
 *	 0		 0		 0		 1  	SPI Master mode, clock = FOSC/16
 *	 0		 0		 0		 0  	SPI Master mode, clock = FOSC/4
 ******************************************************************************
 */
void SPIInit(void) {
    
    SPI_SCK_IO = SALIDA;
    SPI_SDO_IO = SALIDA;
    SPI_SDI_IO = ENTRADA;
	SSPSTATbits.CKE = 1;
	SSPCON1bits.WCOL = 1;
	SSPCON1bits.SSPOV = 0;
	SSPCON1bits.SSPEN = 1;
	SSPCON1bits.CKP = 0;
	SSPSTATbits.SMP = 1;
	SSPCON1bits.SSPM3 = 0;
	SSPCON1bits.SSPM2 = 0;
	SSPCON1bits.SSPM1 = 0;
	SSPCON1bits.SSPM0 = 1;
    return;
}

/**
 * @brief  Escritura de un byte en el puerto SPI
 * @param  Dato a enviar por el puerto - 1 byte
 * @retval None
 */
void SPIWriteByte(uint8_t dato) {
    
    PIR1bits.SSPIF = 0;
    SSPBUF = dato;
    while(!PIR1bits.SSPIF);
    return;
}

/**
 * @brief  Escritura de dos bytes en el puerto SPI
 * @param  Dato a enviar por el puerto - 2 bytes
 * @retval None
 */
void SPIWrite2Byte(uint16_t dato) {
    
    PIR1bits.SSPIF = 0;
    SSPBUF = (uint8_t) (dato >> 8);
    while(!PIR1bits.SSPIF);
    SSPBUF = (uint8_t) dato;
    while(!PIR1bits.SSPIF);
    return;
}

/**
 * @brief  Lectura de un byte en el puerto SPI
 * @param  None
 * @retval Valor leido en el bufer de entrada del puerto - 1 byte
 */
uint8_t SPIRead(void) {
    
    SSPCON1bits.WCOL = 0;
    SSPBUF = 0x00;
    while(!SSPSTATbits.BF);
    return SSPBUF;
}

