#include "main.h"
/**
 * printf_c - Function that prints character
 * @val: argument.
 * Return: 1 (success)
 */
int printf_c(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
