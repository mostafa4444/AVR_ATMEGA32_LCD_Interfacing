/*
 * LCD_Interfacing.c
 *
 * Created: 5/2/2020 12:44:44 AM
 * Author : user
 */ 

#include "LCD.h"

// RS Used to know if the sent item is send Data 1 or Command 0
int main(void)
{
	
	char msg[] = {
	0b00000 , 
	0b00000,
	0b01010,
	0b00000,
	0b10001,
	0b01110,
	0b00000,
	0b00000
	};
	LCD_INIT();
	LCD_STRING("Interfacing LCD");
	//LCD_CharPos(2 , 5 , 'M');
	//LCD_StringPos(2 , 0 , " LCD");
	//LCD_SPChar(1 , msg);
	
    while (1) 
    {
    }
}

