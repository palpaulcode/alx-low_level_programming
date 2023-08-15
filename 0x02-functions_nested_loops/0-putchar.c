#include <stdio.h>
#include "_putchar.c"
#include <string.h>

/**
 * main - Entry point to the program
 * This programa prints '_putchar' as its output
 *
 * Return: return 0 for success
 */

int _putchar(char);

int main(void)
{
	int i =0, len;
	char c[] = "_putchar";

	len = strlen(c);

	while(i <= len)
	{
		_putchar(c[i]);
		i++;
	}
	return (0);
}
