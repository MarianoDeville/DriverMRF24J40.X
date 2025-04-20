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

#define ENCENDIDO   1
#define APAGADO     0
/**
 * @brief  Main program
 * @param  None
 * @retval None
 */
void main(void) {
    
    delayNoBloqueanteData delay_parpadeo;
    debounceData_t boton1;
	DebounceFSMInit(&boton1);
    BoardInit();
    MRF24J40Init();
    DelayInit(&delay_parpadeo, 1000);
    MRF24SetDireccionDestino(0x1111);
    MRF24SetPANIDDestino(0X1234);
    
    while(1) {

        CLRWDT();
        switch(DebounceFSMUpdate(&boton1,PULSADOR)) {

			case PRESIONO_BOTON:

                LED_ROJO = 0;
                MRF24SetMensajeSalida("CMD:PLV");
                MRF24TransmitirDato();
				break;

			case SUELTO_BOTON:

                LED_ROJO = 1;
                MRF24SetMensajeSalida("CMD:ALV");
                MRF24TransmitirDato();
				break;

			default:
                
                break;
		}
        
        if(MRF24IsNewMsg()) {

            MRF24ReciboPaquete();

			if(!strcmp((char *)MRF24GetMensajeEntrada(),"CMD:PLA"))
				LED_VERDE = ENCENDIDO;

			else if(!strcmp((char *)MRF24GetMensajeEntrada(),"CMD:ALA"))
				LED_VERDE = ENCENDIDO;

            else if(!strcmp((char *)MRF24GetMensajeEntrada(),"CMD:PLR"))
				LED_VERDE = ENCENDIDO;
            
            else if(!strcmp((char *)MRF24GetMensajeEntrada(),"CMD:ALR"))
				LED_VERDE = ENCENDIDO;
		}
        
        if(DelayRead(&delay_parpadeo)) {
            LED_VERDE = !LED_VERDE;
        }
    }
}
