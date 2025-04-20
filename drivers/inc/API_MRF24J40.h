/**
 *******************************************************************************
 * @file    API_MRF24J40.h
 * @author  Lcdo. Mariano Ariel Deville
 * @brief	Archivo cabecera para el archivo API_MRF24J40.c
 *******************************************************************************
 * @attention Driver independiente de la plataforma de uso y del compilardor.
 *            Escrito en C.
 *
 *******************************************************************************
 */
#ifndef INC_API_MRF24J40_H_
#define INC_API_MRF24J40_H_

/* Macros --------------------------------------------------------------------*/
#define	BROADCAST		(0xFFFF)
#define MRF_TIME_OUT	100
#define ENABLE			true
#define	DISABLE			false

/* Canales disponibles para el IEEE 802.15.4 ---------------------------------*/
typedef enum {

    CH_11 = 0x03,
    CH_12 = 0x13,
    CH_13 = 0x23,
	CH_14 = 0x33,
	CH_15 = 0x43,
	CH_16 = 0x53,
	CH_17 = 0x63,
	CH_18 = 0x73,
	CH_19 = 0x83,
	CH_20 = 0x93,
	CH_21 = 0xA3,
	CH_22 = 0xB3,
	CH_23 = 0xC3,
	CH_24 = 0xD3,
	CH_25 = 0xE3,
	CH_26 = 0xF3
} channel_list;

/* Respuesta de las funciones ------------------------------------------------*/
typedef enum {

	TRANSMISION_REALIZADA,
	TIME_OUT_OCURRIDO,
	OPERACION_NO_REALIZADA,
	OPERACION_REALIZADA
} MRF24_StateTypeDef;

/* Prototipo de funciones públicas -------------------------------------------*/
MRF24_StateTypeDef MRF24J40Init(void);
void SetMensajeSalida(const char * mensaje);
void SetDireccionDestino(uint16_t direccion);
void SetPANIDDestino(uint16_t panid);
void EnviarDato(void);
bool_t MRF24IsNewMsg(void);
void ReciboPaquete(void);
char * GetMensajeEntrada(void);


void EnviarComando();
void EnviarDatoEncriptado(void);
void BuscarDispositivos(void);


#endif /* INC_API_MRF24J40_H_ */
