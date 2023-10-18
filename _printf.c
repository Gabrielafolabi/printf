#include "main.h"
/**
 * _printf - function that handles format specifiers
 * @format: constant pointer
 * Return: Character input
 */
int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	int print_char = 0, len;
	char *str, c;
	va_list args;


	va_start(args, format);
	if (*format == ' ')
	return (1);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			print_char++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				print_char++;
			}
			else if (*format == 'c')
			{
				c = va_arg(args, int);

				write(1, &c, 1);
				print_char++;
			}
			else if (*format == 's')
			{
				str = va_arg(args, char*);

				for (len = 0; str[len] != '\0'; len++)
				{
					write(1, str, 1);
					print_char += len;
				}
			}
		}

		format++;
	}
	va_end(args);
	return (print_char);
}
