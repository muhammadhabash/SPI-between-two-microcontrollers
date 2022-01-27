#include "MCAL/SPI/SPI_interface.h"
#include "MCAL/GPIO/GPIO.h"


int main(void)
{
	PORTA_DIRECTION = SET_OUTPUT;
	SPI_init();
	
	while (1)
	{
		PORTA_DATA = SPI_slaveReceive();
	}
}


