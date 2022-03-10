/* 
 * File:   LCD.h
 * Author: PC
 *
 * Created on 8 de marzo de 2022, 03:29 PM
 */




#ifndef LCD_H
#define	LCD_H

#ifdef	__cplusplus
extern "C" {
#endif


#include <xc.h> // include processor files - each processor file is guarded.  

#include <pic18f4550.h>
#include "Config.h"
    

   
#define CMD_CLEAR_LCD 0x01
    
void LCD_Init();                    /*Initialize LCD*/
void LCD_Command(unsigned char );   /*Send command to LCD*/
void LCD_Char(unsigned char x);     /*Send data to LCD*/
void LCD_String(const char *);      /*Display data string on LCD*/
void LCD_String_xy(char, char , const char *);
void LCD_Clear(); 


#ifdef	__cplusplus
}
#endif

#endif	/* LCD_H */

