#include "main.h"
/**
 * print_number - prints numbers as they are
 * Description: does not use builtin functions,
 * uses function '_putchar'
 * @n: the number to print
 * 
 * Return: has no return value
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	i = n;

	if (i / 10)
		print_number(i / 10);

	_putchar(i % 10 + '0');
}
