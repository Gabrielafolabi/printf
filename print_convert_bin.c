#include "main.h"

/**
 * _binary - function that convert to binary
 * @val: argument.
 * Return: integer
 */

int _binary(va_list val)
{

	int alert = 0;
	int counter = 0;
	int x; 
	int y = 1;
	int z;
	unsigned int digit = va_arg(val, unsigned int);
	unsigned int temp;


	for (i = 0; i < 32; i++)
	{
		temp = ((a << (32 - i); & digit);

		if (temp >> (31 - i))
		
			alert = 1;
		
		if (alert)
		{
			z = temp >> (31 - i);
			_putchar(z + 48);
			counter++;
		}
	}
	if (counter == 0)
	{
		counter++;
		_putchar('0');
	}
	return (counter);
	
	
}
