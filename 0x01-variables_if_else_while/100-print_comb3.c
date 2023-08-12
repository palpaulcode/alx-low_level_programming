#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 * followed by a new line
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
			if ((i != j)  || (i != 56 && j != 57))
			{
				putchar(i);
				putchar(j);
				putchar(44); /* comma */
				putchar(32); /* space */
			}
		}
	}
	putchar('\n');
	return (0);
}
