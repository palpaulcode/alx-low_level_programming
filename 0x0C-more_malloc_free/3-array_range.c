#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the smallest valu of the array
 * @max: the largest value of the array
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, i;
	unsigned int range;

	if (min > max) /* if min > max return NULL */
		return (NULL);

	range = (max - min) + 1; /* no. of elements of the array */

	arr = malloc(sizeof(int) * range); /* memory reserved */

	if (arr == NULL) /* handle malloc return */
		return (NULL);

	for (i = min; i <= max; i++) /* fill array with values */
		arr[i] = i;

	return (arr);
}
