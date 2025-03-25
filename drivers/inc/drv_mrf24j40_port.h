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
void SetCSPin(booleano estado);
void SetWakePin(booleano estado);
void SetResetPin(booleano estado);
void WriteByteSPIPort(u_int_8 dato);
void Write2ByteSPIPort(u_int_16 dato);
u_int_8 ReadByteSPIPort(void);

#endif

