#include "main.h"

/**
 * printf_s - function that print a string
 * @val: argument.
 * Return: String length
 */


int printf_s(va_list val)
{

	char *str;
	int i;
	int length;

	str = va_arg(val, char*);
	if (str == NULL)
	{
		str = "(NULL)";
		length = _strlen (str);
		
		i = 0;
		while (i < length)
		{
			_putchar(str[i]);
			i++;
		
		}
		return (length);	
	
	}
	else
	{
		length = _strlen(str);

		i = 0;
		while (i < length)
		{
			_putchar(str[i]);
			i++;
		
		}
		return (length);
	
	}

}
