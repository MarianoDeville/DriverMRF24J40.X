/**
  ******************************************************************************
  * @file    DriverMRF24J40.X/redef_var.h
  * @author  Lcdo. Mariano Ariel Deville
  * @brief   Cabecera para definir portabilidad
  ******************************************************************************
  * @attention
  *
  ******************************************************************************
  */ 

/* Definido para evitar la inclusión recursiva -------------------------------*/
#ifndef HEADER_REDEFINICION_VARIABLES_H
#define	HEADER_REDEFINICION_VARIABLES_H

/* Includes ------------------------------------------------------------------*/
#include <stdbool.h>
#include <stdint.h>
#include "hardware_config.h"

/* Macros --------------------------------------------------------------------*/
#define VACIO           (0X00)

/* Typedef -------------------------------------------------------------------*/
typedef bool bool_t;

/* Define --------------------------------------------------------------------*/
#define delay_t(x) __delay_ms(x);
#define delayus_t(x) __delay_us(x);

/**
 * Respuestas de las funciones de envío de datos.
 */
typedef enum {

	OK,
	BUFFER_VACIO,
	SIN_DATOS,
	ERROR_SIZE,
	ERROR_TRANSMISION,
}Estado_TX_RX;

#endif
