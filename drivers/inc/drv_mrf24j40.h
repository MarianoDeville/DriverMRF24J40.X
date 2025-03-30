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

/* Prototipo de funciones públicas -------------------------------------------*/
void MRF24J40Init();
void EnviarDato(void);
void EnviarComando();
void EnviarDatoEncriptado(void);
void ReciboPaquete(void);
void BuscarDispositivos(void);
void SetMensajeSalida(const char * mensaje);
#endif