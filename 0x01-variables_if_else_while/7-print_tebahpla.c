#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet from a to z in lowercase
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}

	putchar('\n');

	return (0);
}
