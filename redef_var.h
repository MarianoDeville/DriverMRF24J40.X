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

/* Includes ------------------------------------------------------------------*/
typedef bool booleano;
typedef unsigned char u_char;
typedef char int_8;
typedef unsigned char u_int_8;
typedef int int_16;
typedef unsigned int u_int_16;
typedef long int_32;
typedef unsigned long u_int_32;

/* Includes ------------------------------------------------------------------*/
#define DelayDrvMRF24j40ms(x) __delay_ms(x);
#define DelayDrvMRF24j40us(x) __delay_us(x);

#endif
