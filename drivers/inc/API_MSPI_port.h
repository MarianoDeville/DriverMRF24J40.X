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
#include "../../compatibility.h"

/* Prototipo de funciones públicas -------------------------------------------*/
void SPIInit(void);
void SPIWriteByte(uint8_t dato);
void SPIWrite2Byte(uint16_t dato);
uint8_t SPIRead(void);

#endif