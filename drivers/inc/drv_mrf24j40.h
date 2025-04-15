/**
  ******************************************************************************
  * @file    DriverMRF24J40.X/drivers/inc/drv_mrf24j40.h
  * @author  Lcdo. Mariano Ariel Deville
  * @brief   Cabecera para modulo drv_mrf24j40.c
  ******************************************************************************
  * @attention Driver independiente de la plataforma de uso y del compilardor.
  *            Escrito en C.
  *
  ******************************************************************************
  */ 

/* Definido para evitar la inclusión recursiva -------------------------------*/
#ifndef HEADER_DRV_MRF24J40_H
#define HEADER_DRV_MRF24J40_H

/* Includes ------------------------------------------------------------------*/
#include "../../redef_var.h"

/* Definiciones de la configuración por defecto ------------------------------*/
#define	DEFAULT_CHANNEL     CH_11
#define DEFAULT_SEC_NUMBER  0X01
#define	MY_DEFAULT_PAN_ID	0x1234
#define	MY_DEFAULT_ADDRESS	0xDE11
#define	BROADCAST		(0xFFFF)

/* Prototipo de funciones públicas -------------------------------------------*/
void MRF24J40Init(void);
void EnviarDato(void);
void EnviarComando();
void EnviarDatoEncriptado(void);
void ReciboPaquete(void);
void BuscarDispositivos(void);
void SetMensajeSalida(const char * mensaje);
void SetDireccionDestino(uint16_t direccion);
void SetPANIDDestino(uint16_t panid);

#endif