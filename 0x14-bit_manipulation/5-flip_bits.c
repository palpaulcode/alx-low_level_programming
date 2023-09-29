#include "main.h"

/**
 * flip_bits - flips bits from one number up to another
 * @n: first number
 * @m: second number
 *
 * Return: number of flips from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int flip_df;

	flip_df = n ^ m;

	while (flip_df)
	{
		if (flip_df & 1)
			count++;

		flip_df >>= 1;
	}

	return (count);
}
