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
    
    BoardInit();
    MRF24J40Init();
    
    SetMensajeSalida("Hola mundo.");
    SetDireccionDestino(0XFFFF);
    SetPANIDDestino(0X1234);
    
    while(1){

        CLRWDT();
        LED_VERDE = !LED_VERDE;
        delayms_t(750);
        EnviarDato();
    }
}
