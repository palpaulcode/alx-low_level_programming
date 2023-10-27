#include "main.h"

/**
 * clear_bit - clears a bit at a given index
 * @n: number to use bits from
 * @index: index of bit to clear
 *
 * Return: 1 for success -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pst;

	if (index > 63)
		return (-1);

	pst = ~(1 << index);

	*n = *n & pst;

	return (1);

}
