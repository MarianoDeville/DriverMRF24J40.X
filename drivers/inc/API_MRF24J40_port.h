/**
  ******************************************************************************
  * @file    DriverMRF24J40.X/drivers/inc/drv_mrf24j40_port.h
  * @author  Lcdo. Mariano Ariel Deville
  * @brief   Cabecera para modulo drv_mrf24j40_port.c
  ******************************************************************************
  * @attention Este archivo asegura la portabilidad del driver (API_MRF24J40.c)
  *
  ******************************************************************************
  */ 

/* Definido para evitar la inclusión recursiva -------------------------------*/
#ifndef INC_API_MRF24J40_PORT_H_
#define INC_API_MRF24J40_PORT_H_

/* Includes ------------------------------------------------------------------*/
#include "API_MSPI_port.h"
#include "../../compatibility.h"

#define _1_BYTE			(0x01)
#define _2_BYTES		(0x02)
#define TIME_OUT_SPI	100

/* Prototipo de funciones públicas -------------------------------------------*/
void InicializoPines(void);
void SetCSPin(bool_t estado);
void SetWakePin(bool_t estado);
void SetResetPin(bool_t estado);
bool_t IsMRF24Interrup(void);
void WriteByteSPIPort(uint8_t dato);
void Write2ByteSPIPort(uint16_t dato);
uint8_t ReadByteSPIPort(void);

#endif /* INC_API_MRF24J40_PORT_H_ */

