#include "lcd.h"
#include "project.h"



int main(void) {
    lcd_init();
    lcd_print_line_str(0, "Rotary Encoder");

    QuadDec_1_Start();
    
    while(1) {
        lcd_print_line_str_int16(1, "encoder1", QuadDec_1_GetCounter());
        
        CyDelay(200);
    }
}
