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
	char i;

	i = 'a';

	while (i <= 'z')
	{
		if ((i != 'e') && (i != 'q'))
			putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
