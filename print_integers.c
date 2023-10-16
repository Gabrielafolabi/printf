#include "main.h"
/**
 * _interger - function that print integers
 * @args: Argument to be printed
 * Return: Number of char
 */


int _interger(va_list args)
{
	int b = va_arg(args, int);
	int a = 1, exp = 1;
	int num , last = b % 10, integer, expo = 1;


	b = b / 10;
	num = b;

	if (last < 0)
	{	
		_putchar('_');
		num = -num;
		b = -b;
		last = -last;
		a++;
	}
	if (num > 0)
	{
	
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		
		}
		num = b;
		while (exp > 0)
		{
			integer = num / exp;
			_putchar(integer + '0');
			num = num - (integer * exp);
			exp = exp /10;
			a++;
		
		}
	
	}	
	_putchar(last + '0');

	return (a);
}



#include "main.h"

/**
 * _decimal - Function that prints decimal
 * @args: Argument to be printed
 * Return: Number of char
 */



int _decimal(va_list args)
{
	int b = va_arg(args, int);
        int a = 1, exp = 1;
        int num , last = b % 10, integer, expo = 1;


        b = b / 10;
        num = b;

        if (last < 0)
        {
                _putchar('_');
                num = -num;
                b = -b;
                last = -last;
                a++;
        }
        if (num > 0)
        {

                while (num / 10 != 0)
                {
                        exp = exp * 10;
                        num = num / 10;

                }
		num = b;
                while (exp > 0)
                {
                        integer = num/exp;
                        _putchar(integer + '0');
                        num = num - (integer * exp);
                        exp = exp /10;
                        a++;

                }

        }
        _putchar(last + '0');

        return (a);
		

}

