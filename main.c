#include "lcd.h"
#include "project.h"

int main(void) {
    lcd_init();
    lcd_print_line_str(0, "Rotary Encoder");

    while(1) {
    }
}
