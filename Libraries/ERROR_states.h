#ifndef ERROR_STATES_H_
#define ERROR_STATES_H_

enum errorCodes_t
{
	/* GPIO ERROR STATES */
	WRONG_PIN  = 0x01,
	WRONG_PORT = 0x02,
	WRONG_MODE = 0x03,
	NO_ERRORS  = 0x04,
	
	/* ADC ERROR STATES */
	WRONG_CHANNEL = 0x11,
	WRONG_VREF    = 0x12,
	
	/* I2C ERROR STATES */
	I2C_MT_START_FAIL          = 0x41,
	I2C_MT_REPEATED_START_FAIL = 0x42,
	I2C_SLAVE_NOT_AVAILABLE    = 0x43,
	I2C_SLAVE_NOT_RECEIVED     = 0x44
};

#endif 