#ifndef MAIN_H
#define MAIN_H



#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
typedef struct format
{
	char *pd;
	int (*fn)();

} match;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_c(va_list val);
int _strlenchar(const char * str);
int _strlen(char *str);
int print_37(void);
int _decimal(va_list args);
int _interger(va_list args);
int _binary(va_list val);
int printf_s(va_list val);









#endif
