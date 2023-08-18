#include "main.h"

/**
 * print_number - prints an integer
 *
 * Return: has void return type
 */

void print_number(int n)
{

	if (n < 10)
	{
		_putchar((n % 10) + '0');
	}
	else if (n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 1000)
	{
		_putchar((n / 100) + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar((n / 1000) + '0');
                _putchar(((n / 100) % 100 ) / 10 + '0');
		_putchar((n / 10) %10 + '0');
		_putchar((n % 10) + '0');
	}
}
