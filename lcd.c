#include "lcd.h"

#include <stdio.h>

void lcd_init(void) {
    LCD_Char_1_Start();

    LCD_Char_1_Position(0, 0);
    LCD_Char_1_PrintString("                    ");

    LCD_Char_1_Position(1, 0);
    LCD_Char_1_PrintString("                    ");

    LCD_Char_1_Position(2, 0);
    LCD_Char_1_PrintString("                    ");

    LCD_Char_1_Position(3, 0);
    LCD_Char_1_PrintString("                    ");
}

void lcd_print_line_str(uint8_t line, char8* str) {
    // blank line
    LCD_Char_1_Position(line, 0);
    LCD_Char_1_PrintString("                    ");

    // print line
    LCD_Char_1_Position(line, 0);
    LCD_Char_1_PrintString(str);
}

void lcd_print_line_str_float(uint8_t line, char8* str_in, float number) {
    int32_t num_whole = (int32_t)number;
    int32_t num_fractional = (int32_t)(number * 100) % 100;
    if(num_fractional < 0) {
        num_fractional = num_fractional * -1;
    }

    char8 str[21] = {0};
    sprintf(str, "%s %ld.%02ld", str_in, num_whole, num_fractional);

    // blank line
    LCD_Char_1_Position(line, 0);
    LCD_Char_1_PrintString("                    ");

    // print line
    LCD_Char_1_Position(line, 0);
    LCD_Char_1_PrintString(str);
}