 /******************************************************************************
 *
 * Module: GPIO
 *
 * File Name: dio_reg.h
 *
 * Description: Header file for the AVR GPIO driver
 *
 * Author: Seif-Allah Magdy
 *
 *******************************************************************************/

#ifndef DIO_REG_H_
#define DIO_REG_H_
#include"../std_types.h"
/*******************************************************************************
 *                                Registers                                  *
 *******************************************************************************/

#define DIO_DDRA_REG        (*(volatile uint8 *) (0X3A))
#define DIO_DDRB_REG        (*(volatile uint8 *) (0X37))
#define DIO_DDRC_REG        (*(volatile uint8 *) (0X34))
#define DIO_DDRD_REG        (*(volatile uint8 *) (0X33))

#define DIO_PORTA_REG        (*(volatile uint8 *) (0X3B))
#define DIO_PORTB_REG        (*(volatile uint8 *) (0X38))
#define DIO_PORTC_REG        (*(volatile uint8 *) (0X35))
#define DIO_PORTD_REG        (*(volatile uint8 *) (0X32))

#define DIO_PINA_REG        (*(volatile uint8 *) (0X39))
#define DIO_PINB_REG        (*(volatile uint8 *) (0X36))
#define DIO_PINC_REG        (*(volatile uint8 *) (0X33))
#define DIO_PIND_REG        (*(volatile uint8 *) (0X30))
#endif /* DIO_REG_H_ */
