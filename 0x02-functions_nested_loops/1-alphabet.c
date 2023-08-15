#include "main.h"
/**
 * print_alphabet - Prints the alphabets in lowercase
 *
 * Return: this function has a void return type
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
