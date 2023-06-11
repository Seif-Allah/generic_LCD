/*
 * app.c
 *
 *  Created on: Jun 11, 2023
 *      Author: a
 */
#include"../HAL/lcd.h"

int main ()
{
	LCD_init();
	LCD_displayStringRowColumn(0,2,"Welcome to NTI");
	LCD_displayStringRowColumn(1,3,"SEITech Group");
	while (1)
	{

	}
}
