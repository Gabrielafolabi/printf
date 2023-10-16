#include "main.h"
/**
 * printf_c - Function that prints character
 * @val: argument.
 * Return: 1 (success)
 */
int printf_c(va_list val)
{
va_list va_start va_arg va_end
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
