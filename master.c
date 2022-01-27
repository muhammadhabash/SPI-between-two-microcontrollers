#include "MCAL/SPI/SPI_interface.h"

int main(void)
{
	SPI_init();
	
    while (1) 
    {
		SPI_masterTransmit('A');
    }
}

