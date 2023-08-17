#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9.
 * skips numbers 2 and 4
 *
 * Return: has void return type; no return type
 */

void print_most_numbers(void)
{
	int num;

	num = 48;

	while (num <= 57)
	{
		if (num != 50 || num != 52)
			_putchar(num);
		num++;
	}
	_putchar('\n');
}
