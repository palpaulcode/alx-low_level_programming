#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet from a to z in lowercase except q and e
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 97;

	while (i <= 122)
	{
		if ((i != 101) || (i != 113))
			putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
