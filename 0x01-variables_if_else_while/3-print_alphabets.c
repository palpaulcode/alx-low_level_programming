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
	char xup;

	xter = 'a';
	xup = 'A';

	while (xter <= 'z')
	{
		putchar(xter);
		xter++;
	}

	while (xup <= 'Z')
	{
		putchar(xup);
		xup++;
	}

	putchar('\n');

	return (0);
}
