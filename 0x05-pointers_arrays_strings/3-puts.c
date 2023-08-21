#include <string.h>
#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: the string to be printed
 *
 * Return: has no return value
 */
void _puts(char *str)
{
	int i = 0;
	int len = strlen(str);

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
