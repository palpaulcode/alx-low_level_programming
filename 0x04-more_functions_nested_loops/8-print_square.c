#include "main.h"

/**
 * print_square - prints a square of # in the terminal
 * @n: size of the square
 *
 * Return: has no return type
 */

void print_square(int n)
{
	int len = 0, sq;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else{
		while (len < n)
		{
			sq = 0;
	
			for (; sq < n; sq++)
			{
				_putchar(35);
			}
			_putchar('\n');
			len++;
		}
	}

}
