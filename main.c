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
#include "drivers/inc/API_MRF24J40.h"
#include "drivers/inc/API_delay.h"
#include "drivers/inc/API_debounce.h"

/**
 * @brief  Main program
 * @param  None
 * @retval None
 */
void main(void) {
    
    delayNoBloqueanteData delay_parpadeo;
    debounceData_t boton1;
	debounceFSM_init(&boton1);
    BoardInit();
    MRF24J40Init();
    DelayInit(&delay_parpadeo, 1000);
    SetDireccionDestino(0x1111);
    SetPANIDDestino(0X1234);
    
    while(1) {

        CLRWDT();
        switch(debounceFSM_update(&boton1,PULSADOR)) {

			case PRESIONO_BOTON:

                LED_ROJO = 0;
                SetMensajeSalida("CMD:PLV");
                EnviarDato();
				break;

			case SUELTO_BOTON:

                LED_ROJO = 1;
                SetMensajeSalida("CMD:ALV");
                EnviarDato();
				break;

			default:
                
                break;
		}
        
        if(DelayRead(&delay_parpadeo)) {
            LED_VERDE = !LED_VERDE;
        }
    }
}
