#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: has void return type; no return type
 */

void print_numbers(void)
{
	int num;

	num = 48;

	while(num <= 57)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
