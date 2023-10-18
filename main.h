#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <stdio.h>


int _printf(const char *format, ...);
int printf_c(va_list val);
int _strlenchar(const char * str);
int _strlen(char *str);
int _decimal(va_list args);
int _interger(va_list args);
int _binary(va_list val);
int printf_s(va_list val);

#endif
