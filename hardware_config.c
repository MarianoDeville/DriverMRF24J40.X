/**
 *******************************************************************************
 * @file    DriverMRF24J40.X/hardware_config.c
 * @author  Lcdo. Mariano Ariel Deville
 * @brief   Configuración del microcontrolador PIC 18F46K20
 *******************************************************************************
 * @attention
 *
 *******************************************************************************
 */

/* Includes ------------------------------------------------------------------*/
#include "hardware_config.h"
#include "drivers/inc//drv_mspi_port.h"

/**
 * @brief  Inicialización del hardware y periféricos del microcontrolador
 * @param  None
 * @retval None
 */
void BoardInit(void) {
    
    PORTA = 0;
    PORTB = 0;
    PORTC = 0;
    PORTD = 0;
    PORTE = 0;
    
    /* Configuración de los puertos ------------------------------------------*/
    PGC_IO = ENTRADA;
    PGD_IO = ENTRADA;
    LED_ROJO_IO = SALIDA;
    LED_VERDE_IO = SALIDA;
    LED_AMARILLO_IO = SALIDA;
    LED_ROJO = 1;
    LED_VERDE = 1;
    LED_AMARILLO = 1;

    /* Configuración de los registros del PIC --------------------------------*/
	GIE = 0;
	PEIE = 0;
	RBIE = 0;
	T0IE = 0;
	TMR1IE = 0;
	TMR2IE = 0;
	CCP1IE = 0;
	CCP2IE = 0;
	EEIE = 0;
	SSPIE = 0;
	BCLIE = 0;
	ADIE = 0;
	RBIE = 0;
	RCIE = 0;
    OSCCON = 0b01110010;
    OSCTUNE = 0b11011111;
    
    /* Inicializo periféricos ------------------------------------------------*/
    SPIInit();
    return;
}