#include <string.h>
#include "main.h"
/**
 * puts_half - prints second half of a string
 * followed by a new line
 * @str: the string to be printed
 *
 * Return: has no return value
 */
void puts_half(char *str)
{
	int half = 0;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 1)
	{
		half = ((len - 1) / 2) + 1;
		for (; half < len; half++)
			_putchar(str[half]);
	}
	else
	{
		half = len / 2;
		for (; half < len; half++)
			_putchar(str[half]);
	}
	_putchar('\n');
}
