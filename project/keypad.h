#ifndef keypad.h 
#define keypad.h

#include <stdio.h>
#include <string.h>
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"

// define constants for keypad rows and columns
#define KEYPAD_ROWS 4
#define KEYPAD_COLUMNS 4

// define constants for keypad row and column pins
#define KEYPAD_ROW1_PIN GPIO_PIN_0
#define KEYPAD_ROW2_PIN GPIO_PIN_1
#define KEYPAD_ROW3_PIN GPIO_PIN_2
#define KEYPAD_ROW4_PIN GPIO_PIN_3
#define KEYPAD_COL1_PIN GPIO_PIN_4
#define KEYPAD_COL2_PIN GPIO_PIN_5
#define KEYPAD_COL3_PIN GPIO_PIN_6
#define KEYPAD_COL4_PIN GPIO_PIN_7

// define constants for keypad ports
#define KEYPAD_ROW_PORT GPIO_PORTB_BASE
#define KEYPAD_COL_PORT GPIO_PORTB_BASE

// define constants for keypad buttons
#define KEY_A 'A'
#define KEY_B 'B'
#define KEY_C 'C'
#define KEY_D 'D'
#define KEY_STAR '*'
#define KEY_HASH '#'


// function prototypes
void init_keypad();
char get_key();



#endif