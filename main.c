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
#include <string.h>

#include "main.h"
#include "hardware_config.h"
#include "drivers/inc/API_MRF24J40.h"
#include "drivers/inc/API_delay.h"
#include "drivers/inc/API_debounce.h"

#define ENCENDIDO   0
#define APAGADO     1

#define LOW_END_ADDR	(0x1111)
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
    
    mrf24_data_out_t data_out_s;
	data_out_s.dest_address = LOW_END_ADDR;
	data_out_s.dest_panid = 0x1234;
	data_out_s.origin_address = 0x4567;
    
    while(1) {

        CLRWDT();
        switch(DebounceFSMUpdate(&boton1,PULSADOR)) {

			case PRESIONO_BOTON:

                strcpy(data_out_s.buffer, "CMD:PLV");
                MRF24TransmitirDato(&data_out_s);
				break;

			case SUELTO_BOTON:

                strcpy(data_out_s.buffer, "CMD:ALV");
                MRF24TransmitirDato(&data_out_s);
				break;

			default:
                
                break;
		}
        
        if(MRF24IsNewMsg() == MSG_PRESENTE) {

            mrf24_data_in_t * mrf24_data_in = MRF24GetDataIn();
            MRF24ReciboPaquete();

			if(!strcmp(mrf24_data_in->buffer,"CMD:PLA")) {
                
				LED_AMARILLO = ENCENDIDO;
                strcpy(data_out_s.buffer, "Led encendido");
			} else if(!strcmp(mrf24_data_in->buffer,"CMD:ALA")) {
                
				LED_AMARILLO = APAGADO;
                strcpy(data_out_s.buffer, "Led apagado");
            } else if(!strcmp(mrf24_data_in->buffer,"CMD:PLR")) {
                
				LED_ROJO = ENCENDIDO;
                strcpy(data_out_s.buffer, "Led encendido");
            } else if(!strcmp(mrf24_data_in->buffer,"CMD:ALR")){
                
				LED_ROJO = APAGADO;
                strcpy(data_out_s.buffer, "Led apagado");
            } else {
                
                strcpy(data_out_s.buffer, "Cmd error.");
            }
            MRF24TransmitirDato(&data_out_s);
		}

        if(DelayRead(&delay_parpadeo)) {
            LED_VERDE = !LED_VERDE;
        }
    }
}
