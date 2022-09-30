#ifndef INTERFACE_
#define INTERFACE_

//DEFINITONS FOR PORT DIRECTION AND STATE
enum PINS {PIN0, PIN1, PIN2, PIN3, PIN4, PIN5, PIN6, PIN7};
enum PORTS{PORTA_,PORTB_,PORTC_,PORTD_};


#define PORT_INPUT 0x00
#define PORT_OUTPUT 0xFF

#define PORT_HIGH 0xFF
#define PORT_LOW 0x00


#define INPUT 0
#define OUTPUT 1

#define HIGH 1
#define LOW 0 



enum ERROR_CHECK DIO_SETDIR_PORT(uint8 PORT, uint8 DIR);

enum ERROR_CHECK DIO_SETVAL_PORT(uint8 PORT, uint8 VAL);

enum ERROR_CHECK DIO_SETDIR_PIN(uint8 PORT,uint8 PIN, uint8 DIR);

enum ERROR_CHECK DIO_SETVAL_PIN(uint8 PORT,uint8 PIN, uint8 VAL);

enum ERROR_CHECK DIO_GETVAL(uint8 PORT,uint8 PIN, uint8* VAL);

#endif
