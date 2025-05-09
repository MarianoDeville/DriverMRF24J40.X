/**
******************************************************************************
 * @file    API_debounce.h
 * @author  Lcdo. Mariano Ariel Deville
 * @brief   Archivo cabecera para la implementaci�n driver antirrebote
 *******************************************************************************
 * @attention
 *
 *******************************************************************************
 */

#ifndef API_INC_API_DEBOUNCE_H_
#define API_INC_API_DEBOUNCE_H_

#include "API_delay.h"

/**
 * Estados posibles de la m�quina de estados.
 */
typedef enum {

	BUTTON_UP,
	BUTTON_FALLING,
	BUTTON_DOWN,
	BUTTON_RAISING,
} debounceState_t;

/**
 * Respuestas de la m�quina de estados.
 */
typedef enum {

	ERROR_ANTI_REBOTE,
	PRESIONO_BOTON,
	SUELTO_BOTON,
	BOTON_SIN_CAMBIOS,
	RUIDO,
} estadoPulsador_t;

/**
 * Estructura defina para el manejo del antirrebote.
 */
typedef struct {

	bool_t tecla_fue_presionada;
	debounceState_t estadoActual;
	delayNoBloqueanteData delay_anti_rebote;
} debounceData_t;

/**
 * Prototipo de funciones p�blicas.
 */
void DebounceFSMInit(debounceData_t * antirrebote_boton_n);
estadoPulsador_t DebounceFSMUpdate(debounceData_t * antirrebote_boton_n, bool_t estado_pin);

#endif /* API_INC_API_DEBOUNCE_H_ */
