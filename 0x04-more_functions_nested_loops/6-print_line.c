#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: the length of the line
 *
 * Return: has no return type
 */

void print_line(int n)
{
	int len = 0;

	while (len < n)
	{
		_putchar('_');
		len++;
	}
	_putchar('\n');
}
