#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48 + 1; j <= 57; j++)
		{
			for (k = 48 + 2; k <= 57; k++)
			{
				if (i != j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					putchar(44); /* comma */
					putchar(32); /* space */
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
