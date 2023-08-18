#include "main.h"

/**
 * print_triangle - prints a triangle in the terminal
 * @n: the length of the triangle
 *
 * Return: has no return type
 */

void print_triangle(int n)
{
	int len = 0, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (len < n + 1)
		{
			for (space = n - len; space > 0; space--)
			{
				_putchar(' ');
			}
			for (space = 0; space < len; space++)
			{
				_putchar(35);
			}
			/* _putchar(35); */
			_putchar('\n');
			len++;
		}
	}
}
