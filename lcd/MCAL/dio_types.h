 /******************************************************************************
 *
 * Module: GPIO
 *
 * File Name: dio_types.h
 *
 * Description: Header file for the AVR GPIO driver
 *
 * Author: Seif-Allah Magdy
 *
 *******************************************************************************/

#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_

/*******************************************************************************
 *                               Types Declaration                             *
 *******************************************************************************/
typedef enum
{
	PIN_INPUT,
	PIN_OUTPUT
}GPIO_PinDirectionType;

typedef enum
{
	PORT_INPUT,
	PORT_OUTPUT=0xFF
}GPIO_PortDirectionType;

#endif /* DIO_TYPES_H_ */
