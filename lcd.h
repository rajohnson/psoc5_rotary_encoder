#ifndef __LCD_H__
#define __LCD_H__
    
#include "project.h"

void lcd_init(void);
void lcd_print_line_str(uint8_t line, char8* str);
void lcd_print_line_str_float(uint8_t line, char8* str_in, float number);
void lcd_print_line_str_int16(uint8_t line, char8* str_in, int16 number);

#endif  // __LCD_H__