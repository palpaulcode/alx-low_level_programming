#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints possible different combinations of two digit
 * numbers in the range 0 to 99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48 + 1; j <= 57 ; j++)
		{
			putchar(i);
			putchar(j);
			if (j % 2)
				putchar(44); /* comma */
			putchar(32); /* space */
		}
	}
	putchar('\n');
	return (0);
}
