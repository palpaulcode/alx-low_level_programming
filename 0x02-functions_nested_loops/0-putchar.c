#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * main - Entry point to the program
 * This programa prints '_putchar' as its output
 *
 * Return: return 0 for success
 */

int main(void)
{
	int i =0, len;
	char c[] = "_putchar";

	len = strlen(c);

	while(i < len)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
