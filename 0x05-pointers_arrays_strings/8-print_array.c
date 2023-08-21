#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: the array to print from
 * @n: the number of array elements to print
 *
 * Return: has no return value
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
