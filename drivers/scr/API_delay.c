/*
 * delay_no_bloqueante.c
 *
 *  Created on: Mar 20, 2025
 *      Author: Mariano Deville
 */
#include "../inc/API_delay.h"

extern unsigned long timeStamp;

/**
 * Prototipo de funciones privadas.
 */
static bool_t DelayIsRunning(delayNoBloqueanteData * delay);

/**
  * @brief  Inicializa el delay no bloqueante.
  * @param  Puntero a la estructura con las variables.
  * @param  Duración del delay.
  * @retval None
  */
void DelayInit(delayNoBloqueanteData * delay, tick_t duration) {

	delay->duration = duration;
	delay->running = false;
	return;
}

/**
  * @brief  Obtengo el estado del delay.
  * @param  Duración del delay.
  * @retval Estado del delay (contando / tiempo cumplido).
  */
bool_t DelayRead(delayNoBloqueanteData * delay) {

	if(DelayIsRunning(delay) == false) {

		delay->startTime = timeStamp;
		delay->running = true;
	} else {

		if((timeStamp - delay->startTime) >= delay->duration) {

			delay->running = false;
			return true;
		}
	}
	return false;
}

/**
  * @brief  Redefino el tiempo de delay.
  * @param  Puntero a la estructura con las variables.
  * @param  Duración del delay.
  * @retval None
  */
void DelayWrite( delayNoBloqueanteData * delay, tick_t duration) {

	delay->duration = duration;
	return;
}

/**
  * @brief  Reseteo la cuenta del tiempo
  * @param  Puntero a la estructura con las variables.
  * @retval None
  */
void DelayReset( delayNoBloqueanteData * delay) {

	delay->startTime = timeStamp;
	delay->running = true;
	return;
}

/**
  * @brief  Consulto el estado del delay.
  * @param  Puntero a la estructura con las variables.
  * @retval Estado del delay (contando / tiempo cumplido).
  * @note	En el trabajo práctico la define como función pública, pero para mejorar
  * 		el encapsulamiento la defino como privada ya que solo se utiliza en el
  * 		ámbito de este archivo.
  */
static bool_t DelayIsRunning(delayNoBloqueanteData * delay) {

	return delay->running;
}
