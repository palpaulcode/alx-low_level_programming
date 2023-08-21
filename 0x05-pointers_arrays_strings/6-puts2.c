#include <string.h>
#include "main.h"
/**
 * puts2 - prints characters of a string at even number positions
 * followed by a new line
 * @str: the string to be printed
 *
 * Return: has no return value
 */
void puts2(char *str)
{
	int i = 0;
	int len = strlen(str);

	while (i < len)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
