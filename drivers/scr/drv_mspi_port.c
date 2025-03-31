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

/* Definiciones de las velocidades del puerto --------------------------------*/
#define MASTER_FOSC_4   0X00
#define MASTER_FOSC_16  0X01
#define MASTER_FOSC_64  0X02
#define MASTER_TRM2_2   0X03
#define SLAVE_SS_E      0X04
#define SLAVE_SS_D      0X05

/**
 * @brief  Inicialización del periférico de comunicación SPI
 * @param  None
 * @retval None
 */
void SPIInit(void) {
    
    SPI_SCK_IO = SALIDA;
    SPI_SDO_IO = SALIDA;
    SPI_SDI_IO = ENTRADA;
    SSPSTATbits.SMP = true;
	SSPSTATbits.CKE = true;
    SSPCON1 = 0X00 | MASTER_FOSC_16;
	SSPCON1bits.WCOL = true;
	SSPCON1bits.SSPOV = false;
	SSPCON1bits.SSPEN = true;
	SSPCON1bits.CKP = false;
    return;
}

/**
 * @brief  Escritura de un byte en el puerto SPI
 * @param  Dato a enviar por el puerto - 1 byte
 * @retval None
 */
void SPIWriteByte(uint8_t dato) {
    
    PIR1bits.SSPIF = false;
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
    
    SPIWriteByte((uint8_t) (dato >> 8));
    SPIWriteByte((uint8_t) dato);
    return;
}

/**
 * @brief  Lectura de un byte en el puerto SPI
 * @param  None
 * @retval Valor leido en el bufer de entrada del puerto - 1 byte
 */
uint8_t SPIRead(void) {
    
    SSPCON1bits.WCOL = false;
    SSPBUF = VACIO;
    while(!SSPSTATbits.BF);
    return SSPBUF;
}
