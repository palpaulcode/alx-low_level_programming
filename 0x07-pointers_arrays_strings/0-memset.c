#include <string.h>
/**
 * _memset - fills memory with constant byte
 * @s: starting address of memory to be filled
 * @b: the constant to fill memory with
 * @n: number of bytes of memory to fill starting form 's' to be filled
 *
 * Return: returns a pointer to the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
