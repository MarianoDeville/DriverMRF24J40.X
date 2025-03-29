/**
  ******************************************************************************
  * @file    DriverMRF24J40.X/drivers/inc/drv_mrf24j40_port.h
  * @author  Lcdo. Mariano Ariel Deville
  * @brief   Cabecera para modulo drv_mrf24j40_port.c
  ******************************************************************************
  * @attention 
  *
  ******************************************************************************
  */ 

/* Definido para evitar la inclusión recursiva -------------------------------*/
#ifndef HEADER_DRV_MRF24J40_PORT_H
#define	HEADER_DRV_MRF24J40_PORT_H

/* Includes ------------------------------------------------------------------*/
#include "drv_mspi_port.h"
#include "../../redef_var.h"

/* Prototipo de funciones públicas -------------------------------------------*/
void InicializoPines(void);
void SetCSPin(bool_t estado);
void SetWakePin(bool_t estado);
void SetResetPin(bool_t estado);
void WriteByteSPIPort(uint8_t dato);
void Write2ByteSPIPort(uint16_t dato);
uint8_t ReadByteSPIPort(void);

#endif

