#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @l: number whose last digit is to be printed
 *
 * Return: returns last digit of the number
 */

int print_last_digit(int l)
{
	l = l % 10;

	if (l < 0)
	{
		l = l * (-1);
	}

	_putchar(l + '0');

	return (l);
}
