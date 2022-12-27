#include "lcd.h"
#include <stdio.h>
//#include "inc/tm4c123gh6pm.h"
int main(void)
{
    // Set the system clock to run at 40 MHz
    SysCtlClockSet(SYSCTL_SYSDIV_5|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_OSC_MAIN);

    // Enable the GPIO port that the LCD is connected to
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);

    // Configure the LCD pins as outputs
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, LCD_RS|LCD_RW|LCD_E|LCD_D4|LCD_D5|LCD_D6|LCD_D7);

    // Initialize the LCD
    LCD_init();
    
    // Clear the LCD display
    LCD_clear();

    // Set the cursor to the first row, first column
    LCD_set_cursor(0, 0);

    // Write a string to the LCD
    LCD_write_string("Hello, World!");

    while(1)
    {
        // Loop forever
    }
}

