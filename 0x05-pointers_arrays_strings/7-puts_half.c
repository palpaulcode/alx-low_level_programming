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
	int i = 0;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		i = len / 2;
		for (; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		i = (len - 1) / 2;
		for (; i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
