#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9.
 * skips numbers 2 and 4
 *
 * Return: has void return type; no return type
 */

void more_numbers(void)
{
	int num, i;

	for (i = 1; i <= 10; i++)
	{
		num = 0;
		while (num < 15)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
			num++;
		}
		_putchar('\n');
	}
}
