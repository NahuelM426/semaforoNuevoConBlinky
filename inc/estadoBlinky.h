/*
 * estadoBlinky.h
 *
 *  Created on: 14 sep. 2019
 *      Author: nahuel
 */

#ifndef PROGRAMS_SEMAFORONUEVO_INC_ESTADOBLINKY_H_
#define PROGRAMS_SEMAFORONUEVO_INC_ESTADOBLINKY_H_


enum Estado{
	PRENDIDO,APAGADO
};

typedef struct blinky {
	int estado;
	int ultimoCambio;
} blinky;

void inciar(blinky * bs);
void controladorBlinky(blinky * bs);
void prender(blinky * bs);
#endif /* PROGRAMS_SEMAFORONUEVO_INC_ESTADOBLINKY_H_ */
