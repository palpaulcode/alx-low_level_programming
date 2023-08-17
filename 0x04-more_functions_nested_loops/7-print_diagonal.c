#include "main.h"

/**
 * print_diagonal - prints a diagonal line in the terminal
 * @n: the length of the line
 *
 * Return: has no return type
 */

void print_diagonal(int n)
{
	int len = 0, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (len < n)
		{
			space = 0;

			for (; space < len; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			len++;
		}
	}
}
