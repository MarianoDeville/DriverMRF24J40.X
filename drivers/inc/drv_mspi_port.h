/**
  ******************************************************************************
  * @file    DriverMRF24J40.X/drivers/inc/drv_mspi_port.h
  * @author  Lcdo. Mariano Ariel Deville
  * @brief   Cabecera para modulo drv_mspi_port.c
  ******************************************************************************
  * @attention Plataforma: MPLAB X IDE v5.50
  *            Compilador: XC8 v2.50
  *
  ******************************************************************************
  */ 

/* Definido para evitar la inclusión recursiva -------------------------------*/
#ifndef HEADER_DRV_MSPI_PORT_H
#define	HEADER_DRV_MSPI_PORT_H

/* Includes ------------------------------------------------------------------*/
#include "../../redef_var.h"

/* Prototipo de funciones públicas -------------------------------------------*/
void spi_init(void);
void SPI_write(u_int_8 dato);
u_int_8 SPI_read(void);

#endif