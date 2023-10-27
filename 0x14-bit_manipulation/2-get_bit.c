#include "main.h"

/**
 * get_bit - get bit at a given index
 * @n: unsigned integer to change to binary
 * @index: index of bit to get from binary
 *
 * Return: value of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int pst, res;

	if (index > 63)
		return (-1);

	pst = n >> index;

	res = (pst & 1);

	return (res);
}
