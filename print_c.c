#include "main.h"
/**
 * printf_c - A Function that prints a singel character
 * to the standard output
 * @format: An argument pointer
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	char print_char = 0;
	va_list args;

	if (*format == NULL)
		return (1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			print_char++;
		}
		else
		{
			format++; /*check the next chararcter*/
			if (*format =='\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				print_char++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args, int);
				write (1, &c, 1);
				print_char++;
			}
			else if (*format == 's')
			{
				len = 0;
				char *str = va_arg(args, char*);
				for (len = 0; str[len] != '\0'; str++)
				{


	}
}
