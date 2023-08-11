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
	char xter;

	xter = 'a';

	while (xter <= 'z')
	{
		if ((xter == 'e') || (xter == 'q'))
			continue;

		putchar(xter);

		xter++;
	}

	putchar('\n');

	return (0);
}
