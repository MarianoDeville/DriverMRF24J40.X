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
#define MAX_LONG_CMD    10

static void envio(void);
/**
 * @brief  Main program
 * @param  None
 * @retval None
 */
void main(void) {
    
    delayNoBloqueanteData_t delay_parpadeo;
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
                envio();
				break;

			default:
                break;
		}
        
        if(MRF24IsNewMsg() == MSG_PRESENT) {

            mrf24_data_in_t * mrf24_data_in = MRF24GetDataIn();
            MRF24ReciboPaquete();
/*
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
*/		}

        if(DelayRead(&delay_parpadeo)) {
            LED_VERDE = !LED_VERDE;
        }
    }
}

static void envio(void) {
    
    mrf24_data_out_t data_out_s = {0};
    mrf24_data_config_t data_config_s = {0};
    // DATOS DE ENVÍO
    data_out_s.dest_address = LOW_END_ADDR;
	data_out_s.dest_panid = 0x1234;
	data_out_s.origin_address = 0x4567;
    // CONFIGURACIÓN A ENVIAR
    data_config_s.my_channel = CH_11;
    data_config_s.my_address = LOW_END_ADDR;
    data_config_s.my_panid = 0x1234;
    data_config_s.intervalo = 0xf7;
    char buuf[sizeof(data_config_s) + MAX_LONG_CMD] = {"MRFCNF:"};
    
    uint8_t size = strlen(buuf);
    
    memcpy(buuf + size, &data_config_s, sizeof(data_config_s));
    
    size += sizeof(data_config_s);
    // CARGO EN EL BUFFER DE SALIDA LA ESTRUCTURA
    memcpy(data_out_s.buffer, buuf, size);
    data_out_s.buffer_size = size;
    
    MRF24TransmitirDato(&data_out_s);
    return;
    
}