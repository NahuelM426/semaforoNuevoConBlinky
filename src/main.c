
#include "semaforoEstados.h"
#include "estadoBlinky.h"
#include <sapi.h>

void main(void){

	boardConfig();
ControladorSemaforo cs;
blinky bs;
controladorSemaforo_inciar(&cs);
inciar(&bs);

	while (1){
		controladorSemaforo_UpDate(&cs);
		controladorSemaforo_Prender(&cs);
		delay(500);
		controladorBlinky(&bs);
	    prender(&bs);

	}




}




