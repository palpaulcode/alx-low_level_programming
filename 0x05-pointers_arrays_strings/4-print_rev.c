#include <string.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to be printed
 *
 * Return: has no return value
 */
void print_rev(char *s)
{
	int i = 0;
	int len = strlen(s);

	while (len > i)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
