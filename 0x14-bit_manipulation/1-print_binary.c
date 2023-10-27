#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to print binary of
 *
 * Return: void (nothing)
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int num;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	num = n;

	while ((num >>= 1) > 0)
		i++;

	while (i >= 0)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
		i--;
	}
}
