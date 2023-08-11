#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	i = 97;
	j = 48;

	while (j <= 57)
	{
		putchar(j);
		j++;
	}

	while (i <= 102)
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
