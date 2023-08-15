#include "main.h"

/**
 * print_sign - checks whether a passed integer is +ve, -ve, or 0.
 * @n: number to be evaluated
 *
 * Description: this function takes a number, checks if its -ve, 0, or +ve
 * If number is positive, it returns 1 and prints a '+'
 * If number is negative, it returns -1 and prints a '-'
 * If number is 0, it returns 0 and prints a '0'
 *
 * Return: returns 1 if number is +ve, 0 if it's 0, and -1 if its -ve.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
