#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers
 * @n: number to start printing from
 *
 * Description: function takes an int parameter and
 * prints numbers from it up to 98
 *
 * Return: nothing is returned function has void return type
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
				printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n > 98)
				printf(", ");
		}
		printf("\n");
	}
}

