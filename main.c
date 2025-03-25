/**
 *******************************************************************************
 * @file    DriverMRF24J40.X/main.c
 * @author  Lcdo. Mariano Ariel Deville
 * @brief   Ejemplo de uso del módulo SPI MRF24J40MA
 *******************************************************************************
 * @attention
 *
 *******************************************************************************
 */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "hardware_config.h"
#include "redef_var.h"
#include "drivers/inc/drv_mrf24j40.h"

/**
 * @brief  Main program
 * @param  None
 * @retval None
 */
void main(void) {
    
    board_init();
    MRF24J40Init();
    
    while(1){
        
        CLRWDT();
        LED_ROJO = !LED_ROJO;
        DelayDrvMRF24j40ms(250);
        LED_AMARILLO = !LED_AMARILLO;
        DelayDrvMRF24j40ms(250);
        LED_VERDE = !LED_VERDE;
        DelayDrvMRF24j40ms(250);
        
        EnviarDato();
    }
}
