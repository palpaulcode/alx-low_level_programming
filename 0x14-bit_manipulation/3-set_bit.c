#include "main.h"

/**
 * set_bit - sets a bit at a given index
 * @n: number to change to bits
 * @index: index of bit to set
 *
 * Return: 1 on success -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pst;

	if (index > 63)
		return (-1);

	pst = 1 << index;

	*n = *n | pst;

	return (1);
}
