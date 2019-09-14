
#include "estadoBlinky.h"
#include <sapi.h>

void inciar(blinky * bs){
	bs->estado = PRENDIDO;
	bs->ultimoCambio =  tickRead();
}
void controladorBlinky(blinky * bs){
	int tickActual = tickRead();
	int tiempoPasado = tickActual - bs->ultimoCambio;

	switch(bs->estado){
		case APAGADO :{
			if(tiempoPasado >= 100){
				bs->estado=PRENDIDO;
				bs->ultimoCambio=tickActual;
			}break;
		}
		case PRENDIDO :{
			if(tiempoPasado >= 200){
				bs->estado=APAGADO;
				bs->ultimoCambio=tickActual;
			}break;
		}
	}
}

void prender(blinky * bs){

	switch(bs->estado){

	case PRENDIDO:{
			gpioWrite( LEDB, ON );
		}break;
	case APAGADO:{
			gpioWrite( LEDB, OFF );
		}break;
	}
}
