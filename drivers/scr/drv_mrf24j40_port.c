/**
 *******************************************************************************
 * @file    DriverMRF24J40.X/drivers/src/drv_mrf24j40port.c
 * @author  Lcdo. Mariano Ariel Deville
 * @brief   Implementación driver módulo MRF24J40MA
 *******************************************************************************
 * @attention Este archivo asegura la portabilidad del driver (drv_mrf24j40.c)
 *
 *******************************************************************************
 */

/* Includes ------------------------------------------------------------------*/
#include "../inc/drv_mrf24j40_port.h"
#include "../../hardware_config.h"

/**
 * @brief  Inicialización del hardware relacionado con el módulo
 * @param  None
 * @retval None
 */
void InicializoPines(void){
    
    MRF24_INT_IO = ENTRADA;
    MRF24_CS_IO = SALIDA;
    MRF24_WAKE_IO = SALIDA;
    MRF24_RESET_IO = SALIDA;
    SetCSPin(1);
    SetWakePin(1);
    SetResetPin(0);
    return;
}

/**
 * @brief  Escribo en el pin destinado a CS
 * @param  Estado de salida - booleano
 * @retval None
 */
void SetCSPin(bool_t estado){
    
    MRF24_CS = estado;
    return;
}

/**
 * @brief  Escribo en el pin destinado a Wake
 * @param  Estado de salida - booleano
 * @retval None
 */
void SetWakePin(bool_t estado){
    
    MRF24_WAKE = estado;
    return;
}

/**
 * @brief  Escribo en el pin destinado a Reset
 * @param  Estado de salida - booleano
 * @retval None
 */
void SetResetPin(bool_t estado){
    
    MRF24_RESET = estado;
    return;
}

/**
 * @brief  Escribo en el puerto SPI
 * @param  Dato - 1 byte
 * @retval None
 */
void WriteByteSPIPort(uint8_t dato){
    
    SPIWriteByte(dato);
    return;
}

/**
 * @brief  Escribo en el puerto SPI
 * @param  Dato - 1 byte
 * @retval None
 */
void Write2ByteSPIPort(uint16_t dato){
    
    SPIWrite2Byte(dato);
    return;
}

/**
 * @brief  Leo en el puerto SPI
 * @param  None
 * @retval Dato - 1 byte
 */
uint8_t ReadByteSPIPort(void){
    
    return SPIRead();
}





















