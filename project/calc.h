#ifndef calc.h 
#define calc.h
#include "lcd.h"
#include "keypad.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



// function prototypes
void calculator (void);
int perform_operation(char* input);
char *strpbrk(const char *str1, const char *str2);


#endif