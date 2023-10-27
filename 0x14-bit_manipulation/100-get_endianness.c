#include "main.h"

/**
 * get_endianness - checks for small or big endian
 *
 * Return: 0 if Big endian 1 for little endian
 */
int get_endianness(void)
{
	int n = 1;
	char *c = (char *) &n;

	if (*c == 1)
		return (1);

	return (0);
}
