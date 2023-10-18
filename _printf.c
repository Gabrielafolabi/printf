#include "main.h"
/**
 * _printf - function that handles format specifiers
 * @format: constant pointer
 * Return: Character input
 */
int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	int print_char = 0;
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
				char c = va_arg(args, int);

				write(1, &c, 1);
				print_char++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				int len;
				for (len = 0; str[len] != '\0'; len++)
				{
					write(1, &str[len], len);
					print_char += len;
				}
			}
		}

		format++;
	}
	va_end(args);
	return (print_char);
}
