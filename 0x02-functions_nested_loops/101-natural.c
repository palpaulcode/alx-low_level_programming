#include "main.h"
#include <stdio.h>

/**
 * sum_multiples_of_3_and_5 - find sum of multiples of 3 and 5 below 1024
 *
 * Return: has void return type
 */

void sum_multiples_of_3_and_5(void)
{
	int num;	/* hold value of natural number; they start from 1 */
	int sum = 0;	/* sum of multiples of three and five. Initialized to 0 */

	for (num = 1; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}

	printf("%d\n", sum);

}

/**
 * main -Entry point to the program
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	sum_multiples_of_3_and_5(void);
	return (0);
}
