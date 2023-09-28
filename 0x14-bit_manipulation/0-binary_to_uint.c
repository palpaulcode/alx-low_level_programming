#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: pointer to a string of binary
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j, n = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	for (j = 0; b[j] != '\0'; j++)
	{
		n <<= 1;

		if (b[j] == '1')
			n += 1;
	}

	return (n);
}
