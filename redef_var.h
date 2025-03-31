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
#include "hardware_config.h"

/* Typedef -------------------------------------------------------------------*/
typedef bool bool_t;

/* Define --------------------------------------------------------------------*/
#define delayms_t(x) __delay_ms(x);
#define delayus_t(x) __delay_us(x);

/* Macros --------------------------------------------------------------------*/
#define VACIO           0X00

#endif
