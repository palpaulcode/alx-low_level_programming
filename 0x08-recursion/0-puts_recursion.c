#include <string.h>
#include "main.h"
/**
 * _puts_recursion - prints a string followed by new line
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}

